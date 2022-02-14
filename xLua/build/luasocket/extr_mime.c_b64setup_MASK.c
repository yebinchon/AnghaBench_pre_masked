
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UC ;


 size_t* VAR_0 ;

__attribute__((used)) static void FUNC_0(UC *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 <= 255; VAR_2++) VAR_1[VAR_2] = (UC) 255;
    for (VAR_2 = 0; VAR_2 < 64; VAR_2++) VAR_1[VAR_0[VAR_2]] = (UC) VAR_2;
    VAR_1['='] = 0;
}
