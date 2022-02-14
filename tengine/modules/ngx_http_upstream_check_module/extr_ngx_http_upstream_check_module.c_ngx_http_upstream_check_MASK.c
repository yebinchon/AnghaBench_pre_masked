
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_24__ {struct TYPE_24__* data; scalar_t__ len; } ;
typedef TYPE_5__ ngx_str_t ;
typedef void* ngx_msec_t ;
struct TYPE_22__ {scalar_t__ status_alive; } ;
struct TYPE_20__ {scalar_t__ len; int data; } ;
struct TYPE_25__ {size_t port; size_t fall_count; size_t rise_count; size_t default_down; size_t unique; TYPE_3__ code; TYPE_1__ send; TYPE_8__* check_type_conf; void* check_timeout; void* check_interval; } ;
typedef TYPE_6__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_26__ {TYPE_4__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_21__ {scalar_t__ len; int data; } ;
struct TYPE_27__ {scalar_t__ default_status_alive; TYPE_2__ default_send; } ;
typedef TYPE_8__ ngx_check_conf_t ;
struct TYPE_23__ {size_t nelts; TYPE_5__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_8__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,TYPE_5__*) ;
 TYPE_6__* FUNC_2 (TYPE_7__*,int ) ;
 void* FUNC_3 (TYPE_5__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*,char*,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_str_t *VAR_9, VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    ngx_msec_t VAR_17, VAR_18;
    ngx_check_conf_t *VAR_19;
    ngx_http_upstream_check_srv_conf_t *VAR_20;


    VAR_12 = 0;
    VAR_13 = 2;
    VAR_14 = 5;
    VAR_17 = 30000;
    VAR_18 = 1000;
    VAR_15 = 1;
    VAR_16 = 0;

    VAR_9 = VAR_6->args->elts;

    VAR_20 = FUNC_2(VAR_6,
                                              VAR_5);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_11 = 1; VAR_11 < VAR_6->args->nelts; VAR_11++) {

        if (FUNC_6(VAR_9[VAR_11].data, "type=", 5) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 5;
            VAR_10.data = VAR_9[VAR_11].data + 5;

            VAR_20->check_type_conf = FUNC_3(&VAR_10);

            if (VAR_20->check_type_conf == ((void*)0)) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "port=", 5) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 5;
            VAR_10.data = VAR_9[VAR_11].data + 5;

            VAR_12 = FUNC_0(VAR_10.data, VAR_10.len);
            if (VAR_12 == (ngx_uint_t) VAR_3 || VAR_12 == 0) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "interval=", 9) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 9;
            VAR_10.data = VAR_9[VAR_11].data + 9;

            VAR_17 = FUNC_0(VAR_10.data, VAR_10.len);
            if (VAR_17 == (ngx_msec_t) VAR_3 || VAR_17 == 0) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "timeout=", 8) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 8;
            VAR_10.data = VAR_9[VAR_11].data + 8;

            VAR_18 = FUNC_0(VAR_10.data, VAR_10.len);
            if (VAR_18 == (ngx_msec_t) VAR_3 || VAR_18 == 0) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "rise=", 5) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 5;
            VAR_10.data = VAR_9[VAR_11].data + 5;

            VAR_13 = FUNC_0(VAR_10.data, VAR_10.len);
            if (VAR_13 == (ngx_uint_t) VAR_3 || VAR_13 == 0) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "fall=", 5) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 5;
            VAR_10.data = VAR_9[VAR_11].data + 5;

            VAR_14 = FUNC_0(VAR_10.data, VAR_10.len);
            if (VAR_14 == (ngx_uint_t) VAR_3 || VAR_14 == 0) {
                goto invalid_check_parameter;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "default_down=", 13) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 13;
            VAR_10.data = VAR_9[VAR_11].data + 13;

            if (FUNC_5(VAR_10.data, (u_char *) "true") == 0) {
                VAR_15 = 1;
            } else if (FUNC_5(VAR_10.data, (u_char *) "false") == 0) {
                VAR_15 = 0;
            } else {
                FUNC_1(VAR_4, VAR_6, 0,
                                   "invalid value \"%s\", "
                                   "it must be \"true\" or \"false\"",
                                   VAR_9[VAR_11].data);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_6(VAR_9[VAR_11].data, "unique=", 7) == 0) {
            VAR_10.len = VAR_9[VAR_11].len - 7;
            VAR_10.data = VAR_9[VAR_11].data + 7;

            if (FUNC_5(VAR_10.data, (u_char *) "true") == 0) {
                VAR_16 = 1;
            } else if (FUNC_5(VAR_10.data, (u_char *) "false") == 0) {
                VAR_16 = 0;
            } else {
                FUNC_1(VAR_4, VAR_6, 0,
                                   "invalid value \"%s\", "
                                   "it must be \"true\" or \"false\"",
                                   VAR_9[VAR_11].data);
                return VAR_0;
            }

            continue;
        }

        goto invalid_check_parameter;
    }

    VAR_20->port = VAR_12;
    VAR_20->check_interval = VAR_17;
    VAR_20->check_timeout = VAR_18;
    VAR_20->fall_count = VAR_14;
    VAR_20->rise_count = VAR_13;
    VAR_20->default_down = VAR_15;
    VAR_20->unique = VAR_16;

    if (VAR_20->check_type_conf == VAR_2) {
        FUNC_4(&VAR_10, "tcp");
        VAR_20->check_type_conf = FUNC_3(&VAR_10);
    }

    VAR_19 = VAR_20->check_type_conf;

    if (VAR_20->send.len == 0) {
        VAR_20->send.data = VAR_19->default_send.data;
        VAR_20->send.len = VAR_19->default_send.len;
    }

    if (VAR_20->code.status_alive == 0) {
        VAR_20->code.status_alive = VAR_19->default_status_alive;
    }

    return VAR_1;

invalid_check_parameter:

    FUNC_1(VAR_4, VAR_6, 0,
                       "invalid parameter \"%V\"", &VAR_9[VAR_11]);

    return VAR_0;
}
