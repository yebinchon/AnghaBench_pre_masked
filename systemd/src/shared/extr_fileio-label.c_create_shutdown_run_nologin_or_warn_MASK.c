
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(void) {
        int VAR_0;





        VAR_0 = FUNC_1("/run/nologin",
                                           "System is going down. Unprivileged users are not permitted to log in anymore. "
                                           "For technical details, see pam_nologin(8).");
        if (VAR_0 < 0)
                return FUNC_0(VAR_0, "Failed to create /run/nologin: %m");

        return 0;
}
