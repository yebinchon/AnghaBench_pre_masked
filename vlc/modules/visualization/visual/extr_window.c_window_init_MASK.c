
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int window_type ;
struct TYPE_5__ {int wind_type; float f_kaiser_alpha; } ;
typedef TYPE_1__ window_param ;
struct TYPE_6__ {float* pf_window_table; int i_buffer_size; } ;
typedef TYPE_2__ window_context ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;


 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;


 scalar_t__ VAR_9 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float* FUNC_3 (int,int) ;
 int FUNC_4 () ;

bool FUNC_5( int VAR_10, window_param * VAR_11,
                  window_context * VAR_12 )
{
    float * VAR_13 = ((void*)0);
    window_type VAR_14 = VAR_11->wind_type;

    if( VAR_14 != 129 && VAR_14 != 130
                          && VAR_14 != 131
                          && VAR_14 != 128 )
    {

        VAR_10 = 0;
        goto exit;
    }

    VAR_13 = FUNC_3( VAR_10, sizeof( *VAR_13 ) );
    if( !VAR_13 )
    {

        return 0;
    }

    int VAR_15 = VAR_10 - 1;
    switch( VAR_14 )
    {
    case 129:

        for( int VAR_16 = 0; VAR_16 < VAR_10; VAR_16++ )
        {
            float VAR_17 = (float) VAR_16 / (float) VAR_15;
            VAR_13[VAR_16] = 0.5f - 0.5f * FUNC_1( 2.0f * (float) VAR_9 * VAR_17 );
        }
        break;
    case 130:

        for( int VAR_18 = 0; VAR_18 < VAR_10; VAR_18++ )
        {
            float VAR_19 = (float) VAR_18 / (float) VAR_15;
            VAR_13[VAR_18] = VAR_4
                        - VAR_5 * FUNC_1( 2.0f * (float) VAR_9 * VAR_19 )
                        + VAR_6 * FUNC_1( 4.0f * (float) VAR_9 * VAR_19 )
                        - VAR_7 * FUNC_1( 6.0f * (float) VAR_9 * VAR_19 )
                        + VAR_8 * FUNC_1( 8.0f * (float) VAR_9 * VAR_19 );
        }
        break;
    case 131:

        for( int VAR_20 = 0; VAR_20 < VAR_10; VAR_20++ )
        {
            float VAR_21 = (float) VAR_20 / (float) VAR_15;
            VAR_13[VAR_20] = VAR_0
                        - VAR_1 * FUNC_1( 2.0f * (float) VAR_9 * VAR_21 )
                        + VAR_2 * FUNC_1( 4.0f * (float) VAR_9 * VAR_21 )
                        - VAR_3 * FUNC_1( 6.0f * (float) VAR_9 * VAR_21 );
        }
        break;
    case 128:
    {

        float VAR_22 = (float) VAR_9 * VAR_11->f_kaiser_alpha;
        float VAR_23 = FUNC_0( VAR_22 );
        for( int VAR_24 = 0; VAR_24 < VAR_10; VAR_24++ )
        {
            float VAR_25 = (float) VAR_24 / (float) VAR_15;
            float VAR_26 = 2.0f * VAR_25 - 1.0f;
            float VAR_27 = VAR_26 * VAR_26;
            float VAR_28 = FUNC_2( 1.0f - VAR_27 );
            VAR_13[VAR_24] = FUNC_0( VAR_22 * VAR_28 ) / VAR_23;
        }
        break;
    }
    default:

        FUNC_4();
        break;
    }

exit:
    VAR_12->pf_window_table = VAR_13;
    VAR_12->i_buffer_size = VAR_10;
    return 1;
}
