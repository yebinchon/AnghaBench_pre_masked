
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int code; } ;
struct TYPE_8__ {TYPE_1__ action; } ;
struct TYPE_9__ {TYPE_2__ r_ctx; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
typedef int ngx_chain_t ;



 int * FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*) ;

ngx_chain_t *
FUNC_2(ngx_http_tfs_t *VAR_0)
{
    uint16_t VAR_1;

    VAR_1 = VAR_0->r_ctx.action.code;

    switch(VAR_1) {
    case 128:
        return FUNC_0(VAR_0);
    default:
        return FUNC_1(VAR_0);
    }
}
