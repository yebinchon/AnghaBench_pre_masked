
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_16__ {TYPE_4__* data; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int * user_defined; } ;
typedef TYPE_4__ ngx_http_reqstat_ctx_t ;
struct TYPE_18__ {int * user_defined_str; } ;
typedef TYPE_5__ ngx_http_reqstat_conf_t ;
struct TYPE_19__ {TYPE_1__* args; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_2__*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (TYPE_6__*,TYPE_2__*,int ,int *) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_command_t *VAR_7,
    void *VAR_8)
{
    ngx_int_t *VAR_9;
    ngx_str_t *VAR_10, *VAR_11;
    ngx_uint_t VAR_12;
    ngx_shm_zone_t *VAR_13;
    ngx_http_reqstat_ctx_t *VAR_14;
    ngx_http_reqstat_conf_t *VAR_15;

    VAR_15 = VAR_8;
    VAR_10 = VAR_6->args->elts;

    VAR_13 = FUNC_4(VAR_6, &VAR_10[1], 0,
                                     &VAR_5);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_13->data == ((void*)0)) {
        FUNC_2(VAR_4, VAR_6, 0,
                           "zone \"%V\" should be defined first",
                           &VAR_10[1]);
        return VAR_0;
    }

    VAR_14 = VAR_13->data;

    if (VAR_14->user_defined != ((void*)0)) {
        return "is duplicate";
    }

    if (VAR_6->args->nelts > VAR_3 + 2) {
        FUNC_2(VAR_4, VAR_6, 0,
                           "too many user defined variables");
        return VAR_0;
    }

    VAR_14->user_defined = FUNC_0(VAR_6->pool, VAR_6->args->nelts - 2,
                                         sizeof(ngx_int_t));
    if (VAR_14->user_defined == ((void*)0)) {
        return VAR_0;
    }

    VAR_15->user_defined_str = FUNC_0(VAR_6->pool, VAR_6->args->nelts - 2,
                                              sizeof(ngx_str_t));
    if (VAR_15->user_defined_str == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_12 = 2; VAR_12 < VAR_6->args->nelts; VAR_12++) {
        if (VAR_10[VAR_12].data[0] == '$') {
            VAR_10[VAR_12].data++;
            VAR_10[VAR_12].len--;
        }

        VAR_11 = FUNC_1(VAR_15->user_defined_str);
        VAR_11->len = VAR_10[VAR_12].len;
        VAR_11->data = VAR_10[VAR_12].data;

        VAR_9 = FUNC_1(VAR_14->user_defined);
        *VAR_9 = FUNC_3(VAR_6, &VAR_10[VAR_12]);
        if (*VAR_9 == VAR_2) {
            FUNC_2(VAR_4, VAR_6, 0,
                               "failed to obtain variable \"%V\"",
                               &VAR_10[VAR_12]);
            return VAR_0;
        }
    }

    return VAR_1;
}
