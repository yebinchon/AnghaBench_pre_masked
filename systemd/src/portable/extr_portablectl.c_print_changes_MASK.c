
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int *,char,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const**,char const**,char const**) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(sd_bus_message *VAR_2) {
        int VAR_3;

        if (VAR_1)
                return 0;

        VAR_3 = FUNC_4(VAR_2, 'a', "(sss)");
        if (VAR_3 < 0)
                return FUNC_0(VAR_3);

        for (;;) {
                const char *VAR_4, *VAR_5, *VAR_6;

                VAR_3 = FUNC_6(VAR_2, "(sss)", &VAR_4, &VAR_5, &VAR_6);
                if (VAR_3 < 0)
                        return FUNC_0(VAR_3);
                if (VAR_3 == 0)
                        break;

                if (FUNC_8(VAR_4, "symlink"))
                        FUNC_3("Created symlink %s %s %s.", VAR_5, FUNC_7(VAR_0), VAR_6);
                else if (FUNC_8(VAR_4, "copy")) {
                        if (FUNC_1(VAR_6))
                                FUNC_3("Copied %s.", VAR_5);
                        else
                                FUNC_3("Copied %s %s %s.", VAR_6, FUNC_7(VAR_0), VAR_5);
                } else if (FUNC_8(VAR_4, "unlink"))
                        FUNC_3("Removed %s.", VAR_5);
                else if (FUNC_8(VAR_4, "write"))
                        FUNC_3("Written %s.", VAR_5);
                else if (FUNC_8(VAR_4, "mkdir"))
                        FUNC_3("Created directory %s.", VAR_5);
                else
                        FUNC_2("Unexpected change: %s/%s/%s", VAR_4, VAR_5, VAR_6);
        }

        VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
