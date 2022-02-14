
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_3, char *VAR_4[]) {
        VAR_2 = VAR_3 > 1;

        FUNC_5(VAR_1);


        if (FUNC_0("/etc/machine-id", VAR_0) != 0)
                return FUNC_1("/etc/machine-id not found");

        FUNC_4();
        FUNC_2();




        return 0;
}
