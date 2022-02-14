
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iovec_wrapper {int dummy; } ;
struct TYPE_5__ {scalar_t__ is_pid1; scalar_t__ is_journald; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct iovec_wrapper*,TYPE_1__*) ;
 int FUNC_3 (struct iovec_wrapper*,TYPE_1__*,int,char**) ;
 struct iovec_wrapper* FUNC_4 (struct iovec_wrapper*) ;
 struct iovec_wrapper* FUNC_5 () ;
 int FUNC_6 (struct iovec_wrapper*,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct iovec_wrapper*,int ) ;
 int FUNC_13 (TYPE_1__*,struct iovec_wrapper*,int ) ;

__attribute__((used)) static int FUNC_14(int VAR_4, char* VAR_5[]) {
        Context VAR_6 = {};
        struct iovec_wrapper *VAR_7;
        int VAR_8;

        FUNC_7("Processing coredump received from the kernel...");

        VAR_7 = FUNC_5();
        if (!VAR_7)
                return FUNC_9();

        (void) FUNC_6(VAR_7, "MESSAGE_ID=", VAR_2);
        (void) FUNC_6(VAR_7, "PRIORITY=", FUNC_0(VAR_0));


        VAR_8 = FUNC_3(VAR_7, &VAR_6, VAR_4 - 1, VAR_5 + 1);
        if (VAR_8 < 0)
                goto finish;


        VAR_8 = FUNC_2(VAR_7, &VAR_6);
        if (VAR_8 < 0)
                goto finish;

        if (!VAR_6.is_journald) {

                FUNC_11(VAR_1);
                FUNC_10();
        }







        if (VAR_6.is_pid1) {
                FUNC_8("Due to PID 1 having crashed coredump collection will now be turned off.");
                FUNC_1();
        }

        if (VAR_6.is_journald || VAR_6.is_pid1)
                VAR_8 = FUNC_13(&VAR_6, VAR_7, VAR_3);
        else
                VAR_8 = FUNC_12(VAR_7, VAR_3);

 finish:
        VAR_7 = FUNC_4(VAR_7);
        return VAR_8;
}
