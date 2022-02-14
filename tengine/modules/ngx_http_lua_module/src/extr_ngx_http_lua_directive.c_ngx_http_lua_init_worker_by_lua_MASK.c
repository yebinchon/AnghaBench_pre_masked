
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {int len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {TYPE_2__ init_worker_src; scalar_t__ init_worker_handler; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
typedef scalar_t__ ngx_http_lua_main_conf_handler_pt ;
struct TYPE_11__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_12__ {int * post; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_8__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 int * FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;

char *
FUNC_3(ngx_conf_t *VAR_3, ngx_command_t *VAR_4,
    void *VAR_5)
{
    u_char *VAR_6;
    ngx_str_t *VAR_7;
    ngx_http_lua_main_conf_t *VAR_8 = VAR_5;

    FUNC_0("enter");


    if (VAR_4->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_8->init_worker_handler) {
        return "is duplicate";
    }

    VAR_7 = VAR_3->args->elts;

    VAR_8->init_worker_handler = (ngx_http_lua_main_conf_handler_pt) VAR_4->post;

    if (VAR_4->post == VAR_2) {
        VAR_6 = FUNC_1(VAR_3->pool, VAR_7[1].data,
                                        VAR_7[1].len);
        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->init_worker_src.data = VAR_6;
        VAR_8->init_worker_src.len = FUNC_2(VAR_6);

    } else {
        VAR_8->init_worker_src = VAR_7[1];
    }

    return VAR_1;
}
