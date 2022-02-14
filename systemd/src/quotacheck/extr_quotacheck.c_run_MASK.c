
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (char const* const,char**) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int VAR_10 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (char*,int,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(int VAR_11, char *VAR_12[]) {
        int VAR_13;

        FUNC_5();

        if (VAR_11 > 1)
                return FUNC_4(FUNC_0(VAR_0),
                                       "This program takes no arguments.");

        FUNC_10(0022);

        VAR_13 = FUNC_7(VAR_10, ((void*)0), 0);
        if (VAR_13 < 0)
                FUNC_6(VAR_13, "Failed to parse kernel command line, ignoring: %m");

        FUNC_9();

        if (!VAR_8) {
                if (VAR_9)
                        return 0;

                if (FUNC_2("/run/systemd/quotacheck", VAR_7) < 0)
                        return 0;
        }

        VAR_13 = FUNC_8("(quotacheck)", VAR_4|VAR_2|VAR_5|VAR_6|VAR_3, ((void*)0));
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0) {
                static const char * const VAR_14[] = {
                        128,
                        "-anug",
                        ((void*)0)
                };



                FUNC_3(VAR_14[0], (char**) VAR_14);
                FUNC_1(VAR_1);
        }

        return 0;
}
