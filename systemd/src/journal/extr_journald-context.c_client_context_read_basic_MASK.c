
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int capeff; int pid; int cmdline; int exe; int comm; } ;
typedef TYPE_1__ ClientContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char**) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 scalar_t__ FUNC_5 (int ,char**) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ClientContext *VAR_1) {
        char *VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(FUNC_6(VAR_1->pid));

        if (FUNC_4(VAR_1->pid, &VAR_2) >= 0)
                FUNC_1(VAR_1->comm, VAR_2);

        if (FUNC_5(VAR_1->pid, &VAR_2) >= 0)
                FUNC_1(VAR_1->exe, VAR_2);

        if (FUNC_3(VAR_1->pid, VAR_0, 0, &VAR_2) >= 0)
                FUNC_1(VAR_1->cmdline, VAR_2);

        if (FUNC_2(VAR_1->pid, &VAR_2) >= 0)
                FUNC_1(VAR_1->capeff, VAR_2);
}
