
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_http_v2_handler_pt ;
struct TYPE_14__ {TYPE_1__* stream; } ;
struct TYPE_16__ {TYPE_2__ state; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_17__ {TYPE_3__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_18__ {int client_header_timeout; } ;
typedef TYPE_6__ ngx_http_core_srv_conf_t ;
struct TYPE_19__ {int timer_set; } ;
typedef TYPE_7__ ngx_event_t ;
struct TYPE_15__ {TYPE_7__* read; } ;
struct TYPE_13__ {TYPE_5__* request; } ;


 int FUNC_0 (TYPE_7__*,int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ) ;
 int * FUNC_2 (TYPE_4__*,int *,int *,int ) ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_v2_connection_t *VAR_1, u_char *VAR_2,
    u_char *VAR_3, ngx_http_v2_handler_pt VAR_4)
{
    ngx_event_t *VAR_5;
    ngx_http_request_t *VAR_6;
    ngx_http_core_srv_conf_t *VAR_7;

    if (VAR_1->state.stream) {
        VAR_6 = VAR_1->state.stream->request;
        VAR_5 = VAR_6->connection->read;

        if (!VAR_5->timer_set) {
            VAR_7 = FUNC_1(VAR_6, VAR_0);
            FUNC_0(VAR_5, VAR_7->client_header_timeout);
        }
    }

    return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
