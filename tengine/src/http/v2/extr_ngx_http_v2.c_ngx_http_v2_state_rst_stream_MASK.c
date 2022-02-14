
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_20__ {int in_closed; int out_closed; TYPE_2__* request; } ;
typedef TYPE_4__ ngx_http_v2_stream_t ;
struct TYPE_21__ {TYPE_4__* stream; } ;
typedef TYPE_5__ ngx_http_v2_node_t ;
struct TYPE_19__ {int length; scalar_t__ sid; } ;
struct TYPE_22__ {TYPE_3__ state; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_v2_connection_t ;
struct TYPE_23__ {int (* handler ) (TYPE_7__*) ;} ;
typedef TYPE_7__ ngx_event_t ;
struct TYPE_24__ {int error; TYPE_7__* read; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_18__ {TYPE_8__* connection; } ;
struct TYPE_17__ {int log; } ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_6__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_6__*,int *,int *) ;
 int * FUNC_4 (TYPE_6__*,int *,int *,int * (*) (TYPE_6__*,int *,int *)) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__,int) ;
 int FUNC_7 (int ,int ,int ,char*,...) ;
 int FUNC_8 (TYPE_7__*) ;

__attribute__((used)) static u_char *
FUNC_9(ngx_http_v2_connection_t *VAR_5, u_char *VAR_6,
    u_char *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_event_t *VAR_9;
    ngx_connection_t *VAR_10;
    ngx_http_v2_node_t *VAR_11;
    ngx_http_v2_stream_t *VAR_12;

    if (VAR_5->state.length != VAR_1) {
        FUNC_7(VAR_4, VAR_5->connection->log, 0,
                      "client sent RST_STREAM frame with incorrect length %uz",
                      VAR_5->state.length);

        return FUNC_0(VAR_5, VAR_2);
    }

    if (VAR_7 - VAR_6 < VAR_1) {
        return FUNC_4(VAR_5, VAR_6, VAR_7,
                                      FUNC_9);
    }

    VAR_8 = FUNC_2(VAR_6);

    VAR_6 += VAR_1;

    FUNC_6(VAR_3, VAR_5->connection->log, 0,
                   "http2 RST_STREAM frame, sid:%ui status:%ui",
                   VAR_5->state.sid, VAR_8);

    if (VAR_5->state.sid == 0) {
        FUNC_7(VAR_4, VAR_5->connection->log, 0,
                      "client sent RST_STREAM frame with incorrect identifier");

        return FUNC_0(VAR_5, VAR_0);
    }

    VAR_11 = FUNC_1(VAR_5, VAR_5->state.sid, 0);

    if (VAR_11 == ((void*)0) || VAR_11->stream == ((void*)0)) {
        FUNC_5(VAR_3, VAR_5->connection->log, 0,
                       "unknown http2 stream");

        return FUNC_3(VAR_5, VAR_6, VAR_7);
    }

    VAR_12 = VAR_11->stream;

    VAR_12->in_closed = 1;
    VAR_12->out_closed = 1;

    VAR_10 = VAR_12->request->connection;
    VAR_10->error = 1;

    switch (VAR_8) {

    case 130:
        FUNC_7(VAR_4, VAR_10->log, 0,
                      "client canceled stream %ui", VAR_5->state.sid);
        break;

    case 128:
        FUNC_7(VAR_4, VAR_10->log, 0,
                      "client refused stream %ui", VAR_5->state.sid);
        break;

    case 129:
        FUNC_7(VAR_4, VAR_10->log, 0,
                      "client terminated stream %ui due to internal error",
                      VAR_5->state.sid);
        break;

    default:
        FUNC_7(VAR_4, VAR_10->log, 0,
                      "client terminated stream %ui with status %ui",
                      VAR_5->state.sid, VAR_8);
        break;
    }

    VAR_9 = VAR_10->read;
    VAR_9->handler(VAR_9);

    return FUNC_3(VAR_5, VAR_6, VAR_7);
}
