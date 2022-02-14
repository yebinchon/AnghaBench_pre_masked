
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int num_per_block; scalar_t__ used; scalar_t__ total; scalar_t__ cur_epoch; int free_queue; TYPE_2__* lmcf; } ;
typedef TYPE_1__ ngx_http_lua_sema_mm_t ;
struct TYPE_8__ {TYPE_1__* sema_mm; } ;
typedef TYPE_2__ ngx_http_lua_main_conf_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

ngx_int_t
FUNC_2(ngx_conf_t *VAR_2, ngx_http_lua_main_conf_t *VAR_3)
{
    ngx_http_lua_sema_mm_t *VAR_4;

    VAR_4 = FUNC_0(VAR_2->pool, sizeof(ngx_http_lua_sema_mm_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->sema_mm = VAR_4;
    VAR_4->lmcf = VAR_3;

    FUNC_1(&VAR_4->free_queue);
    VAR_4->cur_epoch = 0;
    VAR_4->total = 0;
    VAR_4->used = 0;




    VAR_4->num_per_block = 4095;

    return VAR_1;
}
