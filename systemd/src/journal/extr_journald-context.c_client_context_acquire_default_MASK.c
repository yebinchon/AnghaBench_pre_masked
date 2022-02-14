
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ucred {int pid; int gid; int uid; } ;
struct TYPE_5__ {int pid1_context; int my_context; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,struct ucred*,int *,int ,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;

void FUNC_6(Server *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);




        if (!VAR_0->my_context) {
                struct ucred VAR_2 = {
                        .pid = FUNC_3(),
                        .uid = FUNC_4(),
                        .gid = FUNC_2(),
                };

                VAR_1 = FUNC_1(VAR_0, VAR_2.pid, &VAR_2, ((void*)0), 0, ((void*)0), &VAR_0->my_context);
                if (VAR_1 < 0)
                        FUNC_5(VAR_1, "Failed to acquire our own context, ignoring: %m");
        }

        if (!VAR_0->pid1_context) {

                VAR_1 = FUNC_1(VAR_0, 1, ((void*)0), ((void*)0), 0, ((void*)0), &VAR_0->pid1_context);
                if (VAR_1 < 0)
                        FUNC_5(VAR_1, "Failed to acquire PID1's context, ignoring: %m");

        }
}
