
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ master; } ;
typedef TYPE_1__ ngx_core_conf_t ;
struct TYPE_4__ {int conf_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_1(void)
{
    ngx_core_conf_t *VAR_8;
    if (VAR_7 == VAR_3) {
        VAR_8 = (ngx_core_conf_t *) FUNC_0(VAR_5->conf_ctx,
                                               VAR_4);

        if (VAR_8->master) {
            return VAR_1;
        }
    }

    return VAR_7;
}
