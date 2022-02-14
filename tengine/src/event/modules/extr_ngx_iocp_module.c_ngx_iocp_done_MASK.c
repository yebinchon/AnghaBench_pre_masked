
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_3)
{
    if (FUNC_0(VAR_1) == -1) {
        FUNC_1(VAR_0, VAR_3->log, VAR_2,
                      "iocp CloseHandle() failed");
    }

    VAR_1 = ((void*)0);
}
