
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;

int FUNC_2(int VAR_0, char* VAR_1[]) {
        int VAR_2;

        VAR_2 = FUNC_0();
        if (VAR_2 < 0)
                FUNC_1(VAR_2, "hostname: %m");

        return 0;
}
