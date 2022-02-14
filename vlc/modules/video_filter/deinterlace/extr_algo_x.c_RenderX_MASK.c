
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int filter_t ;
struct TYPE_5__ {int i_visible_lines; int i_visible_pitch; int i_pitch; int * p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const,int *,int const,int const,int const) ;
 int FUNC_2 (int *,int const,int *,int const,int const,int const) ;
 int FUNC_3 (int *,int const,int *,int const,int const,int const) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6( filter_t *VAR_1, picture_t *VAR_2, picture_t *VAR_3 )
{
    FUNC_0(VAR_1);
    int VAR_4;





    for( VAR_4 = 0 ; VAR_4 < VAR_3->i_planes ; VAR_4++ )
    {
        const int VAR_5 = ( VAR_2->p[VAR_4].i_visible_lines + 7 )/8 - 1;
        const int VAR_6 = VAR_2->p[VAR_4].i_visible_pitch/8;

        const int VAR_7 = VAR_2->p[VAR_4].i_visible_lines - 8*VAR_5;
        const int VAR_8 = VAR_2->p[VAR_4].i_visible_pitch - 8*VAR_6;

        const int VAR_9 = VAR_2->p[VAR_4].i_pitch;
        const int VAR_10 = VAR_3->p[VAR_4].i_pitch;

        int VAR_11, VAR_12;

        for( VAR_11 = 0; VAR_11 < VAR_5; VAR_11++ )
        {
            uint8_t *VAR_13 = &VAR_2->p[VAR_4].p_pixels[8*VAR_11*VAR_9];
            uint8_t *VAR_14 = &VAR_3->p[VAR_4].p_pixels[8*VAR_11*VAR_10];






                FUNC_1( VAR_13, VAR_9, VAR_14, VAR_10, VAR_6, VAR_8 );
        }


        if( VAR_7 )
        {
            uint8_t *VAR_15 = &VAR_2->p[VAR_4].p_pixels[8*VAR_11*VAR_9];
            uint8_t *VAR_16 = &VAR_3->p[VAR_4].p_pixels[8*VAR_11*VAR_10];

            for( VAR_12 = 0; VAR_12 < VAR_6; VAR_12++ )
            {
                FUNC_3( VAR_15, VAR_9, VAR_16, VAR_10, 8, VAR_7 );

                VAR_15 += 8;
                VAR_16 += 8;
            }

            if( VAR_8 )
                FUNC_3( VAR_15, VAR_9, VAR_16, VAR_10, VAR_8, VAR_7 );
        }
    }





    return VAR_0;
}
