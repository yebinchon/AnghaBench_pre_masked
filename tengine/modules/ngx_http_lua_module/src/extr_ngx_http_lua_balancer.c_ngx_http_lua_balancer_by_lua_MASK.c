
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_17__ {char* data; int len; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_16__ {scalar_t__ init_upstream; } ;
struct TYPE_18__ {int flags; TYPE_3__ peer; } ;
typedef TYPE_5__ ngx_http_upstream_srv_conf_t ;
struct TYPE_15__ {char* src_key; TYPE_4__ src; scalar_t__ handler; } ;
struct TYPE_19__ {TYPE_2__ balancer; } ;
typedef TYPE_6__ ngx_http_lua_srv_conf_t ;
typedef scalar_t__ ngx_http_lua_srv_conf_handler_pt ;
struct TYPE_20__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_21__ {int * post; } ;
typedef TYPE_8__ ngx_command_t ;
struct TYPE_14__ {TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*) ;
 char* FUNC_2 (char*,char*,int) ;
 TYPE_5__* FUNC_3 (TYPE_7__*,int ) ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_4 (char*,char*,int ) ;
 char* FUNC_5 (int ,char*,int ) ;
 int VAR_16 ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;

char *
FUNC_8(ngx_conf_t *VAR_17, ngx_command_t *VAR_18,
    void *VAR_19)
{
    u_char *VAR_20;
    u_char *VAR_21;
    ngx_str_t *VAR_22;
    ngx_http_lua_srv_conf_t *VAR_23 = VAR_19;

    ngx_http_upstream_srv_conf_t *VAR_24;

    FUNC_0("enter");


    if (VAR_18->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_23->balancer.handler) {
        return "is duplicate";
    }

    VAR_22 = VAR_17->args->elts;

    VAR_23->balancer.handler = (ngx_http_lua_srv_conf_handler_pt) VAR_18->post;

    if (VAR_18->post == VAR_14) {


        VAR_21 = FUNC_5(VAR_17->pool, VAR_22[1].data,
                                        VAR_22[1].len);
        if (VAR_21 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->balancer.src.data = VAR_21;
        VAR_23->balancer.src.len = FUNC_7(VAR_21);

        VAR_20 = FUNC_6(VAR_17->pool, VAR_2 + 1);
        if (VAR_20 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->balancer.src_key = VAR_20;

        VAR_20 = FUNC_2(VAR_20, VAR_3, VAR_4);
        VAR_20 = FUNC_4(VAR_20, VAR_22[1].data, VAR_22[1].len);
        *VAR_20 = '\0';

    } else {


        VAR_23->balancer.src = VAR_22[1];

        VAR_20 = FUNC_6(VAR_17->pool,
                       sizeof("balancer_by_lua") + VAR_5);
        if (VAR_20 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->balancer.src_key = VAR_20;

        VAR_20 = FUNC_2(VAR_20, "balancer_by_lua", sizeof("balancer_by_lua") - 1);
        VAR_20 = FUNC_2(VAR_20, VAR_6, VAR_7);
        VAR_20 = FUNC_4(VAR_20, VAR_22[1].data, VAR_22[1].len);
        *VAR_20 = '\0';
    }

    VAR_24 = FUNC_3(VAR_17, VAR_16);

    if (VAR_24->peer.init_upstream) {
        FUNC_1(VAR_13, VAR_17, 0,
                           "load balancing method redefined");
    }

    VAR_24->peer.init_upstream = VAR_15;

    VAR_24->flags = VAR_8
                  |VAR_12
                  |VAR_11
                  |VAR_10
                  |VAR_9;

    return VAR_1;
}
