
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int16_t ;
struct TYPE_7__ {int i_channels; } ;
struct TYPE_8__ {TYPE_1__ audio; } ;
struct TYPE_9__ {TYPE_2__ fmt_out; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_10__ {int i_step_index; scalar_t__ i_predictor; } ;
typedef TYPE_4__ adpcm_ima_wav_channel_t ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_0, int16_t *VAR_1,
                              uint8_t *VAR_2 )
{
    adpcm_ima_wav_channel_t VAR_3[2];
    int VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_6 = VAR_0->fmt_out.audio.i_channels;

    for( VAR_5 = 0; VAR_5 < VAR_0->fmt_out.audio.i_channels; VAR_5++ )
    {

        VAR_3[VAR_5].i_predictor = (int16_t)((( ( VAR_2[0] << 1 )|( VAR_2[1] >> 7 ) ))<<7);
        VAR_3[VAR_5].i_step_index = VAR_2[1]&0x7f;

        FUNC_1( VAR_3[VAR_5].i_step_index, 0, 88 );
        VAR_2 += 2;

        for( VAR_4 = 0; VAR_4 < 64; VAR_4 +=2 )
        {
            *VAR_1 = FUNC_0( &VAR_3[VAR_5], (*VAR_2)&0x0f);
            VAR_1 += VAR_6;

            *VAR_1 = FUNC_0( &VAR_3[VAR_5], (*VAR_2 >> 4)&0x0f);
            VAR_1 += VAR_6;

            VAR_2++;
        }


        VAR_1 += 1 - 64 * VAR_6;
    }
}
