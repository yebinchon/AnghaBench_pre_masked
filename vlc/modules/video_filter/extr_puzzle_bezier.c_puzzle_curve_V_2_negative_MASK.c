
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int f_y; int f_x; } ;
typedef TYPE_1__ point_t ;


 TYPE_1__* FUNC_0 (int) ;

point_t *FUNC_1(uint8_t VAR_0, point_t *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    point_t *VAR_2 = FUNC_0( sizeof( point_t ) * (3 * (VAR_0-1) + 1) );
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    for (uint8_t VAR_3=0; VAR_3 < (3 * (VAR_0-1) + 1); VAR_3++) {
        VAR_2[VAR_3].f_x = -VAR_1[VAR_3].f_x;
        VAR_2[VAR_3].f_y = VAR_1[VAR_3].f_y;
    }

    return VAR_2;
}
