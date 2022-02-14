
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4, void *VAR_5) {
        int VAR_6;

        if (FUNC_2(VAR_3, "systemd.run")) {

                if (FUNC_3(VAR_3, VAR_4))
                        return 0;

                VAR_6 = FUNC_4(&VAR_0, VAR_4);
                if (VAR_6 < 0)
                        return FUNC_1();

        } else if (FUNC_2(VAR_3, "systemd.run_success_action")) {

                if (FUNC_3(VAR_3, VAR_4))
                        return 0;

                if (FUNC_0(&VAR_2, VAR_4) < 0)
                        return FUNC_1();

        } else if (FUNC_2(VAR_3, "systemd.run_failure_action")) {

                if (FUNC_3(VAR_3, VAR_4))
                        return 0;

                if (FUNC_0(&VAR_1, VAR_4) < 0)
                        return FUNC_1();
        }

        return 0;
}
