
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_4(ngx_cycle_t *VAR_8)
{
    if (FUNC_0(VAR_1) == -1) {
        FUNC_3(VAR_0, VAR_8->log, VAR_5,
                      "epoll close() failed");
    }

    VAR_1 = -1;
    FUNC_2(VAR_2);

    VAR_2 = ((void*)0);
    VAR_3 = 0;
}
