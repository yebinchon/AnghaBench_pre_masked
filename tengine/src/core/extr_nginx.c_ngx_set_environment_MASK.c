
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {char* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_10__ {char** data; int handler; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_11__ {int log; int pool; int conf_ctx; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_13__ {size_t nelts; TYPE_1__* elts; } ;
struct TYPE_12__ {char** environment; TYPE_8__ env; } ;
typedef TYPE_4__ ngx_core_conf_t ;


 char** VAR_0 ;
 char** FUNC_0 (size_t,int ) ;
 TYPE_1__* FUNC_1 (TYPE_8__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 char** VAR_3 ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

char **
FUNC_6(ngx_cycle_t *VAR_4, ngx_uint_t *VAR_5)
{
    char **VAR_6, **VAR_7;
    ngx_str_t *VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_core_conf_t *VAR_11;
    ngx_pool_cleanup_t *VAR_12;

    VAR_11 = (ngx_core_conf_t *) FUNC_2(VAR_4->conf_ctx, VAR_2);

    if (VAR_5 == ((void*)0) && VAR_11->environment) {
        return VAR_11->environment;
    }

    VAR_8 = VAR_11->env.elts;

    for (VAR_9 = 0; VAR_9 < VAR_11->env.nelts; VAR_9++) {
        if (FUNC_4(VAR_8[VAR_9].data, "TZ") == 0
            || FUNC_5(VAR_8[VAR_9].data, "TZ=", 3) == 0)
        {
            goto tz_found;
        }
    }

    VAR_8 = FUNC_1(&VAR_11->env);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->len = 2;
    VAR_8->data = (u_char *) "TZ";

    VAR_8 = VAR_11->env.elts;

tz_found:

    VAR_10 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_11->env.nelts; VAR_9++) {

        if (VAR_8[VAR_9].data[VAR_8[VAR_9].len] == '=') {
            VAR_10++;
            continue;
        }

        for (VAR_6 = VAR_3; *VAR_6; VAR_6++) {

            if (FUNC_5(*VAR_6, VAR_8[VAR_9].data, VAR_8[VAR_9].len) == 0
                && (*VAR_6)[VAR_8[VAR_9].len] == '=')
            {
                VAR_10++;
                break;
            }
        }
    }

    if (VAR_5) {
        VAR_7 = FUNC_0((*VAR_5 + VAR_10 + 1) * sizeof(char *), VAR_4->log);
        if (VAR_7 == ((void*)0)) {
            return ((void*)0);
        }

        *VAR_5 = VAR_10;

    } else {
        VAR_12 = FUNC_3(VAR_4->pool, 0);
        if (VAR_12 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_7 = FUNC_0((VAR_10 + 1) * sizeof(char *), VAR_4->log);
        if (VAR_7 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_12->handler = VAR_1;
        VAR_12->data = VAR_7;
    }

    VAR_10 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_11->env.nelts; VAR_9++) {

        if (VAR_8[VAR_9].data[VAR_8[VAR_9].len] == '=') {
            VAR_7[VAR_10++] = (char *) VAR_8[VAR_9].data;
            continue;
        }

        for (VAR_6 = VAR_3; *VAR_6; VAR_6++) {

            if (FUNC_5(*VAR_6, VAR_8[VAR_9].data, VAR_8[VAR_9].len) == 0
                && (*VAR_6)[VAR_8[VAR_9].len] == '=')
            {
                VAR_7[VAR_10++] = *VAR_6;
                break;
            }
        }
    }

    VAR_7[VAR_10] = ((void*)0);

    if (VAR_5 == ((void*)0)) {
        VAR_11->environment = VAR_7;
        VAR_0 = VAR_7;
    }

    return VAR_7;
}
