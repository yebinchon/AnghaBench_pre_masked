
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debug_points; } ;
typedef TYPE_1__ ngx_core_conf_t ;
struct TYPE_4__ {int conf_ctx; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(void)
{
    ngx_core_conf_t *VAR_3;

    VAR_3 = (ngx_core_conf_t *) FUNC_1(VAR_2->conf_ctx,
                                           VAR_1);

    switch (VAR_3->debug_points) {

    case 128:
        FUNC_2(VAR_0);
        break;

    case 129:
        FUNC_0();
    }
}
