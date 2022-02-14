
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void) {

        if (FUNC_3() == 1 &&
            VAR_5 != VAR_0)
                return FUNC_4(FUNC_0(VAR_3),
                                       "Unsupported execution mode while PID 1.");

        if (FUNC_3() == 1 &&
            !VAR_6)
                return FUNC_4(FUNC_0(VAR_3),
                                       "Can't run --user mode as PID 1.");

        if (VAR_5 == VAR_0 &&
            VAR_6 &&
            FUNC_3() != 1)
                return FUNC_4(FUNC_0(VAR_3),
                                       "Can't run system mode unless PID 1.");

        if (VAR_5 == VAR_1 &&
            FUNC_2() == 0)
                return FUNC_4(FUNC_0(VAR_3),
                                       "Don't run test mode as root.");

        if (!VAR_6 &&
            VAR_5 == VAR_0 &&
            FUNC_6() <= 0)
                return FUNC_4(FUNC_0(VAR_2),
                                       "Trying to run as user instance, but the system has not been booted with systemd.");

        if (!VAR_6 &&
            VAR_5 == VAR_0 &&
            !FUNC_1("XDG_RUNTIME_DIR"))
                return FUNC_4(FUNC_0(VAR_4),
                                       "Trying to run as user instance, but $XDG_RUNTIME_DIR is not set.");

        if (VAR_6 &&
            VAR_5 == VAR_0 &&
            FUNC_5() > 0)
                return FUNC_4(FUNC_0(VAR_2),
                                       "Cannot be run in a chroot() environment.");

        return 0;
}
