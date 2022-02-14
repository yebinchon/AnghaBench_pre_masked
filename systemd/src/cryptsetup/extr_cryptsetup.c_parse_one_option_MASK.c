
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,char*,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*,int *) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*,int*) ;
 int FUNC_12 (char const*,int *) ;
 char* FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 scalar_t__ FUNC_16 (int *,char const*) ;

__attribute__((used)) static int FUNC_17(const char *VAR_28) {
        const char *VAR_29;
        int VAR_30;

        FUNC_2(VAR_28);


        if (FUNC_0(VAR_28, "noauto", "auto", "nofail", "fail", "_netdev", "keyfile-timeout"))
                return 0;

        if (FUNC_13(VAR_28, "keyfile-timeout="))
                return 0;

        if ((VAR_29 = FUNC_13(VAR_28, "cipher="))) {
                VAR_30 = FUNC_3(&VAR_6, VAR_29);
                if (VAR_30 < 0)
                        return FUNC_6();

        } else if ((VAR_29 = FUNC_13(VAR_28, "size="))) {

                VAR_30 = FUNC_11(VAR_29, &VAR_10);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

                if (VAR_10 % 8) {
                        FUNC_4("size= not a multiple of 8, ignoring.");
                        return 0;
                }

                VAR_10 /= 8;

        } else if ((VAR_29 = FUNC_13(VAR_28, "sector-size="))) {

                VAR_30 = FUNC_11(VAR_29, &VAR_17);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

                if (VAR_17 % 2) {
                        FUNC_4("sector-size= not a multiple of 2, ignoring.");
                        return 0;
                }

                if (VAR_17 < VAR_3 || VAR_17 > VAR_1) {
                        FUNC_4("sector-size= is outside of %u and %u, ignoring.", VAR_3, VAR_1);
                        return 0;
                }

        } else if ((VAR_29 = FUNC_13(VAR_28, "key-slot="))) {

                VAR_26 = VAR_0;
                VAR_30 = FUNC_10(VAR_29, &VAR_11);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

        } else if ((VAR_29 = FUNC_13(VAR_28, "tcrypt-keyfile="))) {

                VAR_26 = VAR_4;
                if (FUNC_9(VAR_29)) {
                        if (FUNC_16(&VAR_21, VAR_29) < 0)
                                return FUNC_6();
                } else
                        FUNC_4("Key file path \"%s\" is not absolute. Ignoring.", VAR_29);

        } else if ((VAR_29 = FUNC_13(VAR_28, "keyfile-size="))) {

                VAR_30 = FUNC_11(VAR_29, &VAR_13);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

        } else if ((VAR_29 = FUNC_13(VAR_28, "keyfile-offset="))) {

                VAR_30 = FUNC_12(VAR_29, &VAR_12);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

        } else if ((VAR_29 = FUNC_13(VAR_28, "hash="))) {
                VAR_30 = FUNC_3(&VAR_8, VAR_29);
                if (VAR_30 < 0)
                        return FUNC_6();

        } else if ((VAR_29 = FUNC_13(VAR_28, "header="))) {
                VAR_26 = VAR_0;

                if (!FUNC_9(VAR_29))
                        return FUNC_5(FUNC_1(VAR_5),
                                               "Header path \"%s\" is not absolute, refusing.", VAR_29);

                if (VAR_9)
                        return FUNC_5(FUNC_1(VAR_5),
                                               "Duplicate header= option, refusing.");

                VAR_9 = FUNC_14(VAR_29);
                if (!VAR_9)
                        return FUNC_6();

        } else if ((VAR_29 = FUNC_13(VAR_28, "tries="))) {

                VAR_30 = FUNC_11(VAR_29, &VAR_25);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

        } else if (FUNC_0(VAR_28, "readonly", "read-only"))
                VAR_15 = 1;
        else if (FUNC_15(VAR_28, "verify"))
                VAR_27 = 1;
        else if (FUNC_0(VAR_28, "allow-discards", "discard"))
                VAR_7 = 1;
        else if (FUNC_15(VAR_28, "same-cpu-crypt"))
                VAR_16 = 1;
        else if (FUNC_15(VAR_28, "submit-from-crypt-cpus"))
                VAR_19 = 1;
        else if (FUNC_15(VAR_28, "luks"))
                VAR_26 = VAR_0;
        else if (FUNC_15(VAR_28, "tcrypt"))
                VAR_26 = VAR_4;
        else if (FUNC_15(VAR_28, "tcrypt-hidden")) {
                VAR_26 = VAR_4;
                VAR_20 = 1;
        } else if (FUNC_15(VAR_28, "tcrypt-system")) {
                VAR_26 = VAR_4;
                VAR_22 = 1;
        } else if (FUNC_15(VAR_28, "tcrypt-veracrypt")) {
                VAR_26 = VAR_4;
                VAR_23 = 1;
        } else if (FUNC_0(VAR_28, "plain", "swap", "tmp"))
                VAR_26 = VAR_2;
        else if ((VAR_29 = FUNC_13(VAR_28, "timeout="))) {

                VAR_30 = FUNC_8(VAR_29, &VAR_24);
                if (VAR_30 < 0) {
                        FUNC_5(VAR_30, "Failed to parse %s, ignoring: %m", VAR_28);
                        return 0;
                }

        } else if ((VAR_29 = FUNC_13(VAR_28, "offset="))) {

                VAR_30 = FUNC_12(VAR_29, &VAR_14);
                if (VAR_30 < 0)
                        return FUNC_5(VAR_30, "Failed to parse %s: %m", VAR_28);

        } else if ((VAR_29 = FUNC_13(VAR_28, "skip="))) {

                VAR_30 = FUNC_12(VAR_29, &VAR_18);
                if (VAR_30 < 0)
                        return FUNC_5(VAR_30, "Failed to parse %s: %m", VAR_28);

        } else if (!FUNC_15(VAR_28, "none"))
                FUNC_7("Encountered unknown /etc/crypttab option '%s', ignoring.", VAR_28);

        return 0;
}
