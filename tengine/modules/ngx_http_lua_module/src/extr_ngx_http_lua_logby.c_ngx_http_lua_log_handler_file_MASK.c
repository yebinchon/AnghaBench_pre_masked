
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int log_src_key; int log_src; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
struct TYPE_12__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int ) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*) ;
 int VAR_2 ;
 int * FUNC_5 (int ,int ,int ) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3)
{
    lua_State *VAR_4;
    ngx_int_t VAR_5;
    u_char *VAR_6;
    ngx_http_lua_loc_conf_t *VAR_7;
    ngx_str_t VAR_8;

    VAR_7 = FUNC_1(VAR_3, VAR_2);

    if (FUNC_0(VAR_3, &VAR_7->log_src, &VAR_8) != VAR_1) {
        return VAR_0;
    }

    VAR_6 = FUNC_5(VAR_3->pool, VAR_8.data,
                                           VAR_8.len);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = FUNC_3(VAR_3, ((void*)0));


    VAR_5 = FUNC_2(VAR_3->connection->log, VAR_4, VAR_6,
                                     VAR_7->log_src_key);
    if (VAR_5 != VAR_1) {
        return VAR_0;
    }

    return FUNC_4(VAR_4, VAR_3);
}
