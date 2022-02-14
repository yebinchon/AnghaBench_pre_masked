
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_4__* p_sectors; int i_tracks; } ;
typedef TYPE_5__ vcddev_toc_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_19__ {TYPE_8__* p_sys; } ;
typedef TYPE_6__ stream_t ;
struct TYPE_20__ {TYPE_2__* entry; int psz_id; int i_entries_nb; } ;
typedef TYPE_7__ entries_sect_t ;
struct TYPE_21__ {TYPE_3__* titles; int vcddev; TYPE_5__* p_toc; } ;
typedef TYPE_8__ access_sys_t ;
struct TYPE_17__ {int const i_lba; } ;
struct TYPE_16__ {int* seekpoints; int count; } ;
struct TYPE_14__ {int frame; int second; int minute; } ;
struct TYPE_15__ {TYPE_1__ msf; int i_track; } ;


 int BCD_TO_BIN (int ) ;
 int CD_SECTOR_SIZE ;
 int GetWBE (int *) ;
 int MSF_TO_LBA2 (int,int,int) ;
 int const USABLE_TITLES (int ) ;
 int VCD_DATA_SIZE ;
 int VCD_ENTRIES_SECTOR ;
 int VCD_TYPE ;
 int VLC_EGENERIC ;
 int VLC_OBJECT (TYPE_6__*) ;
 int VLC_SUCCESS ;
 scalar_t__ ioctl_ReadSectors (int ,int ,int ,int *,int,int ) ;
 int memcpy (TYPE_7__*,int *,int ) ;
 int msg_Dbg (TYPE_6__*,char*,int,int const,int const) ;
 int msg_Err (TYPE_6__*,char*) ;
 scalar_t__ strncmp (int ,char*,int) ;
 int* xrealloc (int*,int) ;

__attribute__((used)) static int EntryPoints( stream_t *p_access )
{
    access_sys_t *p_sys = p_access->p_sys;
    const vcddev_toc_t *p_toc = p_sys->p_toc;
    uint8_t sector[VCD_DATA_SIZE];

    entries_sect_t entries;
    int i_nb;


    if( ioctl_ReadSectors( VLC_OBJECT(p_access), p_sys->vcddev,
        VCD_ENTRIES_SECTOR, sector, 1, VCD_TYPE ) < 0 )
    {
        msg_Err( p_access, "could not read entry points sector" );
        return VLC_EGENERIC;
    }
    memcpy( &entries, sector, CD_SECTOR_SIZE );

    i_nb = GetWBE( &entries.i_entries_nb );
    if( i_nb > 500 )
    {
        msg_Err( p_access, "invalid entry points number" );
        return VLC_EGENERIC;
    }

    if( strncmp( entries.psz_id, "ENTRYVCD", sizeof( entries.psz_id ) ) &&
        strncmp( entries.psz_id, "ENTRYSVD", sizeof( entries.psz_id ) ) )
    {
        msg_Err( p_access, "unrecognized entry points format" );
        return VLC_EGENERIC;
    }

    for( int i = 0; i < i_nb; i++ )
    {
        const int i_title = BCD_TO_BIN(entries.entry[i].i_track) - 2;
        const int i_sector =
            (MSF_TO_LBA2( BCD_TO_BIN( entries.entry[i].msf.minute ),
                          BCD_TO_BIN( entries.entry[i].msf.second ),
                          BCD_TO_BIN( entries.entry[i].msf.frame ) ));
        if( i_title < 0 ) continue;
        if( i_title >= USABLE_TITLES(p_toc->i_tracks) ) continue;

        msg_Dbg( p_access, "Entry[%d] title=%d sector=%d",
                 i, i_title, i_sector );

        p_sys->titles[i_title].seekpoints = xrealloc(
            p_sys->titles[i_title].seekpoints,
            sizeof( uint64_t ) * (p_sys->titles[i_title].count + 1) );
        p_sys->titles[i_title].seekpoints[p_sys->titles[i_title].count++] =
            (i_sector - p_toc->p_sectors[i_title+1].i_lba) * VCD_DATA_SIZE;
    }

    return VLC_SUCCESS;
}
