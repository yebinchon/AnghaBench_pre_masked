
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(int VAR_2, char *VAR_3[]) {
        int VAR_4;

        FUNC_4();
        FUNC_3();

        if (VAR_2 > 1) {
                FUNC_1("This program takes no arguments.");
                return VAR_0;
        }

        VAR_4 = FUNC_0();
        if (VAR_4 < 0)
                FUNC_2(VAR_4, "Failed to load environment.d: %m");

        return VAR_4 < 0 ? VAR_0 : VAR_1;
}
