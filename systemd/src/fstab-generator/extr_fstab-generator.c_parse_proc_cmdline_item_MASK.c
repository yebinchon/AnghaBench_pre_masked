
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VolatileMode ;


 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *,char*,char const*,int *) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_11, const char *VAR_12, void *VAR_13) {
        int VAR_14;





        if (FUNC_0(VAR_11, "fstab", "rd.fstab")) {

                VAR_14 = VAR_12 ? FUNC_4(VAR_12) : 1;
                if (VAR_14 < 0)
                        FUNC_3("Failed to parse fstab switch %s. Ignoring.", VAR_12);
                else
                        VAR_1 = VAR_14;

        } else if (FUNC_6(VAR_11, "root")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (FUNC_1(&VAR_6, VAR_12) < 0)
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "rootfstype")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (FUNC_1(&VAR_2, VAR_12) < 0)
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "rootflags")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (!FUNC_7(&VAR_4, ",", VAR_12, ((void*)0)))
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "roothash")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (FUNC_1(&VAR_3, VAR_12) < 0)
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "mount.usr")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (FUNC_1(&VAR_9, VAR_12) < 0)
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "mount.usrfstype")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (FUNC_1(&VAR_7, VAR_12) < 0)
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "mount.usrflags")) {

                if (FUNC_5(VAR_11, VAR_12))
                        return 0;

                if (!FUNC_7(&VAR_8, ",", VAR_12, ((void*)0)))
                        return FUNC_2();

        } else if (FUNC_6(VAR_11, "rw") && !VAR_12)
                VAR_5 = 1;
        else if (FUNC_6(VAR_11, "ro") && !VAR_12)
                VAR_5 = 0;
        else if (FUNC_6(VAR_11, "systemd.volatile")) {
                VolatileMode VAR_15;

                if (VAR_12) {
                        VAR_15 = FUNC_8(VAR_12);
                        if (VAR_15 < 0)
                                FUNC_3("Failed to parse systemd.volatile= argument: %s", VAR_12);
                        else
                                VAR_10 = VAR_15;
                } else
                        VAR_10 = VAR_0;
        }

        return 0;
}
