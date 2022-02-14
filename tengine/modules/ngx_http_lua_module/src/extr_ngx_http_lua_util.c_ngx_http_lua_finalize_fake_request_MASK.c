
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ngx_ssl_conn_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_5__* connection; TYPE_1__* main; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ exit_code; } ;
typedef TYPE_4__ ngx_http_lua_ssl_ctx_t ;
struct TYPE_16__ {TYPE_10__* write; TYPE_10__* read; TYPE_2__* ssl; TYPE_3__* data; int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_13__ {int * connection; } ;
struct TYPE_12__ {int count; } ;
struct TYPE_11__ {scalar_t__ delayed; scalar_t__ timer_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int,int ) ;
 TYPE_5__* FUNC_4 (int *) ;

void
FUNC_5(ngx_http_request_t *VAR_4, ngx_int_t VAR_5)
{
    ngx_connection_t *VAR_6;





    VAR_6 = VAR_4->connection;

    FUNC_3(VAR_3, VAR_6->log, 0,
                   "http lua finalize fake request: %d, a:%d, c:%d",
                   VAR_5, VAR_4 == VAR_6->data, VAR_4->main->count);

    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_4);
        return;
    }

    if (VAR_5 == VAR_1 || VAR_5 >= VAR_2) {
        FUNC_1(VAR_4);
        return;
    }

    if (VAR_6->read->timer_set) {
        FUNC_0(VAR_6->read);
    }

    if (VAR_6->write->timer_set) {
        VAR_6->write->delayed = 0;
        FUNC_0(VAR_6->write);
    }

    FUNC_1(VAR_4);
}
