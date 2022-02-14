
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ucred {int gid; int uid; } ;
struct TYPE_5__ {int gid; int pid; int uid; } ;
typedef TYPE_1__ ClientContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ClientContext *VAR_0, const struct ucred *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(FUNC_4(VAR_0->pid));


        if (VAR_1 && FUNC_5(VAR_1->uid))
                VAR_0->uid = VAR_1->uid;
        else
                (void) FUNC_2(VAR_0->pid, &VAR_0->uid);

        if (VAR_1 && FUNC_3(VAR_1->gid))
                VAR_0->gid = VAR_1->gid;
        else
                (void) FUNC_1(VAR_0->pid, &VAR_0->gid);
}
