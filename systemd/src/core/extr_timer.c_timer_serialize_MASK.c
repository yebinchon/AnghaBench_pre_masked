
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {scalar_t__ realtime; scalar_t__ monotonic; } ;
struct TYPE_5__ {TYPE_1__ last_trigger; int result; int state; } ;
typedef TYPE_2__ Timer ;
typedef int FILE ;
typedef int FDSet ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_0, FILE *VAR_1, FDSet *VAR_2) {
        Timer *VAR_3 = FUNC_0(VAR_0);

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        (void) FUNC_2(VAR_1, "state", FUNC_5(VAR_3->state));
        (void) FUNC_2(VAR_1, "result", FUNC_4(VAR_3->result));

        if (VAR_3->last_trigger.realtime > 0)
                (void) FUNC_3(VAR_1, "last-trigger-realtime", VAR_3->last_trigger.realtime);

        if (VAR_3->last_trigger.monotonic > 0)
                (void) FUNC_3(VAR_1, "last-trigger-monotonic", VAR_3->last_trigger.monotonic);

        return 0;
}
