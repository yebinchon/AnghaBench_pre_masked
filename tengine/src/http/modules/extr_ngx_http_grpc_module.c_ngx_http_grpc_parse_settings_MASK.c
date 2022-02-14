
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {int rest; int frame_state; scalar_t__ stream_id; int flags; int setting_id; int setting_value; int send_window; void* state; TYPE_1__* connection; int settings; int * free; } ;
typedef TYPE_4__ ngx_http_grpc_ctx_t ;
struct TYPE_15__ {int* last; int* pos; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {int log; } ;
struct TYPE_11__ {int init_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 void* VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int,int) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_8, ngx_http_grpc_ctx_t *VAR_9,
    ngx_buf_t *VAR_10)
{
    u_char VAR_11, *VAR_12, *VAR_13;
    ssize_t VAR_14;
    enum {
        sw_start = 0,
        sw_id,
        sw_id_2,
        sw_value,
        sw_value_2,
        sw_value_3,
        sw_value_4
    } VAR_15;

    if (VAR_10->last - VAR_10->pos < (ssize_t) VAR_9->rest) {
        VAR_13 = VAR_10->last;

    } else {
        VAR_13 = VAR_10->pos + VAR_9->rest;
    }

    VAR_15 = VAR_9->frame_state;

    if (VAR_15 == sw_start) {

        if (VAR_9->stream_id) {
            FUNC_3(VAR_5, VAR_8->connection->log, 0,
                          "upstream sent settings frame "
                          "with non-zero stream id: %ui",
                          VAR_9->stream_id);
            return VAR_1;
        }

        if (VAR_9->flags & VAR_2) {
            FUNC_1(VAR_4, VAR_8->connection->log, 0,
                           "grpc settings ack");

            if (VAR_9->rest != 0) {
                FUNC_3(VAR_5, VAR_8->connection->log, 0,
                              "upstream sent settings frame "
                              "with ack flag and non-zero length: %uz",
                              VAR_9->rest);
                return VAR_1;
            }

            VAR_9->state = VAR_7;

            return VAR_6;
        }

        if (VAR_9->rest % 6 != 0) {
            FUNC_3(VAR_5, VAR_8->connection->log, 0,
                          "upstream sent settings frame "
                          "with invalid length: %uz",
                          VAR_9->rest);
            return VAR_1;
        }

        if (VAR_9->free == ((void*)0) && VAR_9->settings++ > 1000) {
            FUNC_3(VAR_5, VAR_8->connection->log, 0,
                          "upstream sent too many settings frames");
            return VAR_1;
        }
    }

    for (VAR_12 = VAR_10->pos; VAR_12 < VAR_13; VAR_12++) {
        VAR_11 = *VAR_12;






        switch (VAR_15) {

        case sw_start:
        case sw_id:
            VAR_9->setting_id = VAR_11 << 8;
            VAR_15 = sw_id_2;
            break;

        case sw_id_2:
            VAR_9->setting_id |= VAR_11;
            VAR_15 = sw_value;
            break;

        case sw_value:
            VAR_9->setting_value = (ngx_uint_t) VAR_11 << 24;
            VAR_15 = sw_value_2;
            break;

        case sw_value_2:
            VAR_9->setting_value |= VAR_11 << 16;
            VAR_15 = sw_value_3;
            break;

        case sw_value_3:
            VAR_9->setting_value |= VAR_11 << 8;
            VAR_15 = sw_value_4;
            break;

        case sw_value_4:
            VAR_9->setting_value |= VAR_11;
            VAR_15 = sw_id;

            FUNC_2(VAR_4, VAR_8->connection->log, 0,
                           "grpc setting: %ui %ui",
                           VAR_9->setting_id, VAR_9->setting_value);
            if (VAR_9->setting_id == 0x04) {


                if (VAR_9->setting_value > VAR_3) {
                    FUNC_3(VAR_5, VAR_8->connection->log, 0,
                                  "upstream sent settings frame "
                                  "with too large initial window size: %ui",
                                  VAR_9->setting_value);
                    return VAR_1;
                }

                VAR_14 = VAR_9->setting_value
                                - VAR_9->connection->init_window;
                VAR_9->connection->init_window = VAR_9->setting_value;

                if (VAR_9->send_window > 0
                    && VAR_14 > (ssize_t) VAR_3
                                       - VAR_9->send_window)
                {
                    FUNC_3(VAR_5, VAR_8->connection->log, 0,
                                  "upstream sent settings frame "
                                  "with too large initial window size: %ui",
                                  VAR_9->setting_value);
                    return VAR_1;
                }

                VAR_9->send_window += VAR_14;
            }

            break;
        }
    }

    VAR_9->rest -= VAR_12 - VAR_10->pos;
    VAR_9->frame_state = VAR_15;
    VAR_10->pos = VAR_12;

    if (VAR_9->rest > 0) {
        return VAR_0;
    }

    VAR_9->state = VAR_7;

    return FUNC_0(VAR_8, VAR_9);
}
