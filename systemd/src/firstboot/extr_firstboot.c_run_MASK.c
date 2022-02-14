
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(int VAR_0, char *VAR_1[]) {
        bool VAR_2;
        int VAR_3;

        VAR_3 = FUNC_2(VAR_0, VAR_1);
        if (VAR_3 <= 0)
                return VAR_3;

        FUNC_1();

        FUNC_10(0022);

        VAR_3 = FUNC_3("systemd.firstboot", &VAR_2);
        if (VAR_3 < 0)
                return FUNC_0(VAR_3, "Failed to parse systemd.firstboot= kernel command line argument, ignoring: %m");
        if (VAR_3 > 0 && !VAR_2)
                return 0;

        VAR_3 = FUNC_6();
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_5();
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_9();
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4();
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_7();
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_8();
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
