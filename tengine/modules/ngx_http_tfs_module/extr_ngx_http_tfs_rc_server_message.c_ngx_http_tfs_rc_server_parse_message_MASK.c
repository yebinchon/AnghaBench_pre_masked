
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ code; } ;
struct TYPE_8__ {TYPE_1__ action; } ;
struct TYPE_9__ {TYPE_2__ r_ctx; } ;
typedef TYPE_3__ ngx_http_tfs_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_1)
{
    if (VAR_1->r_ctx.action.code == VAR_0) {
        return FUNC_0(VAR_1);
    }

    return FUNC_1(VAR_1);
}
