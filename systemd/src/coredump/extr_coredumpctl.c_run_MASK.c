
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*,char*,int,char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(int VAR_2, char *VAR_3[]) {
        int VAR_4, VAR_5;

        FUNC_10(VAR_1, "");
        FUNC_6(1);
        FUNC_5();
        FUNC_4();


        (void) FUNC_9(VAR_0);

        VAR_4 = FUNC_7(VAR_2, VAR_3);
        if (VAR_4 <= 0)
                return VAR_4;

        FUNC_11();

        VAR_5 = FUNC_2();

        VAR_4 = FUNC_3(VAR_2, VAR_3);

        if (VAR_5 > 0)
                FUNC_8("%s-- Notice: %d systemd-coredump@.service %s, output may be incomplete.%s\n",
                       FUNC_0(),
                       VAR_5, VAR_5 == 1 ? "unit is running" : "units are running",
                       FUNC_1());
        return VAR_4;
}
