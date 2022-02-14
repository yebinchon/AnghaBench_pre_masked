
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_2 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

int FUNC_14(int VAR_3, char *VAR_4[]) {
        bool VAR_5;

        FUNC_11(VAR_0);

        FUNC_8();

        FUNC_9();
        FUNC_10();

        FUNC_3("have ambient caps: %s", FUNC_13(FUNC_0()));

        if (FUNC_2() != 0)
                return FUNC_4("not running as root");

        if (FUNC_5(&VAR_5) < 0)
                return FUNC_4("setup failed");

        FUNC_6();

        FUNC_7();
        FUNC_12();

        FUNC_1(VAR_1);

        if (VAR_5)
                FUNC_1(VAR_2);

        return 0;
}
