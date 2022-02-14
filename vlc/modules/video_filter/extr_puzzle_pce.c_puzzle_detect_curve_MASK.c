
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {float f_x; float f_y; } ;
typedef TYPE_1__ point_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;
typedef int filter_t ;


 int VAR_0 ;
 float FUNC_0 (TYPE_1__*,float,int,int ) ;
 void* FUNC_1 (float) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3( filter_t *VAR_4, int32_t VAR_5, float VAR_6, float VAR_7, point_t *VAR_8, uint8_t VAR_9, uint8_t VAR_10, uint8_t VAR_11, int32_t *VAR_12)
{
    int8_t VAR_13 = 0;
    float VAR_14, VAR_15;
    float VAR_16 = VAR_8[0].f_x * VAR_6;
    float VAR_17 = VAR_8[0].f_y * VAR_7;
    int8_t VAR_18 = 0;

    for (float VAR_19 = 0; VAR_19 <= VAR_9 - 1; VAR_19 += 0.1 ) {
        VAR_13 = FUNC_1(VAR_19);
        if ( VAR_13 == VAR_9 - 1 )
            VAR_13 = VAR_9 - 2;
        float VAR_20 = VAR_19 - VAR_13;

        VAR_14 = FUNC_0(VAR_8,VAR_20,VAR_13,VAR_2) * VAR_6;
        VAR_15 = FUNC_0(VAR_8,VAR_20,VAR_13,VAR_3) * VAR_7;

        if ((VAR_17 < (float)VAR_5+0.5 && VAR_15 >= (float)VAR_5+0.5) || (VAR_17 > (float)VAR_5+0.5 && VAR_15 <= (float)VAR_5+0.5)) {
            VAR_12[VAR_18] = FUNC_1(((float)VAR_5+0.5 - VAR_17) * (VAR_14 - VAR_16) / (VAR_15 - VAR_17) + VAR_16);
            if (VAR_18 < VAR_0 - 1)
                VAR_18++;
        }

        VAR_16 = VAR_14;
        VAR_17 = VAR_15;
    }
    VAR_14 = VAR_8[VAR_9 - 1].f_x * VAR_6;
    VAR_15 = VAR_8[VAR_9 - 1].f_y * VAR_7;


    if ( VAR_5 >= 0 ) {

        VAR_12[VAR_18] = (VAR_10==VAR_1)?FUNC_2( VAR_4, VAR_5, 0, VAR_11 )
                                                       :FUNC_2( VAR_4, VAR_5, 1, VAR_11 );
        if (VAR_18 < VAR_0 - 1)
            VAR_18++;
    }


    int32_t VAR_21 = 0;

    while (VAR_21 < (VAR_18 - 1)) {
        if (VAR_12[VAR_21] > VAR_12[VAR_21+1]) {
            uint32_t VAR_22 = VAR_12[VAR_21];
            VAR_12[VAR_21] = VAR_12[VAR_21+1];
            VAR_12[VAR_21+1] = VAR_22;
            VAR_21 = 0;
        }
        else {
            VAR_21++;
        }
    }

    return VAR_18;
}
