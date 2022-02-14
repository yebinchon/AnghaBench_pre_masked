
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * palette; int i_original_frame_height; int i_original_frame_width; } ;
struct TYPE_9__ {TYPE_1__ spu; } ;
struct TYPE_10__ {scalar_t__ i_codec; int i_extra; TYPE_2__ subs; scalar_t__ p_extra; int i_bitrate; scalar_t__ i_original_fourcc; int i_profile; int i_cat; } ;
struct TYPE_11__ {TYPE_3__ fmt; int i_track_ID; int i_height; int i_width; } ;
typedef TYPE_4__ mp4_track_t ;
typedef int demux_t ;
struct TYPE_12__ {int i_objectProfileIndication; int i_decoder_specific_info_len; int p_decoder_specific_info; int i_avg_bitrate; } ;
typedef TYPE_5__ MP4_descriptor_decoder_config_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int,scalar_t__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_5( demux_t *VAR_5, mp4_track_t *VAR_6, const MP4_descriptor_decoder_config_t *VAR_7 )
{

    switch( VAR_7->i_objectProfileIndication )
    {

    case( 0xe0 ):
        if( VAR_6->fmt.i_cat == VAR_1 )
        {
            VAR_6->fmt.i_codec = VAR_4;
            if( VAR_6->i_width > 0 )
                VAR_6->fmt.subs.spu.i_original_frame_width = VAR_6->i_width;
            if( VAR_6->i_height > 0 )
                VAR_6->fmt.subs.spu.i_original_frame_height = VAR_6->i_height;
        }
        break;
    case( 0xe1 ):
        if( VAR_6->fmt.i_cat == VAR_0 )
        {
            VAR_6->fmt.i_codec = VAR_3;
        }
        break;


    default:
        if( FUNC_1( VAR_7->i_objectProfileIndication,
                                       VAR_7->p_decoder_specific_info,
                                       VAR_7->i_decoder_specific_info_len,
                                       &VAR_6->fmt.i_codec,
                                       &VAR_6->fmt.i_profile ) )
            break;

        FUNC_4( VAR_5,
                  "unknown objectProfileIndication(0x%x) (Track[ID 0x%x])",
                  VAR_7->i_objectProfileIndication,
                  VAR_6->i_track_ID );
        return;
    }

    VAR_6->fmt.i_original_fourcc = 0;
    VAR_6->fmt.i_bitrate = VAR_7->i_avg_bitrate;

    VAR_6->fmt.i_extra = VAR_7->i_decoder_specific_info_len;
    if( VAR_6->fmt.i_extra > 0 )
    {
        VAR_6->fmt.p_extra = FUNC_2( VAR_6->fmt.i_extra );
        FUNC_3( VAR_6->fmt.p_extra, VAR_7->p_decoder_specific_info,
                VAR_6->fmt.i_extra );
    }
    if( VAR_6->fmt.i_codec == VAR_4 &&
            VAR_6->fmt.i_extra >= 16 * 4 )
    {
        for( int VAR_8 = 0; VAR_8 < 16; VAR_8++ )
        {
            VAR_6->fmt.subs.spu.palette[1 + VAR_8] =
                    FUNC_0((char*)VAR_6->fmt.p_extra + VAR_8 * 4);
        }
        VAR_6->fmt.subs.spu.palette[0] = VAR_2;
    }
}
