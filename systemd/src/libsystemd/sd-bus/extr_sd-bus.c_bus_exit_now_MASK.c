
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exited; scalar_t__ event; int exit_on_disconnect; int exit_triggered; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(sd_bus *VAR_1) {
        FUNC_0(VAR_1);




        if (VAR_1->exited)
                return 0;
        if (!VAR_1->exit_triggered)
                return 0;
        if (!VAR_1->exit_on_disconnect)
                return 0;

        VAR_1->exited = 1;

        FUNC_3("Bus connection disconnected, exiting.");

        if (VAR_1->event)
                return FUNC_4(VAR_1->event, VAR_0);
        else
                FUNC_2(VAR_0);

        FUNC_1("exit() didn't exit?");
}
