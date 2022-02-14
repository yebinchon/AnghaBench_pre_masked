
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SleepConfig ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,int const*,int*,char***,char***) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, bool VAR_2, const SleepConfig *VAR_3) {
        bool VAR_4;
        char **VAR_5 = ((void*)0), **VAR_6 = ((void*)0);
        int VAR_7;

        FUNC_1(FUNC_0(VAR_1, "suspend", "hibernate", "hybrid-sleep", "suspend-then-hibernate"));

        VAR_7 = FUNC_7(VAR_1, VAR_3, &VAR_4, &VAR_5, &VAR_6);
        if (VAR_7 < 0)
                return 0;

        if (VAR_2 && !VAR_4) {
                FUNC_6("Sleep mode \"%s\" is disabled by configuration.", VAR_1);
                return 0;
        }

        if (FUNC_8(VAR_1, "suspend-then-hibernate"))
                return FUNC_2(VAR_3);

        if (!FUNC_4(VAR_6) || !FUNC_3(VAR_5))
                return 0;

        if (FUNC_8(VAR_1, "suspend"))
                return 1;

        if (!FUNC_5())
                return -VAR_0;

        return 1;
}
