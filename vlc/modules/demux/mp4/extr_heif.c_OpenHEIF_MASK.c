
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_9__ {int fmt; } ;
struct heif_private_t {int i_image_duration; TYPE_1__ current; TYPE_5__* p_title; int * p_root; } ;
struct TYPE_10__ {int i_time_offset; int psz_name; } ;
typedef TYPE_2__ seekpoint_t ;
struct TYPE_11__ {int pf_control; int pf_demux; void* p_sys; int s; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {int i_flags; scalar_t__ psz_item_name; } ;
struct TYPE_12__ {int i_seekpoint; int seekpoint; } ;
typedef int MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,char*,int *) ;
 int FUNC_5 (int,int ,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int const,int const,int const,int const) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 struct heif_private_t* FUNC_8 (int,int) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct heif_private_t*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 TYPE_5__* FUNC_13 () ;
 TYPE_2__* FUNC_14 () ;
 int FUNC_15 (int ,int const**,int) ;
 int FUNC_16 (int ) ;

int FUNC_17( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t *)VAR_9;
    const uint8_t *VAR_11;

    if( FUNC_15( VAR_10->s, &VAR_11, 12 ) < 12 )
        return VAR_6;

    if( FUNC_6( VAR_11[4], VAR_11[5], VAR_11[6], VAR_11[7] ) != VAR_0 )
        return VAR_6;

    switch( FUNC_6( VAR_11[8], VAR_11[9], VAR_11[10], VAR_11[11] ) )
    {
        case 129:
        case 134:
        case 133:
        case 130:
        case 138:
        case 136:
            break;
        case 128:
        case 132:
        case 131:
        case 137:
        case 135:
        default:
            return VAR_6;
    }

    MP4_Box_t *VAR_12 = FUNC_2( VAR_10->s );
    if( !VAR_12 )
        return VAR_6;

    FUNC_1( VAR_10->s, VAR_12 );

    struct heif_private_t *VAR_13 = FUNC_8( 1, sizeof(*VAR_13) );
    VAR_10->p_sys = (void *) VAR_13;
    VAR_13->p_root = VAR_12;
    VAR_13->p_title = FUNC_13();
    if( !VAR_13->p_title )
    {
        FUNC_10( VAR_13 );
        return VAR_7;
    }

    VAR_13->i_image_duration = FUNC_16(FUNC_12( VAR_10, "heif-image-duration" ));
    if( VAR_13->i_image_duration <= 0 )
        VAR_13->i_image_duration = FUNC_7(VAR_4);

    MP4_Box_t *VAR_14 = ((void*)0);
    while( (VAR_14 = FUNC_4( VAR_12, VAR_1, "meta/iinf/infe", VAR_14 )) )
    {
        if( (FUNC_0(VAR_14)->i_flags & 0x01) != 0x00 ||
                !FUNC_3( VAR_14, VAR_12 ) )
            continue;
        seekpoint_t *VAR_15 = FUNC_14();
        if( VAR_15 )
        {
            VAR_15->i_time_offset = VAR_13->p_title->i_seekpoint * VAR_13->i_image_duration;
            if( FUNC_0(VAR_14)->psz_item_name )
                VAR_15->psz_name = FUNC_11( FUNC_0(VAR_14)->psz_item_name );
            FUNC_5( VAR_13->p_title->i_seekpoint, VAR_13->p_title->seekpoint, VAR_15 );
        }
    }

    FUNC_9( &VAR_13->current.fmt, VAR_5, 0 );

    VAR_10->pf_demux = VAR_3;
    VAR_10->pf_control = VAR_2;

    return VAR_8;
}
