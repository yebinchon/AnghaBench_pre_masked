
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
struct TYPE_16__ {int main; TYPE_5__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ flushing_coros; scalar_t__ entered_content_phase; scalar_t__ busy_bufs; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {int send_lowat; int send_timeout; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_19__ {int delayed; scalar_t__ timer_set; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_20__ {int buffered; int log; TYPE_4__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int VAR_5 ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int * FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_6,
    ngx_http_lua_ctx_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_chain_t *VAR_9;
    ngx_event_t *VAR_10;
    ngx_connection_t *VAR_11;

    ngx_http_core_loc_conf_t *VAR_12;

    VAR_11 = VAR_6->connection;
    VAR_10 = VAR_11->write;

    FUNC_8(VAR_3, VAR_11->log, 0,
                   "lua flushing output: buffered 0x%uxd",
                   VAR_11->buffered);

    if (VAR_7->busy_bufs) {


        VAR_8 = FUNC_7(VAR_6, ((void*)0));

    } else {
        VAR_9 = FUNC_6(VAR_6, VAR_7);
        if (VAR_9 == ((void*)0)) {
            return VAR_1;
        }

        VAR_8 = FUNC_7(VAR_6, VAR_9);
    }

    FUNC_0("output filter returned %d", (int) VAR_8);

    if (VAR_8 == VAR_1 || VAR_8 > VAR_4) {
        return VAR_8;
    }

    if (VAR_11->buffered & VAR_2) {

        VAR_12 = FUNC_4(VAR_6->main, VAR_5);

        if (!VAR_10->delayed) {
            FUNC_1(VAR_10, VAR_12->send_timeout);
        }

        if (FUNC_3(VAR_10, VAR_12->send_lowat) != VAR_4) {
            if (VAR_7->entered_content_phase) {
                FUNC_5(VAR_6, VAR_1);
            }

            return VAR_1;
        }

        if (VAR_7->flushing_coros) {
            FUNC_8(VAR_3, VAR_11->log, 0,
                           "lua flush still waiting: buffered 0x%uxd",
                           VAR_11->buffered);

            return VAR_0;
        }

    } else {

        if (VAR_10->timer_set && !VAR_10->delayed) {
            FUNC_2(VAR_10);
        }

    }

    return VAR_4;
}
