
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


typedef int u_char ;
struct TYPE_15__ {struct TYPE_15__* main; int pool; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_5__* body_filter_chain; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
struct TYPE_17__ {int seen_last_in_filter; int free_bufs; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {TYPE_6__* buf; struct TYPE_18__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_19__ {int last_buf; int last_in_chain; scalar_t__ last; scalar_t__ pos; int sync; int flush; } ;
typedef TYPE_6__ ngx_buf_t ;
typedef int lua_State ;
struct TYPE_14__ {int log; } ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 unsigned int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (scalar_t__,int *,size_t) ;
 TYPE_3__* FUNC_10 (TYPE_2__*,int ) ;
 size_t FUNC_11 (int *,int,int,int) ;
 TYPE_5__* FUNC_12 (int ,int ,int *,size_t) ;
 scalar_t__ FUNC_13 (int *,int,scalar_t__) ;
 int VAR_0 ;

int
FUNC_14(lua_State *VAR_1, ngx_http_request_t *VAR_2,
    ngx_http_lua_ctx_t *VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    u_char *VAR_7;
    size_t VAR_8;
    unsigned VAR_9;
    unsigned VAR_10 = 0;
    ngx_buf_t *VAR_11;
    ngx_chain_t *VAR_12;
    ngx_chain_t *VAR_13;

    ngx_http_lua_main_conf_t *VAR_14;

    VAR_5 = FUNC_1(VAR_1, 2);

    FUNC_0("index: %d", VAR_5);

    if (VAR_5 != 1 && VAR_5 != 2) {
        return FUNC_2(VAR_1, "bad index: %d", VAR_5);
    }

    VAR_14 = FUNC_10(VAR_2, VAR_0);

    if (VAR_5 == 2) {

        VAR_9 = FUNC_3(VAR_1, 3);

        VAR_13 = VAR_14->body_filter_chain;

        if (VAR_9) {
            VAR_3->seen_last_in_filter = 1;




            for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->next) {
                if (VAR_12->next == ((void*)0)) {
                    if (VAR_2 == VAR_2->main) {
                        VAR_12->buf->last_buf = 1;

                    } else {
                        VAR_12->buf->last_in_chain = 1;
                    }

                    break;
                }
            }

        } else {


            VAR_6 = 0;

            for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->next) {
                VAR_11 = VAR_12->buf;

                if (VAR_11->last_buf) {
                    VAR_11->last_buf = 0;
                    VAR_6 = 1;
                }

                if (VAR_11->last_in_chain) {
                    VAR_11->last_in_chain = 0;
                    VAR_6 = 1;
                }

                if (VAR_6 && VAR_11->last == VAR_11->pos && !FUNC_7(VAR_11)) {


                    VAR_11->sync = 1;
                }
            }

            VAR_3->seen_last_in_filter = 0;
        }

        return 0;
    }



    VAR_4 = FUNC_5(VAR_1, 3);

    switch (VAR_4) {
    case 129:
    case 130:
        VAR_7 = (u_char *) FUNC_4(VAR_1, 3, &VAR_8);
        break;

    case 131:


        VAR_13 = VAR_14->body_filter_chain;

        VAR_9 = 0;

        for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->next) {
            VAR_11 = VAR_12->buf;

            if (VAR_11->flush) {
                VAR_10 = 1;
            }

            if (VAR_11->last_in_chain || VAR_11->last_buf) {
                VAR_9 = 1;
            }

            FUNC_0("mark the buf as consumed: %d", (int) FUNC_8(VAR_11));
            VAR_11->pos = VAR_11->last;
        }



        goto done;

    case 128:
        VAR_8 = FUNC_11(VAR_1, 3 , 3 ,
                                                 1 );
        VAR_7 = ((void*)0);
        break;

    default:
        return FUNC_2(VAR_1, "bad chunk data type: %s",
                          FUNC_6(VAR_1, VAR_4));
    }

    VAR_13 = VAR_14->body_filter_chain;

    VAR_9 = 0;

    for (VAR_12 = VAR_13; VAR_12; VAR_12 = VAR_12->next) {
        VAR_11 = VAR_12->buf;

        if (VAR_11->flush) {
            VAR_10 = 1;
        }

        if (VAR_11->last_buf || VAR_11->last_in_chain) {
            VAR_9 = 1;
        }

        FUNC_0("mark the buf as consumed: %d", (int) FUNC_8(VAR_12->buf));
        VAR_12->buf->pos = VAR_12->buf->last;
    }



    if (VAR_8 == 0) {
        goto done;
    }

    VAR_12 = FUNC_12(VAR_2->connection->log, VAR_2->pool,
                                         &VAR_3->free_bufs, VAR_8);
    if (VAR_12 == ((void*)0)) {
        return FUNC_2(VAR_1, "no memory");
    }

    if (VAR_4 == 128) {
        VAR_12->buf->last = FUNC_13(VAR_1, 3, VAR_12->buf->last);

    } else {
        VAR_12->buf->last = FUNC_9(VAR_12->buf->pos, VAR_7, VAR_8);
    }

done:

    if (VAR_9 || VAR_10) {
        if (VAR_12 == ((void*)0)) {
            VAR_12 = FUNC_12(VAR_2->connection->log,
                                                 VAR_2->pool,
                                                 &VAR_3->free_bufs, 0);
            if (VAR_12 == ((void*)0)) {
                return FUNC_2(VAR_1, "no memory");
            }
        }

        if (VAR_9) {
            VAR_3->seen_last_in_filter = 1;

            if (VAR_2 == VAR_2->main) {
                VAR_12->buf->last_buf = 1;

            } else {
                VAR_12->buf->last_in_chain = 1;
            }
        }

        if (VAR_10) {
            VAR_12->buf->flush = 1;
        }
    }

    VAR_14->body_filter_chain = VAR_12;

    return 0;
}
