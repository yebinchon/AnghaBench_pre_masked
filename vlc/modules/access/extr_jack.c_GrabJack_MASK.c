
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {size_t i_channels; size_t jack_sample_size; TYPE_3__* p_block_audio; int pts; int p_jack_ringbuffer; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {size_t i_buffer; int i_pts; int i_dts; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int ,char*,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static block_t *FUNC_6( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    block_t *VAR_2;


    size_t VAR_3 = FUNC_3( VAR_1->p_jack_ringbuffer );

    if( VAR_3 < 100 )
    {


        FUNC_5(1000);
        return ((void*)0);
    }

    if( VAR_1->p_block_audio )
    {
        VAR_2 = VAR_1->p_block_audio;
    }
    else
    {
        VAR_2 = FUNC_0( VAR_3 );
    }
    if( !VAR_2 )
    {
        FUNC_4( VAR_0, "cannot get block" );
        return 0;
    }


    VAR_3 >>= 1;
    VAR_3--;
    VAR_3 |= VAR_3 >> 1;
    VAR_3 |= VAR_3 >> 2;
    VAR_3 |= VAR_3 >> 4;
    VAR_3 |= VAR_3 >> 8;
    VAR_3 |= VAR_3 >> 16;
    VAR_3++;

    VAR_3 = FUNC_2( VAR_1->p_jack_ringbuffer, ( char * ) VAR_2->p_buffer, VAR_3 );

    VAR_2->i_dts = VAR_2->i_pts = FUNC_1( &VAR_1->pts,
         VAR_3/(VAR_1->i_channels * VAR_1->jack_sample_size) );

    VAR_1->p_block_audio = VAR_2;
    VAR_2->i_buffer = VAR_3;
    VAR_1->p_block_audio = 0;

    return VAR_2;
}
