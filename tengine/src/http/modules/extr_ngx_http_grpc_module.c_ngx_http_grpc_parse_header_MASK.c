
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u_char ;
typedef int ssize_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {int frame_state; scalar_t__ type; int parsing_headers; int flags; size_t rest; int end_stream; size_t padding; scalar_t__ fragment_state; int state; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;
struct TYPE_14__ {size_t* last; size_t* pos; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t,int) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_13, ngx_http_grpc_ctx_t *VAR_14,
    ngx_buf_t *VAR_15)
{
    u_char VAR_16, *VAR_17, *VAR_18;
    size_t VAR_19;
    ngx_int_t VAR_20;
    enum {
        sw_start = 0,
        sw_padding_length,
        sw_dependency,
        sw_dependency_2,
        sw_dependency_3,
        sw_dependency_4,
        sw_weight,
        sw_fragment,
        sw_padding
    } VAR_21;

    VAR_21 = VAR_14->frame_state;

    if (VAR_21 == sw_start) {

        FUNC_1(VAR_9, VAR_13->connection->log, 0,
                       "grpc parse header: start");

        if (VAR_14->type == VAR_6) {
            VAR_14->parsing_headers = 1;
            VAR_14->fragment_state = 0;

            VAR_19 = (VAR_14->flags & VAR_7 ? 1 : 0)
                  + (VAR_14->flags & VAR_8 ? 5 : 0);

            if (VAR_14->rest < VAR_19) {
                FUNC_3(VAR_10, VAR_13->connection->log, 0,
                              "upstream sent headers frame "
                              "with invalid length: %uz",
                              VAR_14->rest);
                return VAR_1;
            }

            if (VAR_14->flags & VAR_5) {
                VAR_14->end_stream = 1;
            }

            if (VAR_14->flags & VAR_7) {
                VAR_21 = sw_padding_length;

            } else if (VAR_14->flags & VAR_8) {
                VAR_21 = sw_dependency;

            } else {
                VAR_21 = sw_fragment;
            }

        } else if (VAR_14->type == VAR_3) {
            VAR_21 = sw_fragment;
        }

        VAR_14->padding = 0;
        VAR_14->frame_state = VAR_21;
    }

    if (VAR_21 < sw_fragment) {

        if (VAR_15->last - VAR_15->pos < (ssize_t) VAR_14->rest) {
            VAR_18 = VAR_15->last;

        } else {
            VAR_18 = VAR_15->pos + VAR_14->rest;
        }

        for (VAR_17 = VAR_15->pos; VAR_17 < VAR_18; VAR_17++) {
            VAR_16 = *VAR_17;
            switch (VAR_21) {

            case sw_padding_length:

                VAR_14->padding = VAR_16;

                if (VAR_14->flags & VAR_8) {
                    VAR_21 = sw_dependency;
                    break;
                }

                goto fragment;

            case sw_dependency:
                VAR_21 = sw_dependency_2;
                break;

            case sw_dependency_2:
                VAR_21 = sw_dependency_3;
                break;

            case sw_dependency_3:
                VAR_21 = sw_dependency_4;
                break;

            case sw_dependency_4:
                VAR_21 = sw_weight;
                break;

            case sw_weight:
                goto fragment;


            case sw_start:
            case sw_fragment:
            case sw_padding:
                break;
            }
        }

        VAR_14->rest -= VAR_17 - VAR_15->pos;
        VAR_15->pos = VAR_17;

        VAR_14->frame_state = VAR_21;
        return VAR_0;

    fragment:

        VAR_17++;
        VAR_14->rest -= VAR_17 - VAR_15->pos;
        VAR_15->pos = VAR_17;

        if (VAR_14->padding > VAR_14->rest) {
            FUNC_3(VAR_10, VAR_13->connection->log, 0,
                          "upstream sent http2 frame with too long "
                          "padding: %d in frame %uz",
                          VAR_14->padding, VAR_14->rest);
            return VAR_1;
        }

        VAR_21 = sw_fragment;
        VAR_14->frame_state = VAR_21;
    }

    if (VAR_21 == sw_fragment) {

        VAR_20 = FUNC_0(VAR_13, VAR_14, VAR_15);

        if (VAR_20 == VAR_0) {
            return VAR_0;
        }

        if (VAR_20 == VAR_1) {
            return VAR_1;
        }

        if (VAR_20 == VAR_11) {
            return VAR_11;
        }



        VAR_21 = sw_padding;
        VAR_14->frame_state = VAR_21;
    }

    if (VAR_21 == sw_padding) {

        if (VAR_15->last - VAR_15->pos < (ssize_t) VAR_14->rest) {

            VAR_14->rest -= VAR_15->last - VAR_15->pos;
            VAR_15->pos = VAR_15->last;

            return VAR_0;
        }

        VAR_15->pos += VAR_14->rest;
        VAR_14->rest = 0;

        VAR_14->state = VAR_12;

        if (VAR_14->flags & VAR_4) {

            if (VAR_14->fragment_state) {
                FUNC_3(VAR_10, VAR_13->connection->log, 0,
                              "upstream sent truncated http2 header");
                return VAR_1;
            }

            VAR_14->parsing_headers = 0;

            return VAR_2;
        }

        return VAR_0;
    }



    return VAR_1;
}
