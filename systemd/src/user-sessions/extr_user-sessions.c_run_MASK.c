
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(int VAR_1, char *VAR_2[]) {
        int VAR_3, VAR_4;

        if (VAR_1 != 2)
                return FUNC_2(FUNC_0(VAR_0),
                                       "This program requires one argument.");

        FUNC_3();

        FUNC_6(0022);

        FUNC_4();

        if (FUNC_5(VAR_2[1], "start")) {
                VAR_3 = FUNC_7("/run/nologin");
                VAR_4 = FUNC_7("/etc/nologin");
                if (VAR_3 < 0)
                        return VAR_3;
                return VAR_4;

        } else if (FUNC_5(VAR_2[1], "stop"))
                return FUNC_1();

        return FUNC_2(FUNC_0(VAR_0), "Unknown verb '%s'.", VAR_2[1]);
}
