
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* p_sectors; int i_tracks; } ;
typedef TYPE_3__ vcddev_toc_t ;
struct TYPE_17__ {TYPE_6__* p_sys; } ;
typedef TYPE_4__ stream_t ;
struct TYPE_18__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_19__ {int i_sector; int i_current_title; int i_current_seekpoint; scalar_t__ offset; TYPE_2__* titles; int vcddev; TYPE_3__* p_toc; } ;
typedef TYPE_6__ access_sys_t ;
struct TYPE_15__ {scalar_t__ count; scalar_t__* seekpoints; } ;
struct TYPE_14__ {int i_lba; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ,int,int ) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;

__attribute__((used)) static block_t *FUNC_7( stream_t *VAR_3, bool *restrict VAR_4 )
{
    access_sys_t *VAR_5 = VAR_3->p_sys;
    const vcddev_toc_t *VAR_6 = VAR_5->p_toc;
    int VAR_7 = VAR_0;
    block_t *VAR_8;


    while( VAR_5->i_sector >= VAR_6->p_sectors[VAR_5->i_current_title + 2].i_lba )
    {
        if( VAR_5->i_current_title + 2 >= FUNC_0(VAR_6->i_tracks) )
        {
            *VAR_4 = 1;
            return ((void*)0);
        }

        VAR_5->i_current_title++;
        VAR_5->i_current_seekpoint = 0;
        VAR_5->offset = 0;
    }


    if( VAR_5->i_sector + VAR_7 >=
        VAR_6->p_sectors[VAR_5->i_current_title + 2].i_lba )
    {
        VAR_7 = VAR_6->p_sectors[VAR_5->i_current_title + 2 ].i_lba - VAR_5->i_sector;
    }


    if( VAR_7 < 0 || !( VAR_8 = FUNC_2( VAR_7 * VAR_1 ) ) )
    {
        FUNC_6( VAR_3, "cannot get a new block of size: %i",
                 VAR_7 * VAR_1 );
        return ((void*)0);
    }

    if( FUNC_4( FUNC_1(VAR_3), VAR_5->vcddev,
            VAR_5->i_sector, VAR_8->p_buffer, VAR_7, VAR_2 ) < 0 )
    {
        FUNC_6( VAR_3, "cannot read sector %i", VAR_5->i_sector );
        FUNC_3( VAR_8 );


        VAR_5->offset += VAR_1;
        VAR_5->i_sector++;
        return ((void*)0);
    }


    for( int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++ )
    {
        int VAR_10 = VAR_5->i_current_title;

        if( VAR_5->titles[VAR_10].count > 0 &&
            VAR_5->i_current_seekpoint + 1 < VAR_5->titles[VAR_10].count &&
                (VAR_5->offset + VAR_9 * VAR_1) >=
            VAR_5->titles[VAR_10].seekpoints[VAR_5->i_current_seekpoint + 1] )
        {
            FUNC_5( VAR_3, "seekpoint change" );
            VAR_5->i_current_seekpoint++;
        }
    }


    VAR_5->offset += VAR_8->i_buffer;
    VAR_5->i_sector += VAR_7;

    return VAR_8;
}
