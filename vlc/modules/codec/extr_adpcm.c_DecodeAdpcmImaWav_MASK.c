
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* int16_t ;
struct TYPE_8__ {int i_channels; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_10__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_11__ {int i_block; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_12__ {int i_step_index; int i_predictor; } ;
typedef TYPE_5__ adpcm_ima_wav_channel_t ;


 void* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0, int16_t *VAR_1,
                               uint8_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    adpcm_ima_wav_channel_t VAR_4[2];
    int VAR_5;
    int VAR_6;

    VAR_6 = VAR_0->fmt_out.audio.i_channels == 2 ? 1 : 0;

    FUNC_3( VAR_4[0].i_predictor );
    FUNC_2( VAR_4[0].i_step_index );
    FUNC_1( VAR_4[0].i_step_index, 0, 88 );
    VAR_2++;

    if( VAR_6 )
    {
        FUNC_3( VAR_4[1].i_predictor );
        FUNC_2( VAR_4[1].i_step_index );
        FUNC_1( VAR_4[1].i_step_index, 0, 88 );
        VAR_2++;
    }

    if( VAR_6 )
    {
        for( VAR_5 = 2 * (VAR_3->i_block - 8);
             VAR_5 > 0;
             VAR_5 -= 16 )
        {
            int VAR_7;

            for( VAR_7 = 0; VAR_7 < 4; VAR_7++ )
            {
                VAR_1[VAR_7 * 4] =
                    FUNC_0(&VAR_4[0],VAR_2[VAR_7]&0x0f);
                VAR_1[VAR_7 * 4 + 2] =
                    FUNC_0(&VAR_4[0],VAR_2[VAR_7] >> 4);
            }
            VAR_2 += 4;

            for( VAR_7 = 0; VAR_7 < 4; VAR_7++ )
            {
                VAR_1[VAR_7 * 4 + 1] =
                    FUNC_0(&VAR_4[1],VAR_2[VAR_7]&0x0f);
                VAR_1[VAR_7 * 4 + 3] =
                    FUNC_0(&VAR_4[1],VAR_2[VAR_7] >> 4);
            }
            VAR_2 += 4;
            VAR_1 += 16;

        }


    }
    else
    {
        for( VAR_5 = 2 * (VAR_3->i_block - 4);
             VAR_5 > 0;
             VAR_5 -= 2, VAR_2++ )
        {
            *VAR_1++ =FUNC_0( &VAR_4[0], (*VAR_2)&0x0f );
            *VAR_1++ =FUNC_0( &VAR_4[0], (*VAR_2) >> 4 );
        }
    }
}
