
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef int dual_timestamp ;
struct TYPE_6__ {int idle_hint; TYPE_1__* manager; int idle_hint_timestamp; int leader; scalar_t__ tty; int type; } ;
struct TYPE_5__ {scalar_t__ idle_action_usec; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(Session *VAR_1, dual_timestamp *VAR_2) {
        usec_t VAR_3 = 0, VAR_4;
        int VAR_5;

        FUNC_1(VAR_1);


        if (VAR_1->idle_hint) {
                if (VAR_2)
                        *VAR_2 = VAR_1->idle_hint_timestamp;

                return VAR_1->idle_hint;
        }



        if (FUNC_0(VAR_1->type))
                goto dont_know;



        if (VAR_1->tty) {
                VAR_5 = FUNC_4(VAR_1->tty, &VAR_3);
                if (VAR_5 >= 0)
                        goto found_atime;
        }



        if (FUNC_6(VAR_1->leader)) {
                VAR_5 = FUNC_3(VAR_1->leader, &VAR_3);
                if (VAR_5 >= 0)
                        goto found_atime;
        }

dont_know:
        if (VAR_2)
                *VAR_2 = VAR_1->idle_hint_timestamp;

        return 0;

found_atime:
        if (VAR_2)
                FUNC_2(VAR_2, VAR_3);

        VAR_4 = FUNC_5(VAR_0);

        if (VAR_1->manager->idle_action_usec <= 0)
                return 0;

        return VAR_3 + VAR_1->manager->idle_action_usec <= VAR_4;
}
