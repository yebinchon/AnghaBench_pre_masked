
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* packet; int bytes; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_7__ {int i_sar_num; int i_sar_den; int i_frame_rate; int i_frame_rate_base; void* i_height; void* i_visible_height; void* i_width; void* i_visible_width; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_9__ {int i_granule_shift; TYPE_6__ fmt; int dts; } ;
typedef TYPE_3__ logical_stream_t ;
typedef int demux_t ;


 int FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 int FUNC_2 (int *,TYPE_6__*,int*,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static bool FUNC_4( demux_t *VAR_0, logical_stream_t *VAR_1,
                               ogg_packet *VAR_2 )
{
    switch( VAR_2->packet[5] )
    {

    case 0x01:

        if ( VAR_2->packet[6] != 0x01 || VAR_2->packet[7] != 0x00 )
            return 0;
        VAR_1->i_granule_shift = 32;
        VAR_1->fmt.video.i_width = FUNC_1( &VAR_2->packet[8] );
        VAR_1->fmt.video.i_height = FUNC_1( &VAR_2->packet[10] );
        VAR_1->fmt.video.i_visible_width = VAR_1->fmt.video.i_width;
        VAR_1->fmt.video.i_visible_height = VAR_1->fmt.video.i_height;
        VAR_1->fmt.video.i_sar_num = FUNC_0( &VAR_2->packet[12 - 1] ) & 0x0FFF;
        VAR_1->fmt.video.i_sar_den = FUNC_0( &VAR_2->packet[15 - 1] ) & 0x0FFF;
        VAR_1->fmt.video.i_frame_rate = FUNC_0( &VAR_2->packet[18] );
        VAR_1->fmt.video.i_frame_rate_base = FUNC_0( &VAR_2->packet[22] );
        if ( !VAR_1->fmt.video.i_frame_rate || !VAR_1->fmt.video.i_frame_rate_base )
            return 0;
        FUNC_3( &VAR_1->dts, VAR_1->fmt.video.i_frame_rate,
                                   VAR_1->fmt.video.i_frame_rate_base );
        return 1;

    case 0x02:
        FUNC_2( VAR_0, & VAR_1->fmt,
                         VAR_2->packet + 7, VAR_2->bytes - 7 );
        return 1;
    default:
        return 0;
    }
}
