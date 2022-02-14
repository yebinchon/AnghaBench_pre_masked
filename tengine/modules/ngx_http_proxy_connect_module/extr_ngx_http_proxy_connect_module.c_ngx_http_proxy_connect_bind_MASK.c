
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_18__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {int transparent; TYPE_14__* addr; TYPE_4__* value; } ;
typedef TYPE_3__ ngx_http_proxy_connect_address_t ;
struct TYPE_20__ {scalar_t__ lengths; } ;
typedef TYPE_4__ ngx_http_complex_value_t ;
struct TYPE_21__ {TYPE_4__* complex_value; TYPE_2__* value; TYPE_6__* cf; } ;
typedef TYPE_5__ ngx_http_compile_complex_value_t ;
struct TYPE_22__ {TYPE_1__* args; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_23__ {int offset; } ;
typedef TYPE_7__ ngx_command_t ;
typedef int ngx_addr_t ;
struct TYPE_17__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_16__ {TYPE_2__ name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_3__* VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,TYPE_14__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 void* FUNC_4 (int ,int) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;

char *
FUNC_7(ngx_conf_t *VAR_4, ngx_command_t *VAR_5,
    void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ngx_int_t VAR_8;
    ngx_str_t *VAR_9;
    ngx_http_complex_value_t VAR_10;
    ngx_http_proxy_connect_address_t **VAR_11, *VAR_12;
    ngx_http_compile_complex_value_t VAR_13;

    VAR_11 = (ngx_http_proxy_connect_address_t **) (VAR_7 + VAR_5->offset);

    if (*VAR_11 != VAR_2) {
        return "is duplicate";
    }

    VAR_9 = VAR_4->args->elts;

    if (VAR_4->args->nelts == 2 && FUNC_6(VAR_9[1].data, "off") == 0) {
        *VAR_11 = ((void*)0);
        return VAR_1;
    }

    FUNC_3(&VAR_13, sizeof(ngx_http_compile_complex_value_t));

    VAR_13.cf = VAR_4;
    VAR_13.value = &VAR_9[1];
    VAR_13.complex_value = &VAR_10;

    if (FUNC_2(&VAR_13) != 128) {
        return VAR_0;
    }

    VAR_12 = FUNC_5(VAR_4->pool, sizeof(ngx_http_proxy_connect_address_t));
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_11 = VAR_12;

    if (VAR_10.lengths) {
        VAR_12->value = FUNC_4(VAR_4->pool, sizeof(ngx_http_complex_value_t));
        if (VAR_12->value == ((void*)0)) {
            return VAR_0;
        }

        *VAR_12->value = VAR_10;

    } else {
        VAR_12->addr = FUNC_4(VAR_4->pool, sizeof(ngx_addr_t));
        if (VAR_12->addr == ((void*)0)) {
            return VAR_0;
        }

        VAR_8 = FUNC_0(VAR_4->pool, VAR_12->addr, VAR_9[1].data,
                                   VAR_9[1].len);

        switch (VAR_8) {
        case 128:
            VAR_12->addr->name = VAR_9[1];
            break;

        case 129:
            FUNC_1(VAR_3, VAR_4, 0,
                               "invalid address \"%V\"", &VAR_9[1]);


        default:
            return VAR_0;
        }
    }

    if (VAR_4->args->nelts > 2) {
        if (FUNC_6(VAR_9[2].data, "transparent") == 0) {



            FUNC_1(VAR_3, VAR_4, 0,
                               "transparent proxying is not supported "
                               "on this platform, ignored");

        } else {
            FUNC_1(VAR_3, VAR_4, 0,
                               "invalid parameter \"%V\"", &VAR_9[2]);
            return VAR_0;
        }
    }

    return VAR_1;
}
