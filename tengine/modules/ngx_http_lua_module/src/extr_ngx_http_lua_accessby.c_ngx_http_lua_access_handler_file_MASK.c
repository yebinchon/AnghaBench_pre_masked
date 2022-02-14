
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
struct TYPE_15__ {int access_src_key; int access_src; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
struct TYPE_12__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,TYPE_2__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int *,int ) ;
 int * FUNC_6 (TYPE_3__*,int *) ;
 int VAR_4 ;
 int * FUNC_7 (int ,int ,int ) ;

ngx_int_t
FUNC_8(ngx_http_request_t *VAR_5)
{
    u_char *VAR_6;
    ngx_int_t VAR_7;
    ngx_str_t VAR_8;
    lua_State *VAR_9;
    ngx_http_lua_loc_conf_t *VAR_10;

    VAR_10 = FUNC_2(VAR_5, VAR_4);


    if (FUNC_1(VAR_5, &VAR_10->access_src, &VAR_8) != VAR_3) {
        return VAR_0;
    }

    VAR_6 = FUNC_7(VAR_5->pool, VAR_8.data,
                                           VAR_8.len);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = FUNC_6(VAR_5, ((void*)0));


    VAR_7 = FUNC_5(VAR_5->connection->log, VAR_9, VAR_6,
                                     VAR_10->access_src_key);
    if (VAR_7 != VAR_3) {
        if (VAR_7 < VAR_2) {
            return VAR_1;
        }

        return VAR_7;
    }


    FUNC_4(FUNC_0(VAR_9, -1));

    return FUNC_3(VAR_9, VAR_5);
}
