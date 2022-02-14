
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


struct TYPE_19__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_18__ {int complex; } ;
struct TYPE_20__ {int replacement; int handler; TYPE_2__ pattern; } ;
typedef TYPE_4__ ngx_http_proxy_rewrite_t ;
struct TYPE_21__ {int * cookie_domains; } ;
typedef TYPE_5__ ngx_http_proxy_loc_conf_t ;
struct TYPE_22__ {int * complex_value; TYPE_3__* value; TYPE_7__* cf; } ;
typedef TYPE_6__ ngx_http_compile_complex_value_t ;
struct TYPE_23__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_6__*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_proxy_loc_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10;
    ngx_http_proxy_rewrite_t *VAR_11;
    ngx_http_compile_complex_value_t VAR_12;

    if (VAR_9->cookie_domains == ((void*)0)) {
        return VAR_1;
    }

    VAR_10 = VAR_6->args->elts;

    if (VAR_6->args->nelts == 2) {

        if (FUNC_6(VAR_10[1].data, "off") == 0) {
            VAR_9->cookie_domains = ((void*)0);
            return VAR_1;
        }

        FUNC_2(VAR_3, VAR_6, 0,
                           "invalid parameter \"%V\"", &VAR_10[1]);
        return VAR_0;
    }

    if (VAR_9->cookie_domains == VAR_2) {
        VAR_9->cookie_domains = FUNC_0(VAR_6->pool, 1,
                                     sizeof(ngx_http_proxy_rewrite_t));
        if (VAR_9->cookie_domains == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_11 = FUNC_1(VAR_9->cookie_domains);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_10[1].data[0] == '~') {
        VAR_10[1].len--;
        VAR_10[1].data++;

        if (FUNC_4(VAR_6, VAR_11, &VAR_10[1], 1) != VAR_4) {
            return VAR_0;
        }

    } else {

        if (VAR_10[1].data[0] == '.') {
            VAR_10[1].len--;
            VAR_10[1].data++;
        }

        FUNC_5(&VAR_12, sizeof(ngx_http_compile_complex_value_t));

        VAR_12.cf = VAR_6;
        VAR_12.value = &VAR_10[1];
        VAR_12.complex_value = &VAR_11->pattern.complex;

        if (FUNC_3(&VAR_12) != VAR_4) {
            return VAR_0;
        }

        VAR_11->handler = VAR_5;

        if (VAR_10[2].data[0] == '.') {
            VAR_10[2].len--;
            VAR_10[2].data++;
        }
    }

    FUNC_5(&VAR_12, sizeof(ngx_http_compile_complex_value_t));

    VAR_12.cf = VAR_6;
    VAR_12.value = &VAR_10[2];
    VAR_12.complex_value = &VAR_11->replacement;

    if (FUNC_3(&VAR_12) != VAR_4) {
        return VAR_0;
    }

    return VAR_1;
}
