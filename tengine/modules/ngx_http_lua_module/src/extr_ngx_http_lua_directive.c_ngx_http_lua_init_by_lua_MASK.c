
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {TYPE_2__ init_src; scalar_t__ init_handler; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
typedef scalar_t__ ngx_http_lua_main_conf_handler_pt ;
struct TYPE_12__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_13__ {int * post; } ;
typedef TYPE_5__ ngx_command_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*) ;
 int * VAR_3 ;
 int * FUNC_2 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5,
    void *VAR_6)
{
    u_char *VAR_7;
    ngx_str_t *VAR_8;
    ngx_http_lua_main_conf_t *VAR_9 = VAR_6;

    FUNC_0("enter");


    if (VAR_5->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_9->init_handler) {
        return "is duplicate";
    }

    VAR_8 = VAR_4->args->elts;

    if (VAR_8[1].len == 0) {

        FUNC_1(VAR_2, VAR_4, 0,
                           "invalid location config: no runnable Lua code");
        return VAR_0;
    }

    VAR_9->init_handler = (ngx_http_lua_main_conf_handler_pt) VAR_5->post;

    if (VAR_5->post == VAR_3) {
        VAR_7 = FUNC_2(VAR_4->pool, VAR_8[1].data,
                                        VAR_8[1].len);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9->init_src.data = VAR_7;
        VAR_9->init_src.len = FUNC_3(VAR_7);

    } else {
        VAR_9->init_src = VAR_8[1];
    }

    return VAR_1;
}
