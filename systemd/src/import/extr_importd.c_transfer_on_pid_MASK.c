
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ si_code; scalar_t__ si_status; } ;
typedef TYPE_1__ siginfo_t ;
struct TYPE_9__ {scalar_t__ pid; } ;
typedef TYPE_2__ sd_event_source ;
typedef TYPE_2__ Transfer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_3, const siginfo_t *VAR_4, void *VAR_5) {
        Transfer *VAR_6 = VAR_5;
        bool VAR_7 = 0;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);

        if (VAR_4->si_code == VAR_1) {
                if (VAR_4->si_status != 0)
                        FUNC_3("Transfer process failed with exit code %i.", VAR_4->si_status);
                else {
                        FUNC_2("Transfer process succeeded.");
                        VAR_7 = 1;
                }

        } else if (FUNC_0(VAR_4->si_code, VAR_2, VAR_0))
                FUNC_3("Transfer process terminated by signal %s.", FUNC_4(VAR_4->si_status));
        else
                FUNC_3("Transfer process failed due to unknown reason.");

        VAR_6->pid = 0;

        return FUNC_5(VAR_6, VAR_7);
}
