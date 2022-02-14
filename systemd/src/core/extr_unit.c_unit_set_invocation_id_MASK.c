
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sd_id128_t ;
struct TYPE_8__ {scalar_t__* invocation_id_string; int invocation_id; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_7__ {int units_by_invocation_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 (int ,int *,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__*) ;

int FUNC_7(Unit *VAR_2, sd_id128_t VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);



        if (FUNC_4(VAR_2->invocation_id, VAR_3))
                return 0;

        if (!FUNC_5(VAR_2->invocation_id))
                (void) FUNC_3(VAR_2->manager->units_by_invocation_id, &VAR_2->invocation_id, VAR_2);

        if (FUNC_5(VAR_3)) {
                VAR_4 = 0;
                goto reset;
        }

        VAR_4 = FUNC_1(&VAR_2->manager->units_by_invocation_id, &VAR_1);
        if (VAR_4 < 0)
                goto reset;

        VAR_2->invocation_id = VAR_3;
        FUNC_6(VAR_3, VAR_2->invocation_id_string);

        VAR_4 = FUNC_2(VAR_2->manager->units_by_invocation_id, &VAR_2->invocation_id, VAR_2);
        if (VAR_4 < 0)
                goto reset;

        return 0;

reset:
        VAR_2->invocation_id = VAR_0;
        VAR_2->invocation_id_string[0] = 0;
        return VAR_4;
}
