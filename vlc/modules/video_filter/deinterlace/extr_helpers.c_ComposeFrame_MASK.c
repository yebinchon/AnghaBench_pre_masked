
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int i_pitch; int i_visible_lines; int i_visible_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_13__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_14__ {int * p_sys; } ;
typedef TYPE_3__ filter_t ;
typedef int filter_sys_t ;
typedef scalar_t__ compose_chroma_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (int *,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

void FUNC_6( filter_t *VAR_7,
                   picture_t *VAR_8,
                   picture_t *VAR_9, picture_t *VAR_10,
                   compose_chroma_t VAR_11, bool VAR_12 )
{
    FUNC_4( VAR_8 != ((void*)0) );
    FUNC_4( VAR_9 != ((void*)0) );
    FUNC_4( VAR_10 != ((void*)0) );


    FUNC_4( VAR_11 == VAR_0 ||
            VAR_11 == VAR_4 ||
            VAR_11 == VAR_3 ||
            VAR_11 == VAR_2 ||
            VAR_11 == VAR_1 );

    filter_sys_t *VAR_13 = VAR_7->p_sys;

    const bool VAR_14 = VAR_11 == VAR_4;

    for( int VAR_15 = 0 ; VAR_15 < VAR_9->i_planes ; VAR_15++ )
    {
        bool VAR_16 = ( VAR_15 == VAR_5 || VAR_15 == VAR_6 );

        int VAR_17;
        if( VAR_16 && VAR_14 && VAR_12 )
        {
            if( VAR_15 == VAR_5 )
                VAR_17 = VAR_6;
            else
                VAR_17 = VAR_5;
        }
        else
        {
            VAR_17 = VAR_15;
        }


        if( !VAR_16 || VAR_11 == VAR_0 )
        {







            plane_t VAR_18;
            plane_t VAR_19;
            plane_t VAR_20;
            plane_t VAR_21;
            FUNC_2( &VAR_18, &VAR_8->p[VAR_17], 0 );
            FUNC_2( &VAR_19, &VAR_8->p[VAR_17], 1 );
            FUNC_2( &VAR_20, &VAR_9->p[VAR_15], 0 );
            FUNC_2( &VAR_21, &VAR_10->p[VAR_15], 1 );


            FUNC_5( &VAR_18, &VAR_20 );
            FUNC_5( &VAR_19, &VAR_21 );
        }
        else
        {
            if( VAR_11 == VAR_4 )
            {
                plane_t VAR_22;
                plane_t VAR_23;
                FUNC_2( &VAR_22, &VAR_8->p[VAR_17], 0 );
                FUNC_2( &VAR_23, &VAR_8->p[VAR_17], 1 );


                FUNC_5( &VAR_22, &VAR_9->p[VAR_15] );
                FUNC_5( &VAR_23, &VAR_10->p[VAR_15] );
            }
            else if( VAR_11 == VAR_3 )
            {



                FUNC_5( &VAR_8->p[VAR_17],
                                  &VAR_9->p[VAR_15] );
            }
            else if( VAR_11 == VAR_2 )
            {



                FUNC_5( &VAR_8->p[VAR_17],
                                  &VAR_10->p[VAR_15] );
            }
            else
            {


                uint8_t *VAR_24, *VAR_25, *VAR_26, *VAR_27;
                VAR_24 = VAR_9->p[VAR_15].p_pixels;
                VAR_25 = VAR_10->p[VAR_15].p_pixels;
                VAR_27 = VAR_8->p[VAR_17].p_pixels;
                VAR_26 = VAR_27 + VAR_8->p[VAR_17].i_pitch
                                  * VAR_8->p[VAR_17].i_visible_lines;

                int VAR_28 = FUNC_1( VAR_9->p[VAR_15].i_visible_pitch,
                                VAR_10->p[VAR_15].i_visible_pitch,
                                VAR_8->p[VAR_15].i_visible_pitch );

                for( ; VAR_27 < VAR_26 ; )
                {
                    FUNC_3( VAR_27, VAR_24, VAR_25, VAR_28 );
                    VAR_27 += VAR_8->p[VAR_17].i_pitch;
                    VAR_24 += VAR_9->p[VAR_15].i_pitch;
                    VAR_25 += VAR_10->p[VAR_15].i_pitch;
                }
                FUNC_0();
            }
        }
    }
}
