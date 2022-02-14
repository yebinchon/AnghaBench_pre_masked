
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n_on_console; int no_console_output; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int) ;

void FUNC_1(Manager *VAR_0) {

        FUNC_0(VAR_0->n_on_console > 0);
        VAR_0->n_on_console--;

        if (VAR_0->n_on_console == 0)
                VAR_0->no_console_output = 0;
}
