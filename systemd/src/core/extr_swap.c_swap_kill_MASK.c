
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_error ;
typedef int Unit ;
struct TYPE_2__ {int control_pid; } ;
typedef int KillWho ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(Unit *VAR_0, KillWho VAR_1, int VAR_2, sd_bus_error *VAR_3) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, -1, FUNC_0(VAR_0)->control_pid, VAR_3);
}
