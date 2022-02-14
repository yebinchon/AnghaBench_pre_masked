
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ job_id; int userdata; int bus_path; int (* unit_callback ) (TYPE_2__*,int ,int,int ) ;scalar_t__ active_state; int flags; scalar_t__ clean_result; TYPE_2__* parent; } ;
typedef TYPE_1__ WaitForItem ;
struct TYPE_10__ {int has_failed; TYPE_1__* current; } ;
typedef TYPE_2__ BusWaitForUnits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(WaitForItem *VAR_3) {
        BusWaitForUnits *VAR_4;

        FUNC_1(VAR_3);
        FUNC_2(VAR_4 = VAR_3->parent);

        if (FUNC_0(VAR_3->flags, VAR_1)) {

                if (VAR_3->clean_result && !FUNC_4(VAR_3->clean_result, "success"))
                        VAR_4->has_failed = 1;

                if (!VAR_3->active_state || FUNC_4(VAR_3->active_state, "maintenance"))
                        return;
        }

        if (FUNC_0(VAR_3->flags, VAR_2) && VAR_3->job_id != 0)
                return;

        if (FUNC_0(VAR_3->flags, VAR_0)) {

                if (FUNC_5(VAR_3->active_state, "failed"))
                        VAR_4->has_failed = 1;
                else if (!FUNC_5(VAR_3->active_state, "inactive"))
                        return;
        }

        if (VAR_3->unit_callback) {
                VAR_4->current = VAR_3;
                VAR_3->unit_callback(VAR_4, VAR_3->bus_path, 1, VAR_3->userdata);
        }

        FUNC_7(VAR_3);

        FUNC_3(VAR_4);
}
