
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_15__ {int * data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {scalar_t__ init_upstream; } ;
struct TYPE_16__ {TYPE_1__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_17__ {int fallback; scalar_t__ fail_timeout; scalar_t__ original_init_upstream; } ;
typedef TYPE_5__ ngx_http_upstream_dynamic_srv_conf_t ;
struct TYPE_18__ {TYPE_2__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_6__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_http_upstream_srv_conf_t *VAR_12;
    ngx_http_upstream_dynamic_srv_conf_t *VAR_13;
    ngx_str_t *VAR_14, VAR_15;
    ngx_uint_t VAR_16;
    time_t VAR_17;
    ngx_int_t VAR_18;

    VAR_12 = FUNC_0(VAR_9, VAR_8);

    VAR_13 = FUNC_1(VAR_12,
                                          VAR_5);

    if (VAR_13->original_init_upstream) {
        return "is duplicate";
    }

    VAR_13->original_init_upstream = VAR_12->peer.init_upstream
                                  ? VAR_12->peer.init_upstream
                                  : VAR_7;

    VAR_12->peer.init_upstream = VAR_6;



    VAR_14 = VAR_9->args->elts;

    for (VAR_16 = 1; VAR_16 < VAR_9->args->nelts; VAR_16++) {

        if (FUNC_3(VAR_14[VAR_16].data, "fail_timeout=", 13) == 0) {

            VAR_15.len = VAR_14[VAR_16].len - 13;
            VAR_15.data = &VAR_14[VAR_16].data[13];

            VAR_17 = FUNC_2(&VAR_15, 1);

            if (VAR_17 == (time_t) VAR_1) {
                return "invalid fail_timeout";
            }

            VAR_13->fail_timeout = VAR_17;

            continue;
        }

        if (FUNC_3(VAR_14[VAR_16].data, "fallback=", 9) == 0) {

            VAR_15.len = VAR_14[VAR_16].len - 9;
            VAR_15.data = &VAR_14[VAR_16].data[9];

            if (FUNC_3(VAR_15.data, "next", 4) == 0) {
                VAR_18 = VAR_2;
            } else if (FUNC_3(VAR_15.data, "stale", 5) == 0) {
                VAR_18 = VAR_4;
            } else if (FUNC_3(VAR_15.data, "shutdown", 8) == 0) {
                VAR_18 = VAR_3;
            } else {
                return "invalid fallback action";
            }

            VAR_13->fallback = VAR_18;

            continue;
        }
    }

    return VAR_0;
}
