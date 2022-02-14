
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int isold; int isinit; } ;
typedef TYPE_2__ ngx_http_lua_fake_shm_ctx_t ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_shm_zone_t *VAR_1, void *VAR_2)
{
    ngx_http_lua_fake_shm_ctx_t *VAR_3 = VAR_2;

    ngx_http_lua_fake_shm_ctx_t *VAR_4;

    VAR_4 = VAR_1->data;

    if (VAR_3) {
        VAR_4->isold = 1;
    }

    VAR_4->isinit = 1;

    return VAR_0;
}
