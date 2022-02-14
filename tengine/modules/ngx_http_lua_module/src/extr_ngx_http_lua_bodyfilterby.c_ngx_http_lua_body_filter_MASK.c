
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_24__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_27__ {int pool; int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_28__ {TYPE_7__* body_filter_chain; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
struct TYPE_29__ {scalar_t__ (* body_filter_handler ) (TYPE_2__*,TYPE_7__*) ;} ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_30__ {int busy_bufs; int free_bufs; int context; int * cleanup; scalar_t__ seen_last_in_filter; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_31__ {int handler; TYPE_5__* data; } ;
typedef TYPE_6__ ngx_http_cleanup_t ;
struct TYPE_32__ {TYPE_24__* buf; struct TYPE_32__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_26__ {int file_last; int file_pos; int last; int pos; } ;
struct TYPE_25__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_24__*) ;
 int FUNC_2 (int ,int ,...) ;
 TYPE_6__* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_7 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_9 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_7__*) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_request_t *VAR_6, ngx_chain_t *VAR_7)
{
    ngx_http_lua_loc_conf_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;
    ngx_int_t VAR_10;
    uint16_t VAR_11;
    ngx_http_cleanup_t *VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_lua_main_conf_t *VAR_14;

    FUNC_9(VAR_2, VAR_6->connection->log, 0,
                   "lua body filter for user lua code, uri \"%V\"", &VAR_6->uri);

    if (VAR_7 == ((void*)0)) {
        return FUNC_8(VAR_6, VAR_7);
    }

    VAR_8 = FUNC_5(VAR_6, VAR_4);

    if (VAR_8->body_filter_handler == ((void*)0)) {
        FUNC_0("no body filter handler found");
        return FUNC_8(VAR_6, VAR_7);
    }

    VAR_9 = FUNC_4(VAR_6, VAR_4);

    FUNC_0("ctx = %p", VAR_9);

    if (VAR_9 == ((void*)0)) {
        VAR_9 = FUNC_7(VAR_6);
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }
    }

    if (VAR_9->seen_last_in_filter) {
        for ( ; VAR_7; VAR_7 = VAR_7->next) {
            FUNC_0("mark the buf as consumed: %d", (int) FUNC_1(VAR_7->buf));
            VAR_7->buf->pos = VAR_7->buf->last;
            VAR_7->buf->file_pos = VAR_7->buf->file_last;
        }

        return VAR_3;
    }

    if (VAR_9->cleanup == ((void*)0)) {
        VAR_12 = FUNC_3(VAR_6, 0);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12->handler = VAR_5;
        VAR_12->data = VAR_9;
        VAR_9->cleanup = &VAR_12->handler;
    }

    VAR_11 = VAR_9->context;
    VAR_9->context = VAR_1;

    FUNC_0("calling body filter handler");
    VAR_10 = VAR_8->body_filter_handler(VAR_6, VAR_7);

    FUNC_0("calling body filter handler returned %d", (int) VAR_10);

    VAR_9->context = VAR_11;

    if (VAR_10 != VAR_3) {
        return VAR_0;
    }

    VAR_14 = FUNC_6(VAR_6, VAR_4);
    VAR_13 = VAR_14->body_filter_chain;

    if (VAR_7 == VAR_13) {
        return FUNC_8(VAR_6, VAR_7);
    }

    if (VAR_13 == ((void*)0)) {


        return VAR_3;
    }


    VAR_10 = FUNC_8(VAR_6, VAR_13);
    if (VAR_10 == VAR_0) {
        return VAR_0;
    }




    FUNC_2(

                            VAR_9->free_bufs, VAR_9->busy_bufs, &VAR_13,
                            (ngx_buf_tag_t) &VAR_4);

    return VAR_10;
}
