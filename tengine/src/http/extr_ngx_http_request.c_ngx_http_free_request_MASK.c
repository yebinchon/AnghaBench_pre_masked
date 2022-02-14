
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct linger {int l_onoff; scalar_t__ l_linger; } ;
typedef int ngx_pool_t ;
struct TYPE_18__ {char* action; TYPE_6__* data; } ;
typedef TYPE_4__ ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_15__ {scalar_t__ status; } ;
struct TYPE_19__ {int * pool; TYPE_3__* connection; TYPE_2__ request_line; int logged; TYPE_1__ headers_out; scalar_t__ stat_writing; scalar_t__ stat_reading; TYPE_8__* cleanup; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_20__ {int * request; } ;
typedef TYPE_6__ ngx_http_log_ctx_t ;
struct TYPE_21__ {scalar_t__ reset_timedout_connection; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {struct TYPE_22__* next; int data; int (* handler ) (int ) ;} ;
typedef TYPE_8__ ngx_http_cleanup_t ;
struct TYPE_17__ {scalar_t__ sent; int destroyed; int fd; scalar_t__ timedout; TYPE_4__* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_4__*,int ,char*) ;
 int FUNC_5 (int ,TYPE_4__*,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,void const*,int) ;
 int FUNC_7 (int ) ;

void
FUNC_8(ngx_http_request_t *VAR_8, ngx_int_t VAR_9)
{
    ngx_log_t *VAR_10;
    ngx_pool_t *VAR_11;
    struct linger VAR_12;
    ngx_http_cleanup_t *VAR_13;
    ngx_http_log_ctx_t *VAR_14;
    ngx_http_core_loc_conf_t *VAR_15;

    VAR_10 = VAR_8->connection->log;

    FUNC_4(VAR_1, VAR_10, 0, "http close request");

    if (VAR_8->pool == ((void*)0)) {
        FUNC_5(VAR_0, VAR_10, 0, "http request already closed");
        return;
    }

    VAR_13 = VAR_8->cleanup;
    VAR_8->cleanup = ((void*)0);

    while (VAR_13) {
        if (VAR_13->handler) {
            VAR_13->handler(VAR_13->data);
        }

        VAR_13 = VAR_13->next;
    }
    if (VAR_9 > 0 && (VAR_8->headers_out.status == 0 || VAR_8->connection->sent == 0)) {
        VAR_8->headers_out.status = VAR_9;
    }

    if (!VAR_8->logged) {
        VAR_10->action = "logging request";

        FUNC_3(VAR_8);
    }

    VAR_10->action = "closing request";

    if (VAR_8->connection->timedout) {
        VAR_15 = FUNC_2(VAR_8, VAR_4);

        if (VAR_15->reset_timedout_connection) {
            VAR_12.l_onoff = 1;
            VAR_12.l_linger = 0;

            if (FUNC_6(VAR_8->connection->fd, VAR_2, VAR_3,
                           (const void *) &VAR_12, sizeof(struct linger)) == -1)
            {
                FUNC_5(VAR_0, VAR_10, VAR_5,
                              "setsockopt(SO_LINGER) failed");
            }
        }
    }


    VAR_14 = VAR_10->data;
    VAR_14->request = ((void*)0);

    VAR_8->request_line.len = 0;

    VAR_8->connection->destroyed = 1;






    VAR_11 = VAR_8->pool;
    VAR_8->pool = ((void*)0);

    FUNC_1(VAR_11);
}
