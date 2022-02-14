
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int init; } ;
struct TYPE_17__ {TYPE_2__ peer; TYPE_1__* servers; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_18__ {TYPE_3__ host; } ;
typedef TYPE_5__ ngx_http_upstream_server_t ;
struct TYPE_19__ {scalar_t__ (* original_init_upstream ) (TYPE_7__*,TYPE_4__*) ;int enabled; int original_init_peer; } ;
typedef TYPE_6__ ngx_http_upstream_dynamic_srv_conf_t ;
struct TYPE_20__ {int log; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_14__ {size_t nelts; TYPE_5__* elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_6,
    ngx_http_upstream_srv_conf_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_http_upstream_dynamic_srv_conf_t *VAR_9;
    ngx_http_upstream_server_t *VAR_10;
    ngx_str_t VAR_11;

    FUNC_2(VAR_2, VAR_6->log, 0,
                   "init dynamic resolve");

    VAR_9 = FUNC_0(VAR_7,
                                          VAR_4);

    if (VAR_9->original_init_upstream(VAR_6, VAR_7) != VAR_3) {
        return VAR_1;
    }

    if (VAR_7->servers) {
        VAR_10 = VAR_7->servers->elts;

        for (VAR_8 = 0; VAR_8 < VAR_7->servers->nelts; VAR_8++) {
            VAR_11 = VAR_10[VAR_8].host;
            if (FUNC_1(VAR_11.data, VAR_11.len) == VAR_0) {
                break;
            }
        }

        if (VAR_8 == VAR_7->servers->nelts) {
            VAR_9->enabled = 0;

            return VAR_3;
        }
    }

    VAR_9->original_init_peer = VAR_7->peer.init;

    VAR_7->peer.init = VAR_5;

    VAR_9->enabled = 1;

    return VAR_3;
}
