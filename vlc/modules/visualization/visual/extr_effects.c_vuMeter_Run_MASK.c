
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {size_t i_idx_left; size_t i_idx_right; float* p_data; int i_width; int i_nb_chans; } ;
typedef TYPE_2__ visual_effect_t ;
struct TYPE_10__ {TYPE_1__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_11__ {unsigned int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_8__ {int* p_pixels; int i_lines; int i_pitch; } ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float) ;
 int FUNC_3 (float) ;
 float* FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(visual_effect_t * VAR_5, vlc_object_t *VAR_6,
                       const block_t * VAR_7 , picture_t * VAR_8)
{
    FUNC_0(VAR_6);
    float VAR_9 = 0;
    float VAR_10 = 0;


    for ( unsigned VAR_11 = 0 ; VAR_11 < VAR_7->i_nb_samples; VAR_11++ )
    {
        const float *VAR_12 = (float *)VAR_7->p_buffer;
        float VAR_13;

        VAR_13 = VAR_12[VAR_5->i_idx_left] * 256;
        if (VAR_13 > VAR_9)
            VAR_9 = VAR_13;

        VAR_13 = VAR_12[VAR_5->i_idx_right] * 256;
        if (VAR_13 > VAR_10)
            VAR_10 = VAR_13;

        VAR_12 += VAR_5->i_nb_chans;
    }

    VAR_9 = FUNC_2(VAR_9);
    VAR_10 = FUNC_2(VAR_10);


    if ( VAR_9 > 200 * VAR_3 )
        VAR_9 = 200 * VAR_3;
    if ( VAR_10 > 200 * VAR_3 )
        VAR_10 = 200 * VAR_3;

    float *VAR_14;

    if( !VAR_5->p_data )
    {

        VAR_5->p_data = FUNC_4( 2, sizeof(float) );
        VAR_14 = VAR_5->p_data;
        VAR_14[0] = VAR_9;
        VAR_14[1] = VAR_10;
    }
    else
    {


        VAR_14 = VAR_5->p_data;

        if ( VAR_9 > VAR_14[0] - 6 )
            VAR_14[0] = VAR_9;
        else
            VAR_14[0] = VAR_14[0] - 6;

        if ( VAR_10 > VAR_14[1] - 6 )
            VAR_14[1] = VAR_10;
        else
            VAR_14[1] = VAR_14[1] - 6;
    }

    int VAR_15, VAR_16;
    float VAR_17;
    float VAR_18;

    int VAR_19 = VAR_5->i_width / 2 - 120;

    for ( int VAR_20 = 0; VAR_20 < 2; VAR_20++ )
    {

        int VAR_21 = 0;
        VAR_18 = VAR_1;
        for ( VAR_17 = -VAR_4; VAR_17 <= VAR_4; VAR_17 = VAR_17 + 0.003 )
        {
            for ( unsigned VAR_22 = 140; VAR_22 <= 150; VAR_22++ )
            {
                VAR_16 = VAR_22 * FUNC_1(VAR_17) + 20;
                VAR_15 = VAR_22 * FUNC_3(VAR_17) + VAR_19 + 240 * VAR_20;

                if (VAR_17 >= VAR_18 + VAR_2 && VAR_18 <= VAR_0)
                {
                    VAR_18 = VAR_18 + VAR_2;
                    VAR_21 = VAR_21 + 5;
                }
                *(VAR_8->p[0].p_pixels +
                        (VAR_8->p[0].i_lines - VAR_16 - 1 ) * VAR_8->p[0].i_pitch
                        + VAR_15 ) = 0x45;
                *(VAR_8->p[1].p_pixels +
                        (VAR_8->p[1].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[1].i_pitch
                        + VAR_15 / 2 ) = 0x0;
                *(VAR_8->p[2].p_pixels +
                        (VAR_8->p[2].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[2].i_pitch
                        + VAR_15 / 2 ) = 0x4D + VAR_21;
            }
        }


        VAR_17 = (float)VAR_14[VAR_20] / 200 - VAR_4;
        for ( int VAR_23 = 0; VAR_23 <= 150; VAR_23++ )
        {
            VAR_16 = VAR_23 * FUNC_1(VAR_17) + 20;
            VAR_15 = VAR_23 * FUNC_3(VAR_17) + VAR_19 + 240 * VAR_20;
            *(VAR_8->p[0].p_pixels +
                    (VAR_8->p[0].i_lines - VAR_16 - 1 ) * VAR_8->p[0].i_pitch
                    + VAR_15 ) = 0xAD;
            *(VAR_8->p[1].p_pixels +
                    (VAR_8->p[1].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[1].i_pitch
                    + VAR_15 / 2 ) = 0xFC;
            *(VAR_8->p[2].p_pixels +
                    (VAR_8->p[2].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[2].i_pitch
                    + VAR_15 / 2 ) = 0xAC;
        }


        for ( VAR_17 = -VAR_3; VAR_17 <= VAR_3 + 0.01; VAR_17 = VAR_17 + 0.003 )
        {
            for ( int VAR_24 = 0; VAR_24 < 10; VAR_24++ )
            {
                VAR_16 = VAR_24 * FUNC_1(VAR_17) + 20;
                VAR_15 = VAR_24 * FUNC_3(VAR_17) + VAR_19 + 240 * VAR_20;
                *(VAR_8->p[0].p_pixels +
                        (VAR_8->p[0].i_lines - VAR_16 - 1 ) * VAR_8->p[0].i_pitch
                        + VAR_15 ) = 0xFF;
                *(VAR_8->p[1].p_pixels +
                        (VAR_8->p[1].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[1].i_pitch
                        + VAR_15 / 2 ) = 0x80;
                *(VAR_8->p[2].p_pixels +
                        (VAR_8->p[2].i_lines - VAR_16 / 2 - 1 ) * VAR_8->p[2].i_pitch
                        + VAR_15 / 2 ) = 0x80;
            }
        }

    }

    return 0;
}
