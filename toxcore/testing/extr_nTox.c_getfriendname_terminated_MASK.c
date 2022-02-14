
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Tox ;


 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *,int,int *) ;

int FUNC_2(Tox *VAR_0, int VAR_1, char *VAR_2)
{
    FUNC_0(VAR_0, VAR_1, (uint8_t *)VAR_2, ((void*)0));
    int VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0));

    if (VAR_3 >= 0)
        VAR_2[VAR_3] = 0;
    else
        VAR_2[0] = 0;

    return VAR_3;
}
