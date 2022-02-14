
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,int ,scalar_t__*,int ,int ,char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

int FUNC_4(void) {
        int VAR_4;

        if (VAR_3 > 0)
                return 0;



        if (!FUNC_2(VAR_1))
                return 0;

        if (!FUNC_1())
                return -VAR_0;

        VAR_4 = FUNC_0("(sd-askpwagent)",
                       ((void*)0), 0,
                       &VAR_3,
                       VAR_2,
                       VAR_2, "--watch", ((void*)0));
        if (VAR_4 < 0)
                return FUNC_3(VAR_4, "Failed to fork TTY ask password agent: %m");

        return 1;
}
