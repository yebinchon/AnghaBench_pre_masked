
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (char*,char*,scalar_t__) ;

void FUNC_2(char *VAR_4, uint8_t VAR_5)
{
    int VAR_6 = 0;

    for (VAR_6 = VAR_0 - 1; VAR_6 > 0; VAR_6--) {
        FUNC_1(VAR_3[VAR_6], VAR_3[VAR_6 - 1], VAR_1 - 1);
        VAR_2[VAR_6] = VAR_2[VAR_6 - 1];
    }

    FUNC_1(VAR_3[0], VAR_4, VAR_1 - 1);
    VAR_2[VAR_6] = VAR_5;

    FUNC_0();
}
