
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char const*,int ,char**) ;

__attribute__((used)) static int FUNC_12(const char *VAR_6, const char *VAR_7, void *VAR_8) {
        int VAR_9;

        FUNC_0(VAR_6);

        if (FUNC_9(VAR_6, "systemd.mask")) {
                char *VAR_10;

                if (FUNC_6(VAR_6, VAR_7))
                        return 0;

                VAR_9 = FUNC_11(VAR_7, VAR_1, &VAR_10);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_9, "Failed to glob unit name: %m");

                VAR_9 = FUNC_10(&VAR_4, VAR_10);
                if (VAR_9 < 0)
                        return FUNC_3();

        } else if (FUNC_9(VAR_6, "systemd.wants")) {
                char *VAR_11;

                if (FUNC_6(VAR_6, VAR_7))
                        return 0;

                VAR_9 = FUNC_11(VAR_7, VAR_1, &VAR_11);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_9, "Failed to glob unit name: %m");

                VAR_9 = FUNC_10(&VAR_5, VAR_11);
                if (VAR_9 < 0)
                        return FUNC_3();

        } else if (FUNC_5(VAR_6, "systemd.debug_shell")) {
                const char *VAR_12 = ((void*)0);

                VAR_9 = VAR_7 ? FUNC_4(VAR_7) : 1;
                if (VAR_9 < 0)
                        VAR_12 = FUNC_8(VAR_7);
                else if (VAR_9 > 0)
                        VAR_12 = FUNC_8(VAR_0);

                if (FUNC_1(&VAR_2, VAR_12) < 0)
                        return FUNC_3();

        } else if (FUNC_9(VAR_6, "systemd.unit")) {

                if (FUNC_6(VAR_6, VAR_7))
                        return 0;

                VAR_9 = FUNC_1(&VAR_3, VAR_7);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_9, "Failed to set default unit %s: %m", VAR_7);

        } else if (!VAR_7) {
                const char *VAR_13;

                VAR_13 = FUNC_7(VAR_6);
                if (VAR_13) {
                        VAR_9 = FUNC_1(&VAR_3, VAR_13);
                        if (VAR_9 < 0)
                                return FUNC_2(VAR_9, "Failed to set default unit %s: %m", VAR_13);
                }
        }

        return 0;
}
