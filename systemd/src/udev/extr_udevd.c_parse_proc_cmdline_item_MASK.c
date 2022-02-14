
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int,char*,char const*,char const*) ;
 int FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char const*,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_3, const char *VAR_4, void *VAR_5) {
        int VAR_6 = 0;

        FUNC_0(VAR_3);

        if (!VAR_4)
                return 0;

        if (FUNC_6(VAR_3, "udev.log_priority")) {

                if (FUNC_7(VAR_3, VAR_4))
                        return 0;

                VAR_6 = FUNC_1(VAR_4);
                if (VAR_6 >= 0)
                        FUNC_2(VAR_6);

        } else if (FUNC_6(VAR_3, "udev.event_timeout")) {

                if (FUNC_7(VAR_3, VAR_4))
                        return 0;

                VAR_6 = FUNC_5(VAR_4, &VAR_1);

        } else if (FUNC_6(VAR_3, "udev.children_max")) {

                if (FUNC_7(VAR_3, VAR_4))
                        return 0;

                VAR_6 = FUNC_8(VAR_4, &VAR_0);

        } else if (FUNC_6(VAR_3, "udev.exec_delay")) {

                if (FUNC_7(VAR_3, VAR_4))
                        return 0;

                VAR_6 = FUNC_5(VAR_4, &VAR_2);

        } else if (FUNC_9(VAR_3, "udev."))
                FUNC_3("Unknown udev kernel command line option \"%s\", ignoring", VAR_3);

        if (VAR_6 < 0)
                FUNC_4(VAR_6, "Failed to parse \"%s=%s\", ignoring: %m", VAR_3, VAR_4);

        return 0;
}
