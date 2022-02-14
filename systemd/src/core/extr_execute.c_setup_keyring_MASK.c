
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int key_serial_t ;
typedef scalar_t__ gid_t ;
struct TYPE_10__ {scalar_t__ keyring_mode; int invocation_id; } ;
typedef TYPE_1__ Unit ;
typedef TYPE_1__ ExecParameters ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*,char*,int *,int,int) ;
 int FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int,int,int ,int ) ;
 int FUNC_7 (TYPE_1__ const*,scalar_t__,char*) ;
 int FUNC_8 (TYPE_1__ const*,scalar_t__,char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(
                const Unit *VAR_18,
                const ExecContext *VAR_19,
                const ExecParameters *VAR_20,
                uid_t VAR_21, gid_t VAR_22) {

        key_serial_t VAR_23;
        int VAR_24 = 0;
        uid_t VAR_25;
        gid_t VAR_26;

        FUNC_2(VAR_18);
        FUNC_2(VAR_19);
        FUNC_2(VAR_20);
        if (VAR_19->keyring_mode == VAR_4)
                return 0;






        VAR_25 = FUNC_4();
        VAR_26 = FUNC_3();

        if (FUNC_5(VAR_22) && VAR_22 != VAR_26) {
                if (FUNC_10(VAR_22, -1) < 0)
                        return FUNC_8(VAR_18, VAR_17, "Failed to change GID for user keyring: %m");
        }

        if (FUNC_12(VAR_21) && VAR_21 != VAR_25) {
                if (FUNC_11(VAR_21, -1) < 0) {
                        VAR_24 = FUNC_8(VAR_18, VAR_17, "Failed to change UID for user keyring: %m");
                        goto out;
                }
        }

        VAR_23 = FUNC_6(VAR_6, 0, 0, 0, 0);
        if (VAR_23 == -1) {
                if (VAR_17 == VAR_2)
                        FUNC_7(VAR_18, VAR_17, "Kernel keyring not supported, ignoring.");
                else if (FUNC_0(VAR_17, VAR_0, VAR_3))
                        FUNC_7(VAR_18, VAR_17, "Kernel keyring access prohibited, ignoring.");
                else if (VAR_17 == VAR_1)
                        FUNC_7(VAR_18, VAR_17, "Out of kernel keyrings to allocate, ignoring.");
                else
                        VAR_24 = FUNC_8(VAR_18, VAR_17, "Setting up kernel keyring failed: %m");

                goto out;
        }


        if (VAR_19->keyring_mode == VAR_5) {

                if (FUNC_6(VAR_7,
                           VAR_13,
                           VAR_12, 0, 0) < 0) {
                        VAR_24 = FUNC_8(VAR_18, VAR_17, "Failed to link user keyring into session keyring: %m");
                        goto out;
                }
        }


        if (FUNC_12(VAR_21) && VAR_21 != VAR_25) {
                if (FUNC_11(VAR_25, -1) < 0) {
                        VAR_24 = FUNC_8(VAR_18, VAR_17, "Failed to change UID back for user keyring: %m");
                        goto out;
                }
        }

        if (FUNC_5(VAR_22) && VAR_22 != VAR_26) {
                if (FUNC_10(VAR_26, -1) < 0)
                        return FUNC_8(VAR_18, VAR_17, "Failed to change GID back for user keyring: %m");
        }


        if (!FUNC_9(VAR_18->invocation_id)) {
                key_serial_t VAR_27;

                VAR_27 = FUNC_1("user", "invocation_id", &VAR_18->invocation_id, sizeof(VAR_18->invocation_id), VAR_12);
                if (VAR_27 == -1)
                        FUNC_7(VAR_18, VAR_17, "Failed to add invocation ID to keyring, ignoring: %m");
                else {
                        if (FUNC_6(VAR_8, VAR_27,
                                   VAR_11|VAR_9|VAR_10|
                                   VAR_16|VAR_14|VAR_15, 0, 0) < 0)
                                VAR_24 = FUNC_8(VAR_18, VAR_17, "Failed to restrict invocation ID permission: %m");
                }
        }

out:


        if (FUNC_4() != VAR_25)
                (void) FUNC_11(VAR_25, -1);

        if (FUNC_3() != VAR_26)
                (void) FUNC_10(VAR_26, -1);

        return VAR_24;
}
