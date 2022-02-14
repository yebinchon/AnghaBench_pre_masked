
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int send_sigkill; int kill_mode; } ;
struct TYPE_7__ {TYPE_1__ kill_context; } ;
typedef TYPE_2__ Service ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(Service *VAR_3) {
        FUNC_3(VAR_3);
        if (FUNC_5(FUNC_2(VAR_3)) &&
            FUNC_0(VAR_3->kill_context.kill_mode, VAR_2, VAR_1) &&
            !VAR_3->kill_context.send_sigkill)
               return FUNC_4(FUNC_2(VAR_3), FUNC_1(VAR_0),
                                           "Will not start SendSIGKILL=no service of type KillMode=control-group or mixed while processes exist");

        return 0;
}
