
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {float f_y; float f_x; } ;
typedef TYPE_1__ point_t ;
typedef int int8_t ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (TYPE_1__*,float,int,int ) ;
 int FUNC_2 (float) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(float *VAR_2, float *VAR_3, float VAR_4, float VAR_5, point_t *VAR_6, uint8_t VAR_7)
{
    *VAR_3 = VAR_6[0].f_y * VAR_5;
    *VAR_2 = VAR_6[0].f_x * VAR_4;

    for (float VAR_8 = 0; VAR_8 <= VAR_7 - 1; VAR_8 += 0.1 ) {
        int8_t VAR_9 = FUNC_2(VAR_8);
        if ( VAR_9 == VAR_7 - 1 )
            VAR_9 = VAR_7 - 2;
        float VAR_10 = VAR_8 - VAR_9;

        *VAR_2 = FUNC_0(*VAR_2,FUNC_1(VAR_6,VAR_10,VAR_9,VAR_0) * VAR_4);
        *VAR_3 = FUNC_0(*VAR_3,FUNC_1(VAR_6,VAR_10,VAR_9,VAR_1) * VAR_5);
    }
}
