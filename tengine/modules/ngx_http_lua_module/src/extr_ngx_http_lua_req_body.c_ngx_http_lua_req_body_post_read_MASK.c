
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int read_event_handler; TYPE_2__* main; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ check_client_abort; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_18__ {int (* resume_handler ) (TYPE_3__*) ;scalar_t__ entered_content_phase; TYPE_6__* cur_co_ctx; TYPE_6__* downstream; scalar_t__ waiting_more_body; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_19__ {int * cleanup; } ;
typedef TYPE_6__ ngx_http_lua_co_ctx_t ;
struct TYPE_15__ {int count; } ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4)
{
    ngx_http_lua_ctx_t *VAR_5;
    ngx_http_lua_co_ctx_t *VAR_6;

    ngx_http_lua_loc_conf_t *VAR_7;

    FUNC_4(VAR_0, VAR_4->connection->log, 0,
                   "lua req body post read, c:%ud", VAR_4->main->count);

    VAR_5 = FUNC_1(VAR_4, VAR_2);

    if (VAR_5->waiting_more_body) {
        VAR_5->waiting_more_body = 0;

        VAR_6 = VAR_5->downstream;
        VAR_5->cur_co_ctx = VAR_6;

        VAR_6->cleanup = ((void*)0);

        VAR_7 = FUNC_2(VAR_4, VAR_2);

        if (VAR_7->check_client_abort) {
            VAR_4->read_event_handler = VAR_3;

        } else {
            VAR_4->read_event_handler = VAR_1;
        }

        if (VAR_5->entered_content_phase) {
            (void) FUNC_3(VAR_4);

        } else {
            VAR_5->resume_handler = FUNC_3;
            FUNC_0(VAR_4);
        }
    }
}
