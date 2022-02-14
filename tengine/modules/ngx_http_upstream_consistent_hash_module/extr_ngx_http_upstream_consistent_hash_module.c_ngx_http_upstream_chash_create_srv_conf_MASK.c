
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void ngx_http_upstream_chash_srv_conf_t ;
struct TYPE_3__ {int pool; } ;
typedef TYPE_1__ ngx_conf_t ;


 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void *
FUNC_1(ngx_conf_t *VAR_0)
{
    ngx_http_upstream_chash_srv_conf_t *VAR_1;

    VAR_1 = FUNC_0(VAR_0->pool, sizeof(ngx_http_upstream_chash_srv_conf_t));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    return VAR_1;
}
