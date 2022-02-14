
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sd_bus_message ;
typedef scalar_t__ ConditionType ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int *,char const*,char const*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (int,char*,char const*,char const*) ;
 int FUNC_11 (char const*,scalar_t__*) ;
 int FUNC_12 (int *,char*,char const*,char*,int,...) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (char const*) ;

__attribute__((used)) static int FUNC_15(sd_bus_message *VAR_2, const char *VAR_3, const char *VAR_4) {
        ConditionType VAR_5 = VAR_1;
        bool VAR_6 = 0;
        int VAR_7;

        if (FUNC_0(VAR_3,
                       "Description", "SourcePath", "OnFailureJobMode",
                       "JobTimeoutAction", "JobTimeoutRebootArgument",
                       "StartLimitAction", "FailureAction", "SuccessAction",
                       "RebootArgument", "CollectMode"))
                return FUNC_5(VAR_2, VAR_3, VAR_4);

        if (FUNC_0(VAR_3,
                       "StopWhenUnneeded", "RefuseManualStart", "RefuseManualStop",
                       "AllowIsolate", "IgnoreOnIsolate", "DefaultDependencies"))
                return FUNC_2(VAR_2, VAR_3, VAR_4);

        if (FUNC_0(VAR_3, "JobTimeoutSec", "JobRunningTimeoutSec", "StartLimitIntervalSec"))
                return FUNC_3(VAR_2, VAR_3, VAR_4);

        if (FUNC_13(VAR_3, "StartLimitBurst"))
                return FUNC_4(VAR_2, VAR_3, VAR_4);

        if (FUNC_0(VAR_3, "SuccessActionExitStatus", "FailureActionExitStatus")) {
                if (FUNC_9(VAR_4))
                        VAR_7 = FUNC_12(VAR_2, "(sv)", VAR_3, "i", -1);
                else {
                        uint8_t VAR_8;

                        VAR_7 = FUNC_11(VAR_4, &VAR_8);
                        if (VAR_7 < 0)
                                return FUNC_10(VAR_7, "Failed to parse %s=%s", VAR_3, VAR_4);

                        VAR_7 = FUNC_12(VAR_2, "(sv)", VAR_3, "i", (int) VAR_8);
                }
                if (VAR_7 < 0)
                        return FUNC_7(VAR_7);

                return 1;
        }

        if (FUNC_14(VAR_3) >= 0 ||
            FUNC_0(VAR_3, "Documentation", "RequiresMountsFor"))
                return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_0);

        VAR_5 = FUNC_8(VAR_3);
        if (VAR_5 >= 0)
                VAR_6 = 1;
        else
                VAR_5 = FUNC_1(VAR_3);
        if (VAR_5 >= 0) {
                if (FUNC_9(VAR_4))
                        VAR_7 = FUNC_12(VAR_2, "(sv)", VAR_6 ? "Conditions" : "Asserts", "a(sbbs)", 0);
                else {
                        const char *VAR_9 = VAR_4;
                        int VAR_10, VAR_11;

                        VAR_10 = *VAR_9 == '|';
                        if (VAR_10)
                                VAR_9++;

                        VAR_11 = *VAR_9 == '!';
                        if (VAR_11)
                                VAR_9++;

                        VAR_7 = FUNC_12(VAR_2, "(sv)", VAR_6 ? "Conditions" : "Asserts", "a(sbbs)", 1,
                                                  VAR_3, VAR_10, VAR_11, VAR_9);
                }
                if (VAR_7 < 0)
                        return FUNC_7(VAR_7);

                return 1;
        }

        return 0;
}
