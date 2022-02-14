
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4, const char *VAR_5, void *VAR_6) {
        int VAR_7;

        if (FUNC_4(VAR_4, "systemd.verity")) {

                VAR_7 = VAR_5 ? FUNC_3(VAR_5) : 1;
                if (VAR_7 < 0)
                        FUNC_2("Failed to parse verity= kernel command line switch %s. Ignoring.", VAR_5);
                else
                        VAR_1 = VAR_7;

        } else if (FUNC_4(VAR_4, "roothash")) {

                if (FUNC_5(VAR_4, VAR_5))
                        return 0;

                VAR_7 = FUNC_0(&VAR_3, VAR_5);
                if (VAR_7 < 0)
                        return FUNC_1();

        } else if (FUNC_4(VAR_4, "systemd.verity_root_data")) {

                if (FUNC_5(VAR_4, VAR_5))
                        return 0;

                VAR_7 = FUNC_0(&VAR_0, VAR_5);
                if (VAR_7 < 0)
                        return FUNC_1();

        } else if (FUNC_4(VAR_4, "systemd.verity_root_hash")) {

                if (FUNC_5(VAR_4, VAR_5))
                        return 0;

                VAR_7 = FUNC_0(&VAR_2, VAR_5);
                if (VAR_7 < 0)
                        return FUNC_1();
        }

        return 0;
}
