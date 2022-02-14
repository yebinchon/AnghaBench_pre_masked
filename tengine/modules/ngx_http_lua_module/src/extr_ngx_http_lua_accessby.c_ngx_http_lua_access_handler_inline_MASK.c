
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_12__ {int len; int data; } ;
struct TYPE_13__ {TYPE_2__ value; } ;
struct TYPE_15__ {scalar_t__ access_chunkname; int access_src_key; TYPE_3__ access_src; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int ,char const*) ;
 int * FUNC_3 (TYPE_4__*,int *) ;
 int VAR_2 ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3)
{
    ngx_int_t VAR_4;
    lua_State *VAR_5;
    ngx_http_lua_loc_conf_t *VAR_6;

    VAR_6 = FUNC_0(VAR_3, VAR_2);

    VAR_5 = FUNC_3(VAR_3, ((void*)0));


    VAR_4 = FUNC_2(VAR_3->connection->log, VAR_5,
                                       VAR_6->access_src.value.data,
                                       VAR_6->access_src.value.len,
                                       VAR_6->access_src_key,
                                       (const char *) VAR_6->access_chunkname);

    if (VAR_4 != VAR_1) {
        return VAR_0;
    }

    return FUNC_1(VAR_5, VAR_3);
}
