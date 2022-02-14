
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {scalar_t__ stdin_fd; scalar_t__ stdout_fd; scalar_t__ stderr_fd; int fd_store; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(Unit *VAR_0) {
        Service *VAR_1 = FUNC_0(VAR_0);

        FUNC_1(VAR_1);

        if (!VAR_1->fd_store && VAR_1->stdin_fd < 0 && VAR_1->stdout_fd < 0 && VAR_1->stderr_fd < 0)
                return;

        FUNC_2(VAR_0, "Releasing resources.");

        VAR_1->stdin_fd = FUNC_3(VAR_1->stdin_fd);
        VAR_1->stdout_fd = FUNC_3(VAR_1->stdout_fd);
        VAR_1->stderr_fd = FUNC_3(VAR_1->stderr_fd);

        FUNC_4(VAR_1);
}
