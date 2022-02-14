
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_8__ {scalar_t__ len; int data; } ;
struct TYPE_10__ {TYPE_2__ lua_cpath; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;

char *
FUNC_1(ngx_conf_t *VAR_1, ngx_command_t *VAR_2, void *VAR_3)
{
    ngx_http_lua_main_conf_t *VAR_4 = VAR_3;
    ngx_str_t *VAR_5;

    if (VAR_4->lua_cpath.len != 0) {
        return "is duplicate";
    }

    FUNC_0("enter");

    VAR_5 = VAR_1->args->elts;

    VAR_4->lua_cpath.len = VAR_5[1].len;
    VAR_4->lua_cpath.data = VAR_5[1].data;

    return VAR_0;
}
