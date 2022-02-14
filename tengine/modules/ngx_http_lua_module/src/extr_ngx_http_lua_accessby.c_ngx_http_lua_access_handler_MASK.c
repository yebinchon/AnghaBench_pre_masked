
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {size_t phase_handler; int request_body_in_single_buf; int request_body_in_persistent_file; int request_body_in_clean_file; TYPE_3__* main; scalar_t__ header_sent; int uri; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_29__ {int next; } ;
typedef TYPE_5__ ngx_http_phase_handler_t ;
struct TYPE_30__ {int postponed_to_access_phase_end; } ;
typedef TYPE_6__ ngx_http_lua_main_conf_t ;
struct TYPE_31__ {scalar_t__ (* access_handler ) (TYPE_4__*) ;scalar_t__ force_read_body; } ;
typedef TYPE_7__ ngx_http_lua_loc_conf_t ;
struct TYPE_32__ {scalar_t__ (* resume_handler ) (TYPE_4__*) ;int waiting_more_body; int read_body_done; int eof; scalar_t__ entered_access_phase; } ;
typedef TYPE_8__ ngx_http_lua_ctx_t ;
struct TYPE_26__ {TYPE_5__* handlers; } ;
struct TYPE_33__ {TYPE_2__ phase_engine; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
struct TYPE_27__ {int count; } ;
struct TYPE_25__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int) ;
 int VAR_9 ;
 TYPE_8__* FUNC_2 (TYPE_4__*,int ) ;
 TYPE_7__* FUNC_3 (TYPE_4__*,int ) ;
 void* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_8__* FUNC_5 (TYPE_4__*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_8__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;

ngx_int_t
FUNC_11(ngx_http_request_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_http_lua_ctx_t *VAR_14;
    ngx_http_lua_loc_conf_t *VAR_15;
    ngx_http_lua_main_conf_t *VAR_16;
    ngx_http_phase_handler_t VAR_17, *VAR_18, *VAR_19, *VAR_20;
    ngx_http_core_main_conf_t *VAR_21;

    FUNC_8(VAR_7, VAR_12->connection->log, 0,
                   "lua access handler, uri:\"%V\" c:%ud", &VAR_12->uri,
                   VAR_12->main->count);

    VAR_16 = FUNC_4(VAR_12, VAR_11);

    if (!VAR_16->postponed_to_access_phase_end) {

        VAR_16->postponed_to_access_phase_end = 1;

        VAR_21 = FUNC_4(VAR_12, VAR_9);

        VAR_18 = VAR_21->phase_engine.handlers;
        VAR_19 = &VAR_18[VAR_12->phase_handler];


        VAR_20 = &VAR_18[VAR_19->next - 2];

        FUNC_0("ph cur: %d, ph next: %d", (int) VAR_12->phase_handler,
           (int) (VAR_19->next - 2));







        if (VAR_19 < VAR_20) {
            FUNC_0("swapping the contents of cur_ph and last_ph...");

            VAR_17 = *VAR_19;

            FUNC_1(VAR_19, VAR_19 + 1,
                    (VAR_20 - VAR_19) * sizeof (ngx_http_phase_handler_t));

            *VAR_20 = VAR_17;

            VAR_12->phase_handler--;

            return VAR_1;
        }
    }

    VAR_15 = FUNC_3(VAR_12, VAR_11);

    if (VAR_15->access_handler == ((void*)0)) {
        FUNC_0("no access handler found");
        return VAR_1;
    }

    VAR_14 = FUNC_2(VAR_12, VAR_11);

    FUNC_0("ctx = %p", VAR_14);

    if (VAR_14 == ((void*)0)) {
        VAR_14 = FUNC_5(VAR_12);
        if (VAR_14 == ((void*)0)) {
            return VAR_4;
        }
    }

    FUNC_0("entered? %d", (int) VAR_14->entered_access_phase);

    if (VAR_14->entered_access_phase) {
        FUNC_0("calling wev handler");
        VAR_13 = VAR_14->resume_handler(VAR_12);
        FUNC_0("wev handler returns %d", (int) VAR_13);

        if (VAR_13 == VAR_3 || VAR_13 == VAR_2 || VAR_13 > VAR_8) {
            return VAR_13;
        }

        if (VAR_13 == VAR_8) {
            if (VAR_12->header_sent) {
                FUNC_0("header already sent");





                if (!VAR_14->eof) {
                    FUNC_0("eof not yet sent");

                    VAR_13 = FUNC_6(VAR_12, VAR_14, ((void*)0)
                                                                            );
                    if (VAR_13 == VAR_3 || VAR_13 > VAR_8) {
                        return VAR_13;
                    }
                }

                return VAR_5;
            }

            return VAR_8;
        }

        return VAR_1;
    }

    if (VAR_14->waiting_more_body) {
        FUNC_0("WAITING MORE BODY");
        return VAR_2;
    }

    if (VAR_15->force_read_body && !VAR_14->read_body_done) {
        VAR_12->request_body_in_single_buf = 1;
        VAR_12->request_body_in_persistent_file = 1;
        VAR_12->request_body_in_clean_file = 1;

        VAR_13 = FUNC_7(VAR_12,
                                       VAR_10);

        if (VAR_13 == VAR_3 || VAR_13 >= VAR_6) {


            VAR_12->main->count--;


            return VAR_13;
        }

        if (VAR_13 == VAR_0) {
            VAR_14->waiting_more_body = 1;
            return VAR_2;
        }
    }

    FUNC_0("calling access handler");
    return VAR_15->access_handler(VAR_12);
}
