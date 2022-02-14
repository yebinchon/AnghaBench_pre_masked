
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {int rest; int frame_state; int window_update; size_t send_window; TYPE_2__* connection; scalar_t__ stream_id; int state; } ;
typedef TYPE_4__ ngx_http_grpc_ctx_t ;
struct TYPE_13__ {int* last; int* pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_10__ {scalar_t__ send_window; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_7,
    ngx_http_grpc_ctx_t *VAR_8, ngx_buf_t *VAR_9)
{
    u_char VAR_10, *VAR_11, *VAR_12;
    enum {
        sw_start = 0,
        sw_size_2,
        sw_size_3,
        sw_size_4
    } VAR_13;

    if (VAR_9->last - VAR_9->pos < (ssize_t) VAR_8->rest) {
        VAR_12 = VAR_9->last;

    } else {
        VAR_12 = VAR_9->pos + VAR_8->rest;
    }

    VAR_13 = VAR_8->frame_state;

    if (VAR_13 == sw_start) {
        if (VAR_8->rest != 4) {
            FUNC_2(VAR_4, VAR_7->connection->log, 0,
                          "upstream sent window update frame "
                          "with invalid length: %uz",
                          VAR_8->rest);
            return VAR_1;
        }
    }

    for (VAR_11 = VAR_9->pos; VAR_11 < VAR_12; VAR_11++) {
        VAR_10 = *VAR_11;






        switch (VAR_13) {

        case sw_start:
            VAR_8->window_update = (VAR_10 & 0x7f) << 24;
            VAR_13 = sw_size_2;
            break;

        case sw_size_2:
            VAR_8->window_update |= VAR_10 << 16;
            VAR_13 = sw_size_3;
            break;

        case sw_size_3:
            VAR_8->window_update |= VAR_10 << 8;
            VAR_13 = sw_size_4;
            break;

        case sw_size_4:
            VAR_8->window_update |= VAR_10;
            VAR_13 = sw_start;
            break;
        }
    }

    VAR_8->rest -= VAR_11 - VAR_9->pos;
    VAR_8->frame_state = VAR_13;
    VAR_9->pos = VAR_11;

    if (VAR_8->rest > 0) {
        return VAR_0;
    }

    VAR_8->state = VAR_6;

    FUNC_0(VAR_3, VAR_7->connection->log, 0,
                   "grpc window update: %ui", VAR_8->window_update);

    if (VAR_8->stream_id) {

        if (VAR_8->window_update > (size_t) VAR_2
                                 - VAR_8->send_window)
        {
            FUNC_2(VAR_4, VAR_7->connection->log, 0,
                          "upstream sent too large window update");
            return VAR_1;
        }

        VAR_8->send_window += VAR_8->window_update;

    } else {

        if (VAR_8->window_update > VAR_2
                                 - VAR_8->connection->send_window)
        {
            FUNC_2(VAR_4, VAR_7->connection->log, 0,
                          "upstream sent too large window update");
            return VAR_1;
        }

        VAR_8->connection->send_window += VAR_8->window_update;
    }

    return VAR_5;
}
