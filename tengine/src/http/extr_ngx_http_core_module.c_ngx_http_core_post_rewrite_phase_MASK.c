
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {scalar_t__ phase_handler; scalar_t__ uri_changes; int loc_conf; int uri; TYPE_1__* connection; int uri_changed; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ next; } ;
typedef TYPE_4__ ngx_http_phase_handler_t ;
struct TYPE_15__ {TYPE_2__* ctx; } ;
typedef TYPE_5__ ngx_http_core_srv_conf_t ;
struct TYPE_12__ {int loc_conf; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,int *) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_6,
    ngx_http_phase_handler_t *VAR_7)
{
    ngx_http_core_srv_conf_t *VAR_8;

    FUNC_2(VAR_2, VAR_6->connection->log, 0,
                   "post rewrite phase: %ui", VAR_6->phase_handler);

    if (!VAR_6->uri_changed) {
        VAR_6->phase_handler++;
        return VAR_0;
    }

    FUNC_2(VAR_2, VAR_6->connection->log, 0,
                   "uri changes: %d", VAR_6->uri_changes);
    VAR_6->uri_changes--;

    if (VAR_6->uri_changes == 0) {
        FUNC_3(VAR_3, VAR_6->connection->log, 0,
                      "rewrite or internal redirection cycle "
                      "while processing \"%V\"", &VAR_6->uri);

        FUNC_0(VAR_6, VAR_1);
        return VAR_4;
    }

    VAR_6->phase_handler = VAR_7->next;

    VAR_8 = FUNC_1(VAR_6, VAR_5);
    VAR_6->loc_conf = VAR_8->ctx->loc_conf;

    return VAR_0;
}
