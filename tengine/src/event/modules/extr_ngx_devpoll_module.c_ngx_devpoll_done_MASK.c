
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ ngx_cycle_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_cycle_t *VAR_9)
{
    if (FUNC_0(VAR_3) == -1) {
        FUNC_2(VAR_0, VAR_9->log, VAR_8,
                      "close(/dev/poll) failed");
    }

    VAR_3 = -1;

    FUNC_1(VAR_2);
    FUNC_1(VAR_4);
    FUNC_1(VAR_1);

    VAR_2 = ((void*)0);
    VAR_4 = ((void*)0);
    VAR_1 = ((void*)0);
    VAR_5 = 0;
    VAR_6 = 0;
    VAR_7 = 0;
}
