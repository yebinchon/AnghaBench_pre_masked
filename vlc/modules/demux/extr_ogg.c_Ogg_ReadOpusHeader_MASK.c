
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
struct TYPE_10__ {int i_rate; void* i_channels; } ;
struct TYPE_7__ {TYPE_4__ audio; scalar_t__ i_bitrate; } ;
struct TYPE_9__ {int b_force_backup; void* i_pre_skip; TYPE_1__ fmt; int dts; } ;
typedef TYPE_3__ logical_stream_t ;


 void* FUNC_0 (int,void*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6( logical_stream_t *VAR_0,
                                ogg_packet *VAR_1 )
{
    oggpack_buffer VAR_2;




    VAR_0->b_force_backup = 1;



    VAR_0->fmt.audio.i_rate = 48000;
    FUNC_1( &VAR_0->dts, VAR_0->fmt.audio.i_rate, 1 );
    VAR_0->fmt.i_bitrate = 0;


    FUNC_5( &VAR_2, VAR_1->packet, VAR_1->bytes);
    FUNC_3( &VAR_2, 64 );
    FUNC_3( &VAR_2, 8 );
    VAR_0->fmt.audio.i_channels = FUNC_4( &VAR_2, 8 );
    FUNC_2(&VAR_0->fmt.audio);
    VAR_0->i_pre_skip = FUNC_4( &VAR_2, 16 );





    VAR_0->i_pre_skip = FUNC_0( 80*48, VAR_0->i_pre_skip );
}
