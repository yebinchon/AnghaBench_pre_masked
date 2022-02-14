
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_grpc_state_e ;
struct TYPE_10__ {int state; int rest; int type; int flags; int stream_id; int frame_state; } ;
typedef TYPE_3__ ngx_http_grpc_ctx_t ;
struct TYPE_11__ {int* pos; int* last; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_6, ngx_http_grpc_ctx_t *VAR_7,
    ngx_buf_t *VAR_8)
{
    u_char VAR_9, *VAR_10;
    ngx_http_grpc_state_e VAR_11;

    VAR_11 = VAR_7->state;

    for (VAR_10 = VAR_8->pos; VAR_10 < VAR_8->last; VAR_10++) {
        VAR_9 = *VAR_10;






        switch (VAR_11) {

        case 133:
            VAR_7->rest = VAR_9 << 16;
            VAR_11 = 137;
            break;

        case 137:
            VAR_7->rest |= VAR_9 << 8;
            VAR_11 = 136;
            break;

        case 136:
            VAR_7->rest |= VAR_9;

            if (VAR_7->rest > VAR_2) {
                FUNC_2(VAR_4, VAR_6->connection->log, 0,
                              "upstream sent too large http2 frame: %uz",
                              VAR_7->rest);
                return VAR_1;
            }

            VAR_11 = 128;
            break;

        case 128:
            VAR_7->type = VAR_9;
            VAR_11 = 138;
            break;

        case 138:
            VAR_7->flags = VAR_9;
            VAR_11 = 132;
            break;

        case 132:
            VAR_7->stream_id = (VAR_9 & 0x7f) << 24;
            VAR_11 = 131;
            break;

        case 131:
            VAR_7->stream_id |= VAR_9 << 16;
            VAR_11 = 130;
            break;

        case 130:
            VAR_7->stream_id |= VAR_9 << 8;
            VAR_11 = 129;
            break;

        case 129:
            VAR_7->stream_id |= VAR_9;

            FUNC_1(VAR_3, VAR_6->connection->log, 0,
                           "grpc frame: %d, len: %uz, f:%d, i:%ui",
                           VAR_7->type, VAR_7->rest, VAR_7->flags, VAR_7->stream_id);

            VAR_8->pos = VAR_10 + 1;

            VAR_7->state = 134;
            VAR_7->frame_state = 0;

            return VAR_5;


        case 134:
        case 135:
            break;
        }
    }

    VAR_8->pos = VAR_10;
    VAR_7->state = VAR_11;

    return VAR_0;
}
