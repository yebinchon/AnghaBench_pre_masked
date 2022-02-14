
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4, void *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_3);

        if (FUNC_4(VAR_3, "fsck.mode")) {

                if (FUNC_3(VAR_3, VAR_4))
                        return 0;

                if (FUNC_4(VAR_4, "auto"))
                        VAR_0 = VAR_2 = 0;
                else if (FUNC_4(VAR_4, "force"))
                        VAR_0 = 1;
                else if (FUNC_4(VAR_4, "skip"))
                        VAR_2 = 1;
                else
                        FUNC_1("Invalid fsck.mode= parameter '%s'. Ignoring.", VAR_4);

        } else if (FUNC_4(VAR_3, "fsck.repair")) {

                if (FUNC_3(VAR_3, VAR_4))
                        return 0;

                if (FUNC_4(VAR_4, "preen"))
                        VAR_1 = "-a";
                else {
                        VAR_6 = FUNC_2(VAR_4);
                        if (VAR_6 > 0)
                                VAR_1 = "-y";
                        else if (VAR_6 == 0)
                                VAR_1 = "-n";
                        else
                                FUNC_1("Invalid fsck.repair= parameter '%s'. Ignoring.", VAR_4);
                }
        }
        return 0;
}
