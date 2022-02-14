
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ load_state; } ;
typedef TYPE_1__ Unit ;
struct TYPE_12__ {scalar_t__ state; int inotify_triggered; } ;
typedef TYPE_2__ Path ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Unit *VAR_2, Unit *VAR_3) {
        Path *VAR_4 = FUNC_0(VAR_2);

        FUNC_3(VAR_2);
        FUNC_3(VAR_3);




        if (VAR_3->load_state != VAR_1)
                return;

        if (VAR_4->state == VAR_0 &&
            FUNC_2(FUNC_6(VAR_3))) {
                FUNC_4(FUNC_1(VAR_4), "Got notified about unit deactivation.");




                FUNC_5(VAR_4, 0, VAR_4->inotify_triggered);
        }
}
