
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {float f_x; float f_y; } ;
typedef TYPE_1__ point_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;


 float FUNC_0 (float) ;
 float FUNC_1 (TYPE_1__*,float,int,int ) ;
 int FUNC_2 (float) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

point_t *FUNC_5(int32_t VAR_2, int32_t VAR_3, uint8_t VAR_4, point_t *VAR_5, int32_t VAR_6)
{
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    float VAR_7 = ((float) VAR_2) / (1 - (-1));
    float VAR_8 = (((float)VAR_3) / 2) / (1 - (0));
    float VAR_9 = ((float)VAR_2) / (1 - (-1));
    float VAR_10 = 0;
    float VAR_11, VAR_12;

    float VAR_13 = 1;

    uint8_t VAR_14 = (3 * (VAR_4-1) + 1);

    point_t *VAR_15 = FUNC_4( sizeof( point_t ) * VAR_14 );
    if (VAR_15 == ((void*)0))
        return ((void*)0);

    bool VAR_16 = 1;


    do {
        VAR_16 = 1;

        for (uint8_t VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
            if ( VAR_17 == 0 || VAR_17 == 1 )
                VAR_15[VAR_17].f_x = VAR_5[VAR_17].f_x * VAR_7 + VAR_9;
            else if ( VAR_17 == VAR_14 - 2 || VAR_17 == VAR_14 - 1 )
                VAR_15[VAR_17].f_x = VAR_5[VAR_17].f_x * VAR_7 + VAR_9;
            else
                VAR_15[VAR_17].f_x = VAR_5[VAR_17].f_x * VAR_7 * VAR_13 + VAR_9;
            VAR_15[VAR_17].f_y = VAR_5[VAR_17].f_y * VAR_8 * VAR_13 + VAR_10;
        }

        for (float VAR_18 = 0; VAR_18 <= VAR_4 - 1; VAR_18 += 0.1 ) {
            int8_t VAR_19 = FUNC_2(VAR_18);
            if ( VAR_19 == VAR_4 - 1 )
                VAR_19 = VAR_4 - 2;
            float VAR_20 = VAR_18 - VAR_19;

            VAR_11 = FUNC_1(VAR_15,VAR_20,VAR_19,VAR_0);
            VAR_12 = FUNC_1(VAR_15,VAR_20,VAR_19,VAR_1);

            if ( VAR_11 < ((float) VAR_2) / 2 ) {
                if ( FUNC_0 ( VAR_12 ) > ( VAR_11 * ( 0.9 * ((float)VAR_3) / ((float)VAR_2) ) ) )
                    VAR_16 = 0;
            }
            else {
                if ( FUNC_0 ( VAR_12 ) > ( ( ((float)VAR_2) - VAR_11 ) * ( 0.9 * ((float)VAR_3) / ((float)VAR_2) ) ) )
                    VAR_16 = 0;
            }
        }

        if (!VAR_16)
            VAR_13 = VAR_13 * 0.9;
    }
    while ((!VAR_16) && (VAR_13>0.1));

    if (!VAR_16) {
        FUNC_3(VAR_15);
        return ((void*)0);
    }


    VAR_13 = VAR_13 * (0.5 + 0.5* (float)VAR_6 / 100);
    for (uint8_t VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
        if ( VAR_21 == 0 || VAR_21 == 1 )
            VAR_15[VAR_21].f_x = VAR_5[VAR_21].f_x * VAR_7 + VAR_9;
        else if ( VAR_21 == VAR_14 - 2 || VAR_21 == VAR_14 - 1 )
            VAR_15[VAR_21].f_x = VAR_5[VAR_21].f_x * VAR_7 + VAR_9;
        else
            VAR_15[VAR_21].f_x = VAR_5[VAR_21].f_x * VAR_7 * VAR_13 + VAR_9;
        VAR_15[VAR_21].f_y = VAR_5[VAR_21].f_y * VAR_8 * VAR_13 + VAR_10;
    }

    return VAR_15;
}
