
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int ngx_str_t ;
struct TYPE_22__ {int * srv_conf; } ;
typedef TYPE_5__ ngx_http_upstream_srv_conf_t ;
struct TYPE_21__ {scalar_t__ status_alive; } ;
struct TYPE_19__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_23__ {scalar_t__ port; scalar_t__ fall_count; scalar_t__ rise_count; scalar_t__ check_interval; scalar_t__ check_timeout; scalar_t__ check_keepalive_requests; TYPE_4__ code; TYPE_2__ send; TYPE_1__* fastcgi_params; TYPE_8__* check_type_conf; } ;
typedef TYPE_6__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_24__ {int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_20__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_25__ {scalar_t__ default_status_alive; TYPE_3__ default_send; } ;
typedef TYPE_8__ ngx_check_conf_t ;
struct TYPE_26__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_18__ {int nelts; int elts; } ;
struct TYPE_17__ {scalar_t__ data; scalar_t__ len; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_15__ VAR_5 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 TYPE_8__* FUNC_1 (int *) ;
 TYPE_9__* FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_7, void *VAR_8)
{
    ngx_str_t VAR_9;
    ngx_buf_t *VAR_10;
    ngx_check_conf_t *VAR_11;
    ngx_http_upstream_srv_conf_t *VAR_12 = VAR_8;
    ngx_http_upstream_check_srv_conf_t *VAR_13;

    if (VAR_12->srv_conf == ((void*)0)) {
        return VAR_1;
    }

    VAR_13 = FUNC_0(VAR_12, VAR_6);

    if (VAR_13->port == VAR_4) {
        VAR_13->port = 0;
    }

    if (VAR_13->fall_count == VAR_4) {
        VAR_13->fall_count = 2;
    }

    if (VAR_13->rise_count == VAR_4) {
        VAR_13->rise_count = 5;
    }

    if (VAR_13->check_interval == VAR_2) {
        VAR_13->check_interval = 0;
    }

    if (VAR_13->check_timeout == VAR_2) {
        VAR_13->check_timeout = 1000;
    }

    if (VAR_13->check_keepalive_requests == VAR_4) {
        VAR_13->check_keepalive_requests = 1;
    }

    if (VAR_13->check_type_conf == VAR_3) {
        VAR_13->check_type_conf = ((void*)0);
    }

    VAR_11 = VAR_13->check_type_conf;

    if (VAR_11) {
        if (VAR_13->send.len == 0) {
            FUNC_3(&VAR_9, "fastcgi");

            if (VAR_11 == FUNC_1(&VAR_9)) {

                if (VAR_13->fastcgi_params->nelts == 0) {
                    VAR_13->send.data = VAR_5.data;
                    VAR_13->send.len = VAR_5.len;

                } else {
                    VAR_10 = FUNC_2(
                            VAR_7->pool, VAR_13->fastcgi_params->elts,
                            VAR_13->fastcgi_params->nelts / 2);
                    if (VAR_10 == ((void*)0)) {
                        return VAR_0;
                    }

                    VAR_13->send.data = VAR_10->pos;
                    VAR_13->send.len = VAR_10->last - VAR_10->pos;
                }
            } else {
                VAR_13->send.data = VAR_11->default_send.data;
                VAR_13->send.len = VAR_11->default_send.len;
            }
        }


        if (VAR_13->code.status_alive == 0) {
            VAR_13->code.status_alive = VAR_11->default_status_alive;
        }
    }

    return VAR_1;
}
