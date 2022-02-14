
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ result; int will_auto_restart; int flush_n_restarts; int forbid_restart; int exec_context; scalar_t__ pid_file; int dynamic_creds; int exec_runtime; int n_keep_fd_store; int restart_usec; } ;
typedef int ServiceState ;
typedef scalar_t__ ServiceResult ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,char const**) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static void FUNC_21(Service *VAR_7, ServiceResult VAR_8, bool VAR_9) {
        ServiceState VAR_10;
        int VAR_11;

        FUNC_1(VAR_7);



        if (FUNC_17(FUNC_0(VAR_7)))
                VAR_9 = 0;

        if (VAR_7->result == VAR_6)
                VAR_7->result = VAR_8;

        if (VAR_7->result == VAR_6) {
                FUNC_16(FUNC_0(VAR_7));
                VAR_10 = VAR_2;
        } else if (VAR_7->result == VAR_5) {
                FUNC_15(FUNC_0(VAR_7), FUNC_9(VAR_7->result));
                VAR_10 = VAR_2;
        } else {
                FUNC_14(FUNC_0(VAR_7), FUNC_9(VAR_7->result));
                VAR_10 = VAR_3;
        }

        if (!VAR_9)
                FUNC_5(FUNC_0(VAR_7), "Service restart not allowed.");
        else {
                const char *VAR_12;
                bool VAR_13;

                VAR_13 = FUNC_11(VAR_7, &VAR_12);
                FUNC_5(FUNC_0(VAR_7), "Service will %srestart (%s)",
                                        VAR_13 ? "" : "not ",
                                        VAR_12);
                if (VAR_13)
                        VAR_7->will_auto_restart = 1;
        }



        VAR_7->n_keep_fd_store ++;

        FUNC_10(VAR_7, VAR_10);

        if (VAR_7->will_auto_restart) {
                VAR_7->will_auto_restart = 0;

                VAR_11 = FUNC_8(VAR_7, FUNC_20(FUNC_7(VAR_0), VAR_7->restart_usec));
                if (VAR_11 < 0) {
                        VAR_7->n_keep_fd_store--;
                        goto fail;
                }

                FUNC_10(VAR_7, VAR_1);
        } else


                VAR_7->flush_n_restarts = 1;



        VAR_7->n_keep_fd_store--;
        FUNC_12(FUNC_0(VAR_7));


        VAR_7->forbid_restart = 0;


        VAR_7->exec_runtime = FUNC_4(VAR_7->exec_runtime, 1);


        FUNC_13(FUNC_0(VAR_7), &VAR_7->exec_context);


        FUNC_18(FUNC_0(VAR_7), 1);


        FUNC_2(&VAR_7->dynamic_creds);




        if (VAR_7->pid_file)
                (void) FUNC_19(VAR_7->pid_file);


        FUNC_3(&VAR_7->exec_context);

        return;

fail:
        FUNC_6(FUNC_0(VAR_7), VAR_11, "Failed to run install restart timer: %m");
        FUNC_21(VAR_7, VAR_4, 0);
}
