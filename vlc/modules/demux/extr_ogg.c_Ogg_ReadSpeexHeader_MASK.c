
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_12__ {int bytes; int packet; } ;
typedef TYPE_4__ ogg_packet ;
struct TYPE_10__ {void* i_framesperpacket; void* i_framesize; } ;
struct TYPE_11__ {TYPE_2__ speex; } ;
struct TYPE_14__ {void* i_channels; void* i_rate; } ;
struct TYPE_9__ {void* i_bitrate; TYPE_6__ audio; } ;
struct TYPE_13__ {int b_force_backup; void* i_extra_headers_packets; TYPE_3__ special; TYPE_1__ fmt; int dts; } ;
typedef TYPE_5__ logical_stream_t ;


 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_5( logical_stream_t *VAR_0,
                                 ogg_packet *VAR_1 )
{
    oggpack_buffer VAR_2;




    VAR_0->b_force_backup = 1;


    FUNC_4( &VAR_2, VAR_1->packet, VAR_1->bytes);
    FUNC_2( &VAR_2, 224 );
    FUNC_2( &VAR_2, 32 );
    FUNC_2( &VAR_2, 32 );
    VAR_0->fmt.audio.i_rate = FUNC_3( &VAR_2, 32 );
    if ( !VAR_0->fmt.audio.i_rate )
        return 0;
    FUNC_0( &VAR_0->dts, VAR_0->fmt.audio.i_rate, 1 );
    FUNC_2( &VAR_2, 32 );
    FUNC_2( &VAR_2, 32 );
    VAR_0->fmt.audio.i_channels = FUNC_3( &VAR_2, 32 );
    FUNC_1(&VAR_0->fmt.audio);
    VAR_0->fmt.i_bitrate = FUNC_3( &VAR_2, 32 );
    VAR_0->special.speex.i_framesize =
            FUNC_3( &VAR_2, 32 );
    FUNC_2( &VAR_2, 32 );
    VAR_0->special.speex.i_framesperpacket =
            FUNC_3( &VAR_2, 32 );
    VAR_0->i_extra_headers_packets = FUNC_3( &VAR_2, 32 );
    return 1;
}
