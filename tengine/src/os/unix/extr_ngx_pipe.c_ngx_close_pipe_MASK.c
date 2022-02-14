
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; scalar_t__ configured; } ;
typedef TYPE_1__ ngx_open_pipe_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(ngx_open_pipe_t *VAR_1)
{





    if (VAR_1->pid != -1) {
        FUNC_0(VAR_1->pid, VAR_0);
    }

    VAR_1->configured = 0;
}
