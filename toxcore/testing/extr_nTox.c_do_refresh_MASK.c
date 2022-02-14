
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__* VAR_2 ;
 char* VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7()
{
    int VAR_7 = 0;
    char VAR_8[VAR_1];
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        if (VAR_2[VAR_9])
            FUNC_6(VAR_8, VAR_4[VAR_9], VAR_5);
        else
            FUNC_5(VAR_8, VAR_4[VAR_9], VAR_5);

        int VAR_10 = FUNC_1(VAR_8);
        VAR_7 = VAR_7 + VAR_10;

        if (VAR_7 < VAR_6) {
            FUNC_2(VAR_6 - 1 - VAR_7, 0);
            FUNC_3("%s", VAR_8);
            FUNC_0();
        }
    }

    FUNC_2(VAR_6 - 1, 0);
    FUNC_0();
    FUNC_3(">> ");
    FUNC_3("%s", VAR_3);
    FUNC_0();
    FUNC_4();
}
