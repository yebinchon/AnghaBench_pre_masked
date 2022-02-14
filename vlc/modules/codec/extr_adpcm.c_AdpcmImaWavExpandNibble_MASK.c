
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_step_index; int i_predictor; } ;
typedef TYPE_1__ adpcm_ima_wav_channel_t ;


 int FUNC_0 (int,int,int) ;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(adpcm_ima_wav_channel_t *VAR_2,
                                   int VAR_3 )
{
    int VAR_4;

    VAR_4 = VAR_1[VAR_2->i_step_index] >> 3;
    if( VAR_3&0x04 ) VAR_4 += VAR_1[VAR_2->i_step_index];
    if( VAR_3&0x02 ) VAR_4 += VAR_1[VAR_2->i_step_index]>>1;
    if( VAR_3&0x01 ) VAR_4 += VAR_1[VAR_2->i_step_index]>>2;
    if( VAR_3&0x08 )
        VAR_2->i_predictor -= VAR_4;
    else
        VAR_2->i_predictor += VAR_4;

    FUNC_0( VAR_2->i_predictor, -32768, 32767 );

    VAR_2->i_step_index += VAR_0[VAR_3];

    FUNC_0( VAR_2->i_step_index, 0, 88 );

    return( VAR_2->i_predictor );
}
