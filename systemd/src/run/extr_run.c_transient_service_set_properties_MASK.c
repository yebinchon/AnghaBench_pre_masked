
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char,char*) ;
 char* FUNC_8 (char*,char const*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(sd_bus_message *VAR_18, const char *VAR_19) {
        bool VAR_20 = 0;
        int VAR_21;

        FUNC_0(VAR_18);

        VAR_21 = FUNC_12(VAR_18, VAR_5, VAR_12);
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_11(VAR_18);
        if (VAR_21 < 0)
                return VAR_21;

        VAR_21 = FUNC_10(VAR_18);
        if (VAR_21 < 0)
                return VAR_21;

        if (VAR_16 || VAR_15 != VAR_1) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "AddRef", "b", 1);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_13) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "RemainAfterExit", "b", VAR_13);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_14) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "Type", "s", VAR_14);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_9) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "User", "s", VAR_9);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_8) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "Group", "s", VAR_8);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_11) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "Nice", "i", VAR_10);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_17) {
                VAR_21 = FUNC_4(VAR_18, "(sv)", "WorkingDirectory", "s", VAR_17);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        if (VAR_19) {
                VAR_21 = FUNC_4(VAR_18,
                                          "(sv)(sv)(sv)(sv)",
                                          "StandardInput", "s", "tty",
                                          "StandardOutput", "s", "tty",
                                          "StandardError", "s", "tty",
                                          "TTYPath", "s", VAR_19);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_20 = 1;

        } else if (VAR_15 == VAR_0) {
                VAR_21 = FUNC_4(VAR_18,
                                          "(sv)(sv)(sv)",
                                          "StandardInputFileDescriptor", "h", VAR_3,
                                          "StandardOutputFileDescriptor", "h", VAR_4,
                                          "StandardErrorFileDescriptor", "h", VAR_2);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_20 = FUNC_3(VAR_3) || FUNC_3(VAR_4) || FUNC_3(VAR_2);
        }

        if (VAR_20) {
                const char *VAR_22;

                VAR_22 = FUNC_2("TERM");
                if (VAR_22) {
                        char *VAR_23;

                        VAR_23 = FUNC_8("TERM=", VAR_22);
                        VAR_21 = FUNC_4(VAR_18,
                                                  "(sv)",
                                                  "Environment", "as", 1, VAR_23);
                        if (VAR_21 < 0)
                                return FUNC_1(VAR_21);
                }
        }

        if (!FUNC_9(VAR_7)) {
                VAR_21 = FUNC_7(VAR_18, 'r', "sv");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_4(VAR_18, "s", "Environment");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_7(VAR_18, 'v', "as");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_5(VAR_18, VAR_7);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }


        if (!FUNC_9(VAR_6)) {
                VAR_21 = FUNC_7(VAR_18, 'r', "sv");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_4(VAR_18, "s", "ExecStart");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_7(VAR_18, 'v', "a(sasb)");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_7(VAR_18, 'a', "(sasb)");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_7(VAR_18, 'r', "sasb");
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_4(VAR_18, "s", VAR_6[0]);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_5(VAR_18, VAR_6);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_4(VAR_18, "b", 0);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);

                VAR_21 = FUNC_6(VAR_18);
                if (VAR_21 < 0)
                        return FUNC_1(VAR_21);
        }

        return 0;
}
