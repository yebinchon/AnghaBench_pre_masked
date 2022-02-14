
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_21__ {int data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {int transparent; TYPE_11__* addr; TYPE_5__* value; } ;
typedef TYPE_4__ ngx_http_upstream_local_t ;
struct TYPE_23__ {scalar_t__ lengths; } ;
typedef TYPE_5__ ngx_http_complex_value_t ;
struct TYPE_24__ {TYPE_5__* complex_value; TYPE_3__* value; TYPE_8__* cf; } ;
typedef TYPE_6__ ngx_http_compile_complex_value_t ;
struct TYPE_25__ {int transparent; } ;
typedef TYPE_7__ ngx_core_conf_t ;
struct TYPE_26__ {TYPE_2__* cycle; TYPE_1__* args; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_27__ {int offset; } ;
typedef TYPE_9__ ngx_command_t ;
typedef int ngx_addr_t ;
struct TYPE_20__ {int conf_ctx; } ;
struct TYPE_19__ {int nelts; TYPE_3__* elts; } ;
struct TYPE_18__ {TYPE_3__ name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_4__* VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,TYPE_8__*,int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_11__*,int ,int ) ;
 TYPE_4__* FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;

char *
FUNC_8(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    char *VAR_8 = VAR_7;

    ngx_int_t VAR_9;
    ngx_str_t *VAR_10;
    ngx_http_complex_value_t VAR_11;
    ngx_http_upstream_local_t **VAR_12, *VAR_13;
    ngx_http_compile_complex_value_t VAR_14;

    VAR_12 = (ngx_http_upstream_local_t **) (VAR_8 + VAR_6->offset);

    if (*VAR_12 != VAR_2) {
        return "is duplicate";
    }

    VAR_10 = VAR_5->args->elts;

    if (VAR_5->args->nelts == 2 && FUNC_7(VAR_10[1].data, "off") == 0) {
        *VAR_12 = ((void*)0);
        return VAR_1;
    }

    FUNC_3(&VAR_14, sizeof(ngx_http_compile_complex_value_t));

    VAR_14.cf = VAR_5;
    VAR_14.value = &VAR_10[1];
    VAR_14.complex_value = &VAR_11;

    if (FUNC_2(&VAR_14) != 128) {
        return VAR_0;
    }

    VAR_13 = FUNC_6(VAR_5->pool, sizeof(ngx_http_upstream_local_t));
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_12 = VAR_13;

    if (VAR_11.lengths) {
        VAR_13->value = FUNC_4(VAR_5->pool, sizeof(ngx_http_complex_value_t));
        if (VAR_13->value == ((void*)0)) {
            return VAR_0;
        }

        *VAR_13->value = VAR_11;

    } else {
        VAR_13->addr = FUNC_4(VAR_5->pool, sizeof(ngx_addr_t));
        if (VAR_13->addr == ((void*)0)) {
            return VAR_0;
        }

        VAR_9 = FUNC_5(VAR_5->pool, VAR_13->addr, VAR_10[1].data,
                                 VAR_10[1].len);

        switch (VAR_9) {
        case 128:
            VAR_13->addr->name = VAR_10[1];
            break;

        case 129:
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid address \"%V\"", &VAR_10[1]);


        default:
            return VAR_0;
        }
    }

    if (VAR_5->args->nelts > 2) {
        if (FUNC_7(VAR_10[2].data, "transparent") == 0) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "transparent proxying is not supported "
                               "on this platform, ignored");

        } else {
            FUNC_0(VAR_3, VAR_5, 0,
                               "invalid parameter \"%V\"", &VAR_10[2]);
            return VAR_0;
        }
    }

    return VAR_1;
}
