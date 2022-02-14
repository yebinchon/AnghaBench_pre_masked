
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int i_band; TYPE_1__* band; } ;
typedef TYPE_2__ eqz_config_t ;
struct TYPE_4__ {float f_frequency; float f_alpha; float f_beta; float f_gamma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (float) ;
 float* VAR_2 ;
 float* VAR_3 ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3( int VAR_4, float VAR_5,
                       bool VAR_6,
                       eqz_config_t *VAR_7 )
{
    const float *VAR_8 = VAR_6
                                  ? VAR_3
                                  : VAR_2;
    float VAR_9 = (float) VAR_4;
    float VAR_10 = 0.5f * VAR_9;
    float VAR_11 = FUNC_1( 2.0f, 0.5f * VAR_5 );
    float VAR_12 = 0.5f * ( VAR_11 + 1.0f );
    float VAR_13 = 0.5f * ( VAR_11 - 1.0f );

    VAR_7->i_band = VAR_0;

    for( int VAR_14 = 0; VAR_14 < VAR_0; VAR_14++ )
    {
        float VAR_15 = VAR_8[VAR_14];

        VAR_7->band[VAR_14].f_frequency = VAR_15;

        if( VAR_15 <= VAR_10 )
        {
            float VAR_16 = ( 2.0f * (float) VAR_1 * VAR_15 ) / VAR_9;
            float VAR_17 = VAR_16 / VAR_11;
            float VAR_18 = FUNC_2( VAR_17 );
            float VAR_19 = FUNC_2( VAR_17 * VAR_12 )
                            * FUNC_2( VAR_17 * VAR_13 );
            float VAR_20 = VAR_18 * 0.5f;
            float VAR_21 = VAR_20 + VAR_19;

            VAR_7->band[VAR_14].f_alpha = VAR_19 / VAR_21;
            VAR_7->band[VAR_14].f_beta = ( VAR_20 - VAR_19 ) / VAR_21;
            VAR_7->band[VAR_14].f_gamma = VAR_18 * FUNC_0( VAR_16 ) / VAR_21;
        }
        else
        {

            VAR_7->band[VAR_14].f_alpha =
            VAR_7->band[VAR_14].f_beta =
            VAR_7->band[VAR_14].f_gamma = 0.0f;
        }
    }
}
