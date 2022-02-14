
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {size_t i_block; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_8__ {int i_predictor; int i_step_index; } ;
typedef TYPE_3__ adpcm_ima_wav_channel_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_0, int16_t *VAR_1,
                            uint8_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    uint8_t *VAR_4 = &VAR_2[VAR_3->i_block];
    adpcm_ima_wav_channel_t VAR_5;
    adpcm_ima_wav_channel_t VAR_6;
    int VAR_7;

    VAR_2 += 10;

    FUNC_2( VAR_5.i_predictor );
    FUNC_2( VAR_6.i_predictor );
    FUNC_1( VAR_5.i_step_index );
    FUNC_1( VAR_6.i_step_index );

    VAR_7 = VAR_6.i_predictor;

    while( VAR_2 + 1 <= VAR_4 )
    {

        FUNC_0( &VAR_5,
                                 (*VAR_2)&0x0f);

        FUNC_0( &VAR_6,
                                 (*VAR_2) >> 4 );

        VAR_7 = ( VAR_7 + VAR_6.i_predictor ) / 2;

        *VAR_1++ = VAR_5.i_predictor + VAR_7;
        *VAR_1++ = VAR_5.i_predictor - VAR_7;

        VAR_2++;

        FUNC_0( &VAR_5,
                                 (*VAR_2)&0x0f);

        *VAR_1++ = VAR_5.i_predictor + VAR_7;
        *VAR_1++ = VAR_5.i_predictor - VAR_7;


        FUNC_0( &VAR_5,
                                 (*VAR_2)>>4);
        VAR_2++;
        if( VAR_2 < VAR_4 )
        {
            FUNC_0( &VAR_6,
                                     (*VAR_2)&0x0f );

            VAR_7 = ( VAR_7 + VAR_6.i_predictor ) / 2;

            *VAR_1++ = VAR_5.i_predictor + VAR_7;
            *VAR_1++ = VAR_5.i_predictor - VAR_7;

            FUNC_0( &VAR_5,
                                     (*VAR_2)>>4);
            VAR_2++;

            *VAR_1++ = VAR_5.i_predictor + VAR_7;
            *VAR_1++ = VAR_5.i_predictor - VAR_7;
        }
    }
}
