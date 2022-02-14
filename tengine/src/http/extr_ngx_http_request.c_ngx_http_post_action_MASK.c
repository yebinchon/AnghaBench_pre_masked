
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_15__ {int post_action; scalar_t__ uri_changes; int header_only; int read_event_handler; int http_version; TYPE_2__* main; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {char* data; } ;
struct TYPE_16__ {TYPE_5__ post_action; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {int count; } ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7;

    VAR_7 = FUNC_0(VAR_6, VAR_5);

    if (VAR_7->post_action.data == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_6->post_action && VAR_6->uri_changes == 0) {
        return VAR_0;
    }

    FUNC_3(VAR_2, VAR_6->connection->log, 0,
                   "post action: \"%V\"", &VAR_7->post_action);

    VAR_6->main->count--;

    VAR_6->http_version = VAR_1;
    VAR_6->header_only = 1;
    VAR_6->post_action = 1;

    VAR_6->read_event_handler = VAR_4;

    if (VAR_7->post_action.data[0] == '/') {
        FUNC_1(VAR_6, &VAR_7->post_action, ((void*)0));

    } else {
        FUNC_2(VAR_6, &VAR_7->post_action);
    }

    return VAR_3;
}
