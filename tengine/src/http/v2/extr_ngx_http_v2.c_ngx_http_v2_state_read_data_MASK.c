
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int skip_data; int in_closed; TYPE_7__* preread; TYPE_6__* request; } ;
typedef TYPE_3__ ngx_http_v2_stream_t ;
struct TYPE_22__ {int preread_size; } ;
typedef TYPE_4__ ngx_http_v2_srv_conf_t ;
struct TYPE_20__ {size_t length; int flags; scalar_t__ padding; TYPE_3__* stream; } ;
struct TYPE_23__ {TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_24__ {int pool; scalar_t__ request_body; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_25__ {scalar_t__ last; scalar_t__ end; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_19__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,size_t) ;
 TYPE_7__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,scalar_t__) ;
 TYPE_4__* FUNC_3 (TYPE_6__*,int ) ;
 int * FUNC_4 (TYPE_5__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_6__*,int *,size_t,int) ;
 int * FUNC_6 (TYPE_5__*,int *,int *) ;
 int * FUNC_7 (TYPE_5__*,int *,int *,int * (*) (TYPE_5__*,int *,int *)) ;
 int * FUNC_8 (TYPE_5__*,int *,int *) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_11(ngx_http_v2_connection_t *VAR_6, u_char *VAR_7,
    u_char *VAR_8)
{
    size_t VAR_9;
    ngx_buf_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_http_request_t *VAR_12;
    ngx_http_v2_stream_t *VAR_13;
    ngx_http_v2_srv_conf_t *VAR_14;

    VAR_13 = VAR_6->state.stream;

    if (VAR_13 == ((void*)0)) {
        return FUNC_8(VAR_6, VAR_7, VAR_8);
    }

    if (VAR_13->skip_data) {
        FUNC_9(VAR_3, VAR_6->connection->log, 0,
                       "skipping http2 DATA frame");

        return FUNC_8(VAR_6, VAR_7, VAR_8);
    }

    VAR_9 = VAR_8 - VAR_7;

    if (VAR_9 >= VAR_6->state.length) {
        VAR_9 = VAR_6->state.length;
        VAR_13->in_closed = VAR_6->state.flags & VAR_0;
    }

    VAR_12 = VAR_13->request;

    if (VAR_12->request_body) {
        VAR_11 = FUNC_5(VAR_12, VAR_7, VAR_9, VAR_13->in_closed);

        if (VAR_11 != VAR_4) {
            VAR_13->skip_data = 1;
            FUNC_2(VAR_12, VAR_11);
        }

    } else if (VAR_9) {
        VAR_10 = VAR_13->preread;

        if (VAR_10 == ((void*)0)) {
            VAR_14 = FUNC_3(VAR_12, VAR_5);

            VAR_10 = FUNC_1(VAR_12->pool, VAR_14->preread_size);
            if (VAR_10 == ((void*)0)) {
                return FUNC_4(VAR_6,
                                                    VAR_1);
            }

            VAR_13->preread = VAR_10;
        }

        if (VAR_9 > (size_t) (VAR_10->end - VAR_10->last)) {
            FUNC_10(VAR_2, VAR_6->connection->log, 0,
                          "http2 preread buffer overflow");
            return FUNC_4(VAR_6,
                                                VAR_1);
        }

        VAR_10->last = FUNC_0(VAR_10->last, VAR_7, VAR_9);
    }

    VAR_7 += VAR_9;
    VAR_6->state.length -= VAR_9;

    if (VAR_6->state.length) {
        return FUNC_7(VAR_6, VAR_7, VAR_8,
                                      FUNC_11);
    }

    if (VAR_6->state.padding) {
        return FUNC_8(VAR_6, VAR_7, VAR_8);
    }

    return FUNC_6(VAR_6, VAR_7, VAR_8);
}
