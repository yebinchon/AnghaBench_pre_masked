
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int tag; } ;
struct TYPE_23__ {scalar_t__ length; TYPE_2__* conf; int send_pool; int * busy_bufs; TYPE_1__ output; scalar_t__ out_bufs; int free_bufs; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_24__ {TYPE_6__* connection; int pool; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_25__ {int send_timeout; int send_lowat; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {TYPE_16__* write; TYPE_4__* data; int log; scalar_t__ buffered; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_27__ {TYPE_16__* read; } ;
struct TYPE_22__ {int read_timeout; } ;
struct TYPE_20__ {scalar_t__ timer_set; int ready; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 int FUNC_1 (int ,int *,int **,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_16__*) ;
 scalar_t__ FUNC_3 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_16__*,int ) ;
 int VAR_3 ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (int ) ;
 TYPE_7__* VAR_4 ;

void
FUNC_10(ngx_http_request_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_upstream_t *VAR_7;
    ngx_http_core_loc_conf_t *VAR_8;

    ngx_connection_t *VAR_9;

    VAR_7 = VAR_5->upstream;
    VAR_9 = VAR_5->connection;

    FUNC_8(VAR_1, VAR_5->connection->log, 0,
            "multi: http upstream send body: %p, %p", VAR_5, VAR_7);

    if (VAR_7->out_bufs || VAR_7->busy_bufs || VAR_9->buffered) {
        VAR_6 = FUNC_6(VAR_5, VAR_7->out_bufs);

        if (VAR_6 == VAR_0) {
            FUNC_7(VAR_5, VAR_7, VAR_0);
            return;
        }

        FUNC_1(VAR_5->pool, &VAR_7->free_bufs, &VAR_7->busy_bufs,
                &VAR_7->out_bufs, VAR_7->output.tag);
    }

    if (VAR_7->busy_bufs == ((void*)0)) {

        if (VAR_7->length == 0) {

            FUNC_8(VAR_1, VAR_5->connection->log, 0,
                    "http multi upstream finalize: %p, %p", VAR_5, VAR_7);
            FUNC_7(VAR_5, VAR_7, 0);
            return;
        }

        FUNC_9(VAR_7->send_pool);

    }

    VAR_8 = FUNC_5(VAR_5, VAR_3);

    if (VAR_9->data == VAR_5) {
        if (FUNC_4(VAR_9->write, VAR_8->send_lowat)
                != VAR_2)
        {
            FUNC_7(VAR_5, VAR_7, VAR_0);
            return;
        }
    }

    if (VAR_9->write->active && !VAR_9->write->ready) {
        FUNC_0(VAR_9->write, VAR_8->send_timeout);
    } else if (VAR_9->write->timer_set) {
        FUNC_2(VAR_9->write);
    }
}
