
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int Tox ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int,char const*,...) ;
 int FUNC_3 (char*) ;

void FUNC_4(Tox *VAR_1, uint32_t VAR_2, const uint8_t *VAR_3, size_t VAR_4, void *VAR_5)
{
    char VAR_6[VAR_0 + 1];

    if (FUNC_0(VAR_1, VAR_2, VAR_6) != -1) {
        char VAR_7[100 + VAR_4 + FUNC_3(VAR_6) + 1];

        if (VAR_6[0] != 0)
            FUNC_2(VAR_7, "[i] [%d] %s's status changed to %s.", VAR_2, VAR_6, VAR_3);
        else
            FUNC_2(VAR_7, "[i] [%d] Their status changed to %s.", VAR_2, VAR_3);

        FUNC_1(VAR_7);
    }
}
