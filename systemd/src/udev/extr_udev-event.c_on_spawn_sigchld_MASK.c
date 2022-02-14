
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int si_code; int si_status; } ;
typedef TYPE_1__ siginfo_t ;
typedef int sd_event_source ;
struct TYPE_6__ {int cmd; int device; int accept_failure; } ;
typedef TYPE_2__ Spawn ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(sd_event_source *VAR_3, const siginfo_t *VAR_4, void *VAR_5) {
        Spawn *VAR_6 = VAR_5;
        int VAR_7 = -VAR_0;

        FUNC_0(VAR_6);

        switch (VAR_4->si_code) {
        case 129:
                if (VAR_4->si_status == 0)
                        FUNC_1(VAR_6->device, "Process '%s' succeeded.", VAR_6->cmd);
                else
                        FUNC_3(VAR_6->device, VAR_6->accept_failure ? VAR_1 : VAR_2, 0,
                                        "Process '%s' failed with exit code %i.", VAR_6->cmd, VAR_4->si_status);
                VAR_7 = VAR_4->si_status;
                break;
        case 128:
        case 130:
                FUNC_2(VAR_6->device, "Process '%s' terminated by signal %s.", VAR_6->cmd, FUNC_6(VAR_4->si_status));
                break;
        default:
                FUNC_2(VAR_6->device, "Process '%s' failed due to unknown reason.", VAR_6->cmd);
        }

        FUNC_4(FUNC_5(VAR_3), VAR_7);
        return 1;
}
