
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int point_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int ,int ,int *,int ) ;

point_t *FUNC_3(int32_t VAR_0, int32_t VAR_1, uint8_t VAR_2, point_t *VAR_3, int32_t VAR_4)
{
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    point_t *VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
    point_t *VAR_6 = FUNC_1(VAR_2, VAR_5);
    FUNC_0(VAR_5);

    return VAR_6;
}
