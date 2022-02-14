
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int version; } ;
struct TYPE_7__ {TYPE_1__ r_ctx; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_peer_connection_t ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;

ngx_http_tfs_peer_connection_t *
FUNC_2(ngx_http_tfs_t *VAR_0)
{
    if (VAR_0->r_ctx.version == 1) {
        return FUNC_0(VAR_0);
    }

    if (VAR_0->r_ctx.version == 2) {
        return FUNC_1(VAR_0);
    }

    return ((void*)0);
}
