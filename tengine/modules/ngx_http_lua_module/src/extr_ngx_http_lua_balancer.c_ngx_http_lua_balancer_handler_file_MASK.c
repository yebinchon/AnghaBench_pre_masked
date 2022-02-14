
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {int src_key; TYPE_2__ src; } ;
struct TYPE_13__ {TYPE_3__ balancer; } ;
typedef TYPE_5__ ngx_http_lua_srv_conf_t ;
typedef int lua_State ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_1,
    ngx_http_lua_srv_conf_t *VAR_2, lua_State *VAR_3)
{
    ngx_int_t VAR_4;

    VAR_4 = FUNC_3(VAR_1->connection->log, VAR_3,
                                     VAR_2->balancer.src.data,
                                     VAR_2->balancer.src_key);
    if (VAR_4 != VAR_0) {
        return VAR_4;
    }


    FUNC_1(FUNC_0(VAR_3, -1));

    return FUNC_2(VAR_3, VAR_1);
}
