
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* rlimit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (char const* const*,char const* const*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
                int VAR_5,
                char **VAR_6,
                const struct rlimit *VAR_7,
                const struct rlimit *VAR_8,
                const char **VAR_9) {
        int VAR_10;

        FUNC_0(VAR_7);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        (void) FUNC_3(VAR_7, VAR_8);

        VAR_10 = FUNC_2(VAR_5, VAR_6);
        if (VAR_10 < 0) {
                *VAR_9 = "Failed to parse commandline arguments";
                return VAR_10;
        }


        if (!VAR_3) {
                VAR_3 = FUNC_4(VAR_1);
                if (!VAR_3) {
                        *VAR_9 = "Failed to set default unit";
                        return FUNC_1();
                }
        }


        if (VAR_4 == VAR_2)
                VAR_4 = VAR_0;

        return 0;
}
