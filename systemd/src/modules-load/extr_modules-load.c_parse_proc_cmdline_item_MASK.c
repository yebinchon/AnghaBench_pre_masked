
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1, void *VAR_2) {
        int VAR_3;

        if (FUNC_1(VAR_0, "modules_load")) {

                if (FUNC_2(VAR_0, VAR_1))
                        return 0;

                VAR_3 = FUNC_0(VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        return 0;
}
