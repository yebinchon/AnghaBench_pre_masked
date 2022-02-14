
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int oggpack_buffer ;
struct TYPE_8__ {int bytes; int packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_10__ {void* i_rate; void* i_channels; } ;
struct TYPE_7__ {void* i_bitrate; TYPE_4__ audio; } ;
struct TYPE_9__ {int b_force_backup; TYPE_1__ fmt; int dts; } ;
typedef TYPE_3__ logical_stream_t ;


 void* VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_5( logical_stream_t *VAR_1,
                                  ogg_packet *VAR_2 )
{
    oggpack_buffer VAR_3;




    VAR_1->b_force_backup = 1;


    FUNC_4( &VAR_3, VAR_2->packet, VAR_2->bytes);
    FUNC_2( &VAR_3, 88 );
    VAR_1->fmt.audio.i_channels = FUNC_3( &VAR_3, 8 );
    FUNC_1(&VAR_1->fmt.audio);
    VAR_1->fmt.audio.i_rate = FUNC_3( &VAR_3, 32 );
    if( VAR_1->fmt.audio.i_rate == 0 )
        return 0;
    FUNC_0( &VAR_1->dts, VAR_1->fmt.audio.i_rate, 1 );

    FUNC_2( &VAR_3, 32 );
    VAR_1->fmt.i_bitrate = FUNC_3( &VAR_3, 32 );
    if( VAR_1->fmt.i_bitrate > VAR_0 ) VAR_1->fmt.i_bitrate = 0;
    return 1;
}
