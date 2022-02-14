
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int id; } ;
typedef TYPE_1__ Unit ;
struct TYPE_14__ {int code; int status; } ;
struct TYPE_13__ {TYPE_6__ main_exec_status; } ;
typedef TYPE_2__ Service ;
typedef TYPE_1__ Manager ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (char*,char const*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, Manager *VAR_2, Unit *VAR_3, int VAR_4, int VAR_5) {
        Service *VAR_6 = ((void*)0);

        FUNC_2(VAR_2);
        FUNC_2(VAR_3);

        FUNC_6(VAR_2, VAR_3);

        VAR_6 = FUNC_0(VAR_3);
        FUNC_4(&VAR_6->main_exec_status, VAR_0, "\t");

        if (FUNC_3(VAR_6->main_exec_status.code) != FUNC_3(VAR_5)) {
                FUNC_5("%s: %s: exit code %d, expected %d",
                          VAR_1, VAR_3->id,
                          VAR_6->main_exec_status.code, VAR_5);
                FUNC_1();
        }

        if (VAR_6->main_exec_status.status != VAR_4) {
                FUNC_5("%s: %s: exit status %d, expected %d",
                          VAR_1, VAR_3->id,
                          VAR_6->main_exec_status.status, VAR_4);
                FUNC_1();
        }
}
