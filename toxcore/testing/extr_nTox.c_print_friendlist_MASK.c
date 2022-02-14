
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int Tox ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,scalar_t__,char*) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 char* VAR_4 ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,char*,int *) ;

void FUNC_6(Tox *VAR_5)
{
    FUNC_2("[i] Friend List:");

    char VAR_6[VAR_2 + 1];
    uint8_t VAR_7[VAR_1];
    char VAR_8[VAR_0];


    char VAR_9[VAR_2 + FUNC_4(VAR_4) + 21 + VAR_3];

    uint32_t VAR_10 = 0;

    while (FUNC_1(VAR_5, VAR_10, VAR_6) != -1) {
        if (FUNC_5(VAR_5, VAR_10, VAR_7, ((void*)0)))
            FUNC_0(VAR_7, VAR_8);
        else
            FUNC_3(VAR_8, "???");

        if (FUNC_4(VAR_6) <= 0) {
            FUNC_3(VAR_9, VAR_4, VAR_10, "No name?", VAR_8);
        } else {
            FUNC_3(VAR_9, VAR_4, VAR_10, (uint8_t *)VAR_6, VAR_8);
        }

        VAR_10++;
        FUNC_2(VAR_9);
    }

    if (VAR_10 == 0)
        FUNC_2("+ no friends! D:");
}
