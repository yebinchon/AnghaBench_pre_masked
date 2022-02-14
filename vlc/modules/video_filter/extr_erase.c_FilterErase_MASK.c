
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ i_chroma; } ;
struct TYPE_15__ {int i_planes; TYPE_7__* p; TYPE_2__ format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_16__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_17__ {int i_x; int i_y; TYPE_3__* p_mask; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_18__ {int i_pitch; int i_visible_pitch; int i_visible_lines; int* p_pixels; } ;
struct TYPE_14__ {int A_PITCH; int* A_PIXELS; TYPE_1__* p; } ;
struct TYPE_12__ {int i_visible_pitch; int i_visible_lines; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_3, picture_t *VAR_4,
                                             picture_t *VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_3->p_sys;

    const int VAR_7 = VAR_6->p_mask->A_PITCH;
    const int VAR_8 = VAR_6->p_mask->p[VAR_0].i_visible_pitch;
    const int VAR_9 = VAR_6->p_mask->p[VAR_0].i_visible_lines;

    for( int VAR_10 = 0; VAR_10 < VAR_4->i_planes; VAR_10++ )
    {
        const int VAR_11 = VAR_5->p[VAR_10].i_pitch;
        const int VAR_12 = VAR_11<<1;
        const int VAR_13 = VAR_4->p[VAR_10].i_visible_pitch;
        const int VAR_14 = VAR_4->p[VAR_10].i_visible_lines;

        uint8_t *VAR_15 = VAR_6->p_mask->A_PIXELS;
        int VAR_16 = VAR_6->i_x, VAR_17 = VAR_6->i_y;

        int VAR_18 = VAR_9;
        int VAR_19 = VAR_8;

        const bool VAR_20 = ( VAR_10 &&
            !( VAR_4->format.i_chroma == VAR_1
            || VAR_4->format.i_chroma == VAR_2 ) );

        if( VAR_10 )
        {
            VAR_19 >>= 1;
            VAR_16 >>= 1;
        }
        if( VAR_20 )
        {
            VAR_18 >>= 1;
            VAR_17 >>= 1;
        }
        VAR_18 = FUNC_1( VAR_14 - VAR_17, VAR_18 );
        VAR_19 = FUNC_1( VAR_13 - VAR_16, VAR_19 );


        FUNC_2( &VAR_5->p[VAR_10], &VAR_4->p[VAR_10] );


        uint8_t *VAR_21 = VAR_5->p[VAR_10].p_pixels + VAR_17*VAR_11 + VAR_16;
        for( int VAR_22 = 0; VAR_22 < VAR_18;
             VAR_22++, VAR_15 += VAR_7, VAR_21 += VAR_11 )
        {
            uint8_t VAR_23, VAR_24 = 0;
            int VAR_25 = -1, VAR_26 = -2;
            int VAR_27 = 0;



            if( VAR_16 )
            {


                VAR_23 = *(VAR_21-1);
            }
            else if( VAR_22 || VAR_17 )
            {


                VAR_23 = *(VAR_21-VAR_11);
            }
            else
            {




                VAR_23 = 0xff;
            }

            for( int VAR_28 = 0; VAR_28 < VAR_19; VAR_28++ )
            {
                if( VAR_15[VAR_10?VAR_28<<1:VAR_28] > 127 )
                {

                    if( VAR_26 <= VAR_25 )
                    {
                        int VAR_29;


                        for( VAR_29 = VAR_28; VAR_29 < VAR_19; VAR_29++ )
                        {
                            if( VAR_15[VAR_10?VAR_29<<1:VAR_29] <= 127 )
                            {

                                VAR_26 = VAR_29;
                                VAR_24 = VAR_21[VAR_29];
                                break;
                            }
                        }
                        if( VAR_26 <= VAR_25 )
                        {


                            if( VAR_29 == VAR_28 ) VAR_29++;
                            if( VAR_29 < VAR_13 )
                            {




                                VAR_26 = VAR_29;
                                VAR_24 = VAR_21[VAR_29];
                            }
                            else
                            {




                                VAR_26 = VAR_29;
                                VAR_24 = VAR_23;
                            }
                        }
                        if( !( VAR_16 || VAR_22 || VAR_17 ) )




                            VAR_23 = VAR_24;


                        VAR_27 = ((VAR_24-VAR_23)<<16)/(VAR_26-VAR_25);
                    }

                    VAR_21[VAR_28] = VAR_23 + (((VAR_28-VAR_25)*VAR_27+(1<<16))>>16);
                }
                else
                {


                    VAR_23 = VAR_21[VAR_28];
                    VAR_25 = VAR_28;
                }
            }
        }


        VAR_15 = VAR_6->p_mask->A_PIXELS;
        VAR_18 = VAR_20 ? VAR_9>>1
                                 : VAR_9;


        VAR_18 = FUNC_1( VAR_14 - VAR_17 - 2, VAR_18 );


        int VAR_30 = FUNC_0(VAR_17,2);
        VAR_21 = VAR_5->p[VAR_10].p_pixels + (VAR_17+VAR_30)*VAR_11 + VAR_16;
        for( ; VAR_30 < VAR_18; VAR_30++, VAR_15 += VAR_7, VAR_21 += VAR_11 )
        {
            for( int VAR_31 = 0; VAR_31 < VAR_19; VAR_31++ )
            {
                if( VAR_15[VAR_10?VAR_31<<1:VAR_31] > 127 )
                {

                    VAR_21[VAR_31] =
                        ( (VAR_21[VAR_31-VAR_12]<<1)
                        + (VAR_21[VAR_31-VAR_11 ]<<2)
                        + (VAR_21[VAR_31 ]<<2)
                        + (VAR_21[VAR_31+VAR_11 ]<<2)
                        + (VAR_21[VAR_31+VAR_12]<<1) )>>4;
                }
            }
        }
    }
}
