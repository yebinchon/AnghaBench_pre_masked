
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_error ;
typedef int Unit ;
struct TYPE_4__ {int control_pid; } ;
typedef TYPE_1__ Mount ;
typedef int KillWho ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(Unit *VAR_0, KillWho VAR_1, int VAR_2, sd_bus_error *VAR_3) {
        Mount *VAR_4 = FUNC_0(VAR_0);

        FUNC_1(VAR_4);

        return FUNC_2(VAR_0, VAR_1, VAR_2, -1, VAR_4->control_pid, VAR_3);
}
