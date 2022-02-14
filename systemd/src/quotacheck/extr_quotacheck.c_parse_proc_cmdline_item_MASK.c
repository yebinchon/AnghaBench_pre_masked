
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const char *VAR_3, void *VAR_4) {

        if (FUNC_2(VAR_2, "quotacheck.mode")) {

                if (FUNC_1(VAR_2, VAR_3))
                        return 0;

                if (FUNC_2(VAR_3, "auto"))
                        VAR_0 = VAR_1 = 0;
                else if (FUNC_2(VAR_3, "force"))
                        VAR_0 = 1;
                else if (FUNC_2(VAR_3, "skip"))
                        VAR_1 = 1;
                else
                        FUNC_0("Invalid quotacheck.mode= parameter '%s'. Ignoring.", VAR_3);
        }
        return 0;
}
