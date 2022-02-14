
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_5, char *VAR_6[]) {
        FUNC_3(VAR_1);


        if (FUNC_0("/etc/machine-id", VAR_0) != 0)
                return FUNC_1("/etc/machine-id not found");

        VAR_2 = VAR_5 > 1;

        FUNC_4(VAR_4);
        FUNC_4(VAR_3);

        FUNC_2();

        return 0;
}
