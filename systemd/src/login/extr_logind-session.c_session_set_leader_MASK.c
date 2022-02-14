
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_8__ {scalar_t__ leader; int audit_id; TYPE_1__* manager; } ;
struct TYPE_7__ {int sessions_by_leader; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int FUNC_6(Session *VAR_1, pid_t VAR_2) {
        int VAR_3;

        FUNC_1(VAR_1);

        if (!FUNC_5(VAR_2))
                return -VAR_0;

        if (VAR_1->leader == VAR_2)
                return 0;

        VAR_3 = FUNC_3(VAR_1->manager->sessions_by_leader, FUNC_0(VAR_2), VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        if (FUNC_5(VAR_1->leader))
                (void) FUNC_4(VAR_1->manager->sessions_by_leader, FUNC_0(VAR_1->leader), VAR_1);

        VAR_1->leader = VAR_2;
        (void) FUNC_2(VAR_2, &VAR_1->audit_id);

        return 1;
}
