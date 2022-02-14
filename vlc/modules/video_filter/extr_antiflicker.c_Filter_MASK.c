
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {TYPE_6__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_18__ {int i_width; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_21__ {TYPE_2__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_22__ {int* ia_luminance_data; int* p_old_data; int i_softening; int i_window_size; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_23__ {int* p_pixels; int i_visible_lines; int i_visible_pitch; int i_pitch; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (float,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_6__*) ;

__attribute__((used)) static picture_t *FUNC_8( filter_t *VAR_4, picture_t *VAR_5 )
{
    if( !VAR_5 ) return ((void*)0);

    picture_t *VAR_6 = FUNC_5( VAR_4 );
    if( !VAR_6 )
    {
        FUNC_6( VAR_5 );
        return ((void*)0);
    }



    filter_sys_t *VAR_7 = VAR_4->p_sys;

    int VAR_8 = FUNC_4( &VAR_7->i_window_size );
    int VAR_9 = FUNC_4( &VAR_7->i_softening );

    uint8_t *VAR_10 = VAR_5->p[VAR_3].p_pixels;
    uint8_t *VAR_11 = VAR_6->p[VAR_3].p_pixels;
    bool VAR_12 = 0;

    int VAR_13 = VAR_5->p[VAR_3].i_visible_lines;
    int VAR_14 = VAR_5->p[VAR_3].i_visible_pitch;
    int VAR_15 = VAR_5->p[VAR_3].i_pitch;
    int VAR_16 = VAR_6->p[VAR_3].i_pitch;


    int VAR_17 = FUNC_1(VAR_5);




    if( FUNC_3(VAR_17 - VAR_7->
        ia_luminance_data[VAR_8 - 1]) > VAR_0
        || VAR_7->ia_luminance_data[VAR_8 - 1] == 256)
    {
        VAR_12 = 1;
    }

    if ( VAR_12 )
    {

        for (int VAR_18 = 0; VAR_18 < VAR_8; ++VAR_18)
            VAR_7->ia_luminance_data[VAR_18] = VAR_17;
        FUNC_7( &VAR_6->p[VAR_3], &VAR_5->p[VAR_3] );
    }
    else
    {

        for (int VAR_19 = 0; VAR_19 < VAR_8-1 ; ++VAR_19)
            VAR_7->ia_luminance_data[VAR_19] =
                           VAR_7->ia_luminance_data[VAR_19+1];

        VAR_7->ia_luminance_data[VAR_8 - 1] = VAR_17;

        float VAR_20 = 1.0;
        if (VAR_17 > 0)
        {
             float VAR_21 = 0;
             for (int VAR_22 = 0; VAR_22 < VAR_8; VAR_22++)
                  VAR_21 += (float) VAR_7->ia_luminance_data[VAR_22];
             VAR_20 = VAR_21/(VAR_8*VAR_17);
        }


        uint8_t VAR_23 = 8;
        int VAR_24 = FUNC_2(VAR_20,255) * ( 1 << VAR_23 );

        for( int VAR_25 = 0 ; VAR_25 < VAR_13 ; VAR_25++ )
        {
            for( int VAR_26 = 0; VAR_26 < VAR_14 ; VAR_26++ )
            {
                uint8_t VAR_27 = VAR_10[VAR_25*VAR_15+VAR_26];
                int VAR_28 = ( VAR_24 * VAR_27 +
                       (1<<(VAR_23 -1)) ) >> VAR_23;
                VAR_11[VAR_25*VAR_16+VAR_26] =
                       (VAR_28>255) ? 255:VAR_28;
            }
        }
    }


    FUNC_7( &VAR_6->p[VAR_1], &VAR_5->p[VAR_1] );
    FUNC_7( &VAR_6->p[VAR_2], &VAR_5->p[VAR_2] );

    if (VAR_12 || VAR_9 == 0)
    {
       return FUNC_0( VAR_6, VAR_5 );
    }


    uint8_t *VAR_29 = VAR_7->p_old_data;
    int VAR_30 = VAR_4->fmt_in.video.i_width;

    for( int VAR_31 = 0 ; VAR_31 < VAR_13 ; VAR_31++ )
    {
        for( int VAR_32 = 0; VAR_32 < VAR_14 ; VAR_32++ )
        {
            uint8_t VAR_33 = VAR_11[VAR_31*VAR_16+VAR_32];
            uint8_t VAR_34 = VAR_29[VAR_31*VAR_30+VAR_32];
            int VAR_35 = FUNC_3(VAR_33 - VAR_34);
            if (VAR_35 < VAR_9)
            {
                if (VAR_35 > (VAR_9 >> 1))
                {
                    VAR_29[VAR_31*VAR_30+VAR_32] =
                        ((VAR_33 * 2) + VAR_34) /3;
                }
            }
            else
            {
                VAR_29[VAR_31*VAR_30+VAR_32] = VAR_33;
            }
            VAR_11[VAR_31*VAR_16+VAR_32] =
                VAR_29[VAR_31*VAR_30+VAR_32];
        }
    }

    return FUNC_0( VAR_6, VAR_5 );
}
