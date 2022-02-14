
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (char*) ;

uint8_t *FUNC_3(char *VAR_0)
{





    size_t VAR_1, VAR_2 = FUNC_2(VAR_0) / 2;
    uint8_t *VAR_3 = FUNC_0(VAR_2);
    char *VAR_4 = VAR_0;

    for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1, VAR_4 += 2)
        FUNC_1(VAR_4, "%2hhx", &VAR_3[VAR_1]);

    return VAR_3;
}
