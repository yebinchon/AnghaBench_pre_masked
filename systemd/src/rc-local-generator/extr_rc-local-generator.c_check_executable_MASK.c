
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,char*,char const*) ;
 int FUNC_3 (scalar_t__,char*,char const*) ;
 int FUNC_4 (scalar_t__,char*,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4) {
        FUNC_1(VAR_4);

        if (FUNC_0(VAR_4, VAR_2) < 0) {
                if (VAR_3 == VAR_1)
                        return FUNC_2(VAR_3, "%s does not exist, skipping.", VAR_4);
                if (VAR_3 == VAR_0)
                        return FUNC_3(VAR_3, "%s is not marked executable, skipping.", VAR_4);

                return FUNC_4(VAR_3, "Couldn't determine if %s exists and is executable, skipping: %m", VAR_4);
        }

        return 0;
}
