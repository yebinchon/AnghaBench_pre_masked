
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {scalar_t__ i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef scalar_t__ int_fast32_t ;
typedef int int32_t ;
struct TYPE_7__ {int i_visible_lines; int i_pitch; scalar_t__* p_pixels; int i_visible_pitch; } ;


 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4( const picture_t* VAR_1,
                             const picture_t* VAR_2 )
{
    FUNC_2( VAR_1 != ((void*)0) );
    FUNC_2( VAR_2 != ((void*)0) );

    if( VAR_1->i_planes != VAR_2->i_planes )
        return -1;






    int32_t VAR_3 = 0;

    for( int VAR_4 = 0 ; VAR_4 < VAR_1->i_planes ; ++VAR_4 )
    {

        if( VAR_1->p[VAR_4].i_visible_lines !=
            VAR_2->p[VAR_4].i_visible_lines )
            return -1;

        const int VAR_5 = VAR_1->p[VAR_4].i_visible_lines-1;
        const int VAR_6 = FUNC_1( VAR_1->p[VAR_4].i_visible_pitch,
                             VAR_2->p[VAR_4].i_visible_pitch );


        const picture_t *VAR_7 = VAR_2;
        const picture_t *VAR_8 = VAR_1;
        int VAR_9 = VAR_7->p[VAR_4].i_pitch;
        int VAR_10 = VAR_8->p[VAR_4].i_pitch;





        for( int VAR_11 = 1; VAR_11 < VAR_5; ++VAR_11 )
        {
            uint8_t *VAR_12 = &VAR_7->p[VAR_4].p_pixels[VAR_11*VAR_9];
            uint8_t *VAR_13 = &VAR_8->p[VAR_4].p_pixels[(VAR_11-1)*VAR_10];
            uint8_t *VAR_14 = &VAR_8->p[VAR_4].p_pixels[(VAR_11+1)*VAR_10];

            for( int VAR_15 = 0; VAR_15 < VAR_6; ++VAR_15 )
            {

                int_fast32_t VAR_16 = *VAR_12;
                int_fast32_t VAR_17 = *VAR_13;
                int_fast32_t VAR_18 = *VAR_14;
                int_fast32_t VAR_19 = (VAR_17 - VAR_16) * (VAR_18 - VAR_16);
                if( VAR_19 > VAR_0 )
                    ++VAR_3;

                ++VAR_12;
                ++VAR_13;
                ++VAR_14;
            }


            const picture_t *VAR_20 = VAR_7;
            VAR_7 = VAR_8;
            VAR_8 = VAR_20;
            int VAR_21 = VAR_9;
            VAR_9 = VAR_10;
            VAR_10 = VAR_21;
        }
    }

    return VAR_3;
}
