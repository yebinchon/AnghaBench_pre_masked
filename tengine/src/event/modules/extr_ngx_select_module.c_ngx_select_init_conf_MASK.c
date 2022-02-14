
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ use; } ;
typedef TYPE_1__ ngx_event_conf_t ;
struct TYPE_7__ {scalar_t__ connection_n; int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {scalar_t__ ctx_index; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static char *
FUNC_2(ngx_cycle_t *VAR_6, void *VAR_7)
{
    ngx_event_conf_t *VAR_8;

    VAR_8 = FUNC_0(VAR_6->conf_ctx, VAR_4);

    if (VAR_8->use != VAR_5.ctx_index) {
        return VAR_2;
    }



    if (VAR_6->connection_n > VAR_0) {
        FUNC_1(VAR_3, VAR_6->log, 0,
                      "the maximum number of files "
                      "supported by select() is %ud", VAR_0);
        return VAR_1;
    }

    return VAR_2;
}
