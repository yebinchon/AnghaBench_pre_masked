
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int request_body_in_single_buf; int request_body_in_persistent_file; int request_body_in_clean_file; TYPE_2__* main; int uri; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_19__ {scalar_t__ (* content_handler ) (TYPE_3__*) ;scalar_t__ force_read_body; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_20__ {int entered_content_phase; int waiting_more_body; scalar_t__ (* resume_handler ) (TYPE_3__*) ;int read_body_done; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {int count; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

ngx_int_t
FUNC_8(ngx_http_request_t *VAR_9)
{
    ngx_http_lua_loc_conf_t *VAR_10;
    ngx_http_lua_ctx_t *VAR_11;
    ngx_int_t VAR_12;

    FUNC_5(VAR_6, VAR_9->connection->log, 0,
                   "lua content handler, uri:\"%V\" c:%ud", &VAR_9->uri,
                   VAR_9->main->count);

    VAR_10 = FUNC_2(VAR_9, VAR_8);

    if (VAR_10->content_handler == ((void*)0)) {
        FUNC_0("no content handler found");
        return VAR_1;
    }

    VAR_11 = FUNC_1(VAR_9, VAR_8);

    FUNC_0("ctx = %p", VAR_11);

    if (VAR_11 == ((void*)0)) {
        VAR_11 = FUNC_3(VAR_9);
        if (VAR_11 == ((void*)0)) {
            return VAR_4;
        }
    }

    FUNC_0("entered? %d", (int) VAR_11->entered_content_phase);

    if (VAR_11->waiting_more_body) {
        return VAR_2;
    }

    if (VAR_11->entered_content_phase) {
        FUNC_0("calling wev handler");
        VAR_12 = VAR_11->resume_handler(VAR_9);
        FUNC_0("wev handler returns %d", (int) VAR_12);
        return VAR_12;
    }

    if (VAR_10->force_read_body && !VAR_11->read_body_done) {
        VAR_9->request_body_in_single_buf = 1;
        VAR_9->request_body_in_persistent_file = 1;
        VAR_9->request_body_in_clean_file = 1;

        VAR_12 = FUNC_4(VAR_9,
                                        VAR_7);

        if (VAR_12 == VAR_3 || VAR_12 >= VAR_5) {


            VAR_9->main->count--;

            return VAR_12;
        }

        if (VAR_12 == VAR_0) {
            VAR_11->waiting_more_body = 1;

            return VAR_2;
        }
    }

    FUNC_0("setting entered");

    VAR_11->entered_content_phase = 1;

    FUNC_0("calling content handler");
    return VAR_10->content_handler(VAR_9);
}
