
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {scalar_t__ code; } ;
struct TYPE_7__ {TYPE_1__ action; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_2__ r_ctx; int log; int pool; int dedup_ctx; } ;
typedef TYPE_3__ ngx_http_tfs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;

ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_6)
{
    ngx_int_t VAR_7;

    VAR_7 = FUNC_0(&VAR_6->dedup_ctx, VAR_6->pool, VAR_6->log);
    if (VAR_7 == VAR_1) {
        if (VAR_6->r_ctx.action.code == VAR_2
            && VAR_6->state == VAR_4)
        {

            VAR_6->state = VAR_3;
            VAR_7 = VAR_0;

        } else {

            VAR_7 = VAR_5;
        }

        FUNC_1(VAR_6, VAR_7);
    }

    return VAR_5;
}
