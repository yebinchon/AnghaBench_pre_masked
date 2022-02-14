
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3) {
        FUNC_1(VAR_3);

        if (FUNC_0(VAR_3, VAR_1) < 0) {
                if (VAR_2 == VAR_0)
                        return 0;

                return FUNC_2(VAR_2, "Failed to determine whether '%s' is available: %m", VAR_3);
        }

        return 1;
}
