
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int i_width; size_t i_idx_left; size_t i_idx_right; int i_nb_chans; } ;
typedef TYPE_2__ visual_effect_t ;
typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
typedef int int8_t ;
struct TYPE_11__ {scalar_t__ i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_8__ {int* p_pixels; int i_lines; int i_pitch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(visual_effect_t * VAR_0, vlc_object_t *VAR_1,
                     const block_t * VAR_2 , picture_t * VAR_3)
{
    FUNC_0(VAR_1);

    int VAR_4;
    float *VAR_5 ;
    uint8_t *VAR_6[2][3];

    for( VAR_4 = 0 ; VAR_4 < 2 ; VAR_4++ )
    {
        for( int VAR_7 = 0 ; VAR_7 < 3 ; VAR_7++ )
        {
            VAR_6[VAR_4][VAR_7] =
                VAR_3->p[VAR_7].p_pixels + (VAR_4 * 2 + 1) * VAR_3->p[VAR_7].i_lines
                / 4 * VAR_3->p[VAR_7].i_pitch;
        }
    }

    for( VAR_4 = 0, VAR_5 = (float *)VAR_2->p_buffer;
            VAR_4 < FUNC_1( VAR_0->i_width, (int)VAR_2->i_nb_samples );
            VAR_4++ )
    {
        int8_t VAR_8;


        VAR_8 = VAR_5[VAR_0->i_idx_left] * 127;
        *(VAR_6[0][0]
                + VAR_3->p[0].i_pitch * VAR_4 / VAR_0->i_width
                + VAR_3->p[0].i_lines * VAR_8 / 512
                * VAR_3->p[0].i_pitch) = 0xbf;
        *(VAR_6[0][1]
                + VAR_3->p[1].i_pitch * VAR_4 / VAR_0->i_width
                + VAR_3->p[1].i_lines * VAR_8 / 512
                * VAR_3->p[1].i_pitch) = 0xff;



        VAR_8 = VAR_5[VAR_0->i_idx_right] * 127;
        *(VAR_6[1][0]
                + VAR_3->p[0].i_pitch * VAR_4 / VAR_0->i_width
                + VAR_3->p[0].i_lines * VAR_8 / 512
                * VAR_3->p[0].i_pitch) = 0x9f;
        *(VAR_6[1][2]
                + VAR_3->p[2].i_pitch * VAR_4 / VAR_0->i_width
                + VAR_3->p[2].i_lines * VAR_8 / 512
                * VAR_3->p[2].i_pitch) = 0xdd;

        VAR_5 += VAR_0->i_nb_chans;
    }
    return 0;
}
