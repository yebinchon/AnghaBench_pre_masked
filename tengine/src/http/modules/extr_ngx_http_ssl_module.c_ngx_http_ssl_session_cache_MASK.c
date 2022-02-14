
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_13__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ builtin_session_cache; TYPE_5__* shm_zone; } ;
typedef TYPE_3__ ngx_http_ssl_srv_conf_t ;
struct TYPE_15__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {int init; } ;
struct TYPE_12__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int ,TYPE_4__*,int ,char*,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,TYPE_2__*,scalar_t__,int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_12, ngx_command_t *VAR_13, void *VAR_14)
{
    ngx_http_ssl_srv_conf_t *VAR_15 = VAR_14;

    size_t VAR_16;
    ngx_str_t *VAR_17, VAR_18, VAR_19;
    ngx_int_t VAR_20;
    ngx_uint_t VAR_21, VAR_22;

    VAR_17 = VAR_12->args->elts;

    for (VAR_21 = 1; VAR_21 < VAR_12->args->nelts; VAR_21++) {

        if (FUNC_4(VAR_17[VAR_21].data, "off") == 0) {
            VAR_15->builtin_session_cache = VAR_8;
            continue;
        }

        if (FUNC_4(VAR_17[VAR_21].data, "none") == 0) {
            VAR_15->builtin_session_cache = VAR_6;
            continue;
        }

        if (FUNC_4(VAR_17[VAR_21].data, "builtin") == 0) {
            VAR_15->builtin_session_cache = VAR_5;
            continue;
        }

        if (VAR_17[VAR_21].len > sizeof("builtin:") - 1
            && FUNC_5(VAR_17[VAR_21].data, "builtin:", sizeof("builtin:") - 1)
               == 0)
        {
            VAR_20 = FUNC_0(VAR_17[VAR_21].data + sizeof("builtin:") - 1,
                         VAR_17[VAR_21].len - (sizeof("builtin:") - 1));

            if (VAR_20 == VAR_3) {
                goto invalid;
            }

            VAR_15->builtin_session_cache = VAR_20;

            continue;
        }

        if (VAR_17[VAR_21].len > sizeof("shared:") - 1
            && FUNC_5(VAR_17[VAR_21].data, "shared:", sizeof("shared:") - 1)
               == 0)
        {
            VAR_16 = 0;

            for (VAR_22 = sizeof("shared:") - 1; VAR_22 < VAR_17[VAR_21].len; VAR_22++) {
                if (VAR_17[VAR_21].data[VAR_22] == ':') {
                    break;
                }

                VAR_16++;
            }

            if (VAR_16 == 0) {
                goto invalid;
            }

            VAR_18.len = VAR_16;
            VAR_18.data = VAR_17[VAR_21].data + sizeof("shared:") - 1;

            VAR_19.len = VAR_17[VAR_21].len - VAR_22 - 1;
            VAR_19.data = VAR_18.data + VAR_16 + 1;

            VAR_20 = FUNC_2(&VAR_19);

            if (VAR_20 == VAR_3) {
                goto invalid;
            }

            if (VAR_20 < (ngx_int_t) (8 * VAR_10)) {
                FUNC_1(VAR_4, VAR_12, 0,
                                   "session cache \"%V\" is too small",
                                   &VAR_17[VAR_21]);

                return VAR_0;
            }

            VAR_15->shm_zone = FUNC_3(VAR_12, &VAR_18, VAR_20,
                                                   &VAR_9);
            if (VAR_15->shm_zone == ((void*)0)) {
                return VAR_0;
            }

            VAR_15->shm_zone->init = VAR_11;

            continue;
        }

        goto invalid;
    }

    if (VAR_15->shm_zone && VAR_15->builtin_session_cache == VAR_2) {
        VAR_15->builtin_session_cache = VAR_7;
    }

    return VAR_1;

invalid:

    FUNC_1(VAR_4, VAR_12, 0,
                       "invalid session cache \"%V\"", &VAR_17[VAR_21]);

    return VAR_0;
}
