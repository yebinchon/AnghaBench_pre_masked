
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int code; } ;
struct TYPE_6__ {TYPE_1__ action; } ;
struct TYPE_7__ {int * tfs_peer; int * input_filter; int * tfs_peer_servers; void* process_request_body; TYPE_2__ r_ctx; void* create_request; int state; int * retry_handler; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_peer_connection_t ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int * VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;

__attribute__((used)) static ngx_http_tfs_peer_connection_t *
FUNC_0(ngx_http_tfs_t *VAR_21)
{
    switch (VAR_21->r_ctx.action.code) {
    case 165:
            VAR_21->create_request = VAR_8;
            VAR_21->process_request_body = VAR_17;
            return &VAR_21->tfs_peer_servers[VAR_3];

    case 158:
        switch (VAR_21->state) {
        case 138:
            VAR_21->create_request = VAR_8;
            VAR_21->process_request_body = VAR_17;
            return &VAR_21->tfs_peer_servers[VAR_3];

        case 140:
            VAR_21->create_request = VAR_9;
            VAR_21->process_request_body = VAR_18;
            return &VAR_21->tfs_peer_servers[VAR_4];

        case 139:
        case 143:
            VAR_21->create_request = VAR_6;
            VAR_21->process_request_body = VAR_13;
            return &VAR_21->tfs_peer_servers[VAR_1];

        case 142:
        case 141:
        case 144:
            VAR_21->create_request = VAR_7;
            VAR_21->process_request_body = VAR_16;
            return &VAR_21->tfs_peer_servers[VAR_2];

        case 146:
            VAR_21->create_request = VAR_5;
            VAR_21->process_request_body = VAR_10;
            return &VAR_21->tfs_peer_servers[VAR_0];

        case 145:
            return VAR_21->tfs_peer;
        default:
            return ((void*)0);
        }
        break;
    case 160:
        switch (VAR_21->state) {
        case 147:
            VAR_21->create_request = VAR_8;
            VAR_21->process_request_body = VAR_17;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_3];

        case 149:
            VAR_21->create_request = VAR_9;
            VAR_21->process_request_body = VAR_18;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_4];

        case 150:
            VAR_21->create_request = VAR_6;
            VAR_21->process_request_body = VAR_13;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_1];

        case 151:
            VAR_21->create_request = VAR_7;
            VAR_21->process_request_body = VAR_16;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = VAR_20;
            return &VAR_21->tfs_peer_servers[VAR_2];

        case 148:
            VAR_21->create_request = VAR_5;
            VAR_21->process_request_body = VAR_12;
            VAR_21->input_filter = VAR_11;
            VAR_21->retry_handler = VAR_19;
            return &VAR_21->tfs_peer_servers[VAR_0];

        case 152:
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return VAR_21->tfs_peer;
        default:
            return ((void*)0);
        }
        break;
    case 157:
        switch (VAR_21->state) {
        case 130:
            VAR_21->create_request = VAR_8;
            VAR_21->process_request_body = VAR_17;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_3];

        case 131:
            VAR_21->create_request = VAR_9;
            VAR_21->process_request_body = VAR_18;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_4];

        case 136:
        case 128:
            VAR_21->create_request = VAR_6;
            VAR_21->process_request_body = VAR_13;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_1];

        case 135:
        case 132:
            VAR_21->create_request = VAR_7;
            VAR_21->process_request_body = VAR_16;
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = VAR_20;
            return &VAR_21->tfs_peer_servers[VAR_2];

        case 134:
        case 129:
        case 137:
            VAR_21->create_request = VAR_5;
            VAR_21->process_request_body = VAR_10;
            VAR_21->input_filter = ((void*)0);

            VAR_21->retry_handler = VAR_19;
            return &VAR_21->tfs_peer_servers[VAR_0];

        case 133:
            VAR_21->input_filter = ((void*)0);
            VAR_21->retry_handler = ((void*)0);
            return VAR_21->tfs_peer;
        default:
            return ((void*)0);
        }
        break;
    case 166:
    case 167:
    case 163:
    case 164:
    case 162:
    case 161:
    case 159:
        switch (VAR_21->state) {
        case 153:
            VAR_21->create_request = VAR_8;
            VAR_21->process_request_body = VAR_17;
            VAR_21->input_filter = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_3];

        case 155:
            VAR_21->create_request = VAR_9;
            VAR_21->process_request_body = VAR_18;
            VAR_21->input_filter = ((void*)0);
            return &VAR_21->tfs_peer_servers[VAR_4];

        case 154:
            VAR_21->create_request = VAR_6;
            if (VAR_21->r_ctx.action.code == 164) {
                VAR_21->process_request_body = VAR_15;
                VAR_21->input_filter = VAR_14;
            } else {
                VAR_21->process_request_body = VAR_13;
                VAR_21->input_filter = ((void*)0);
            }
            return &VAR_21->tfs_peer_servers[VAR_1];

        case 156:
            VAR_21->input_filter = ((void*)0);
            return VAR_21->tfs_peer;
        default:
            return ((void*)0);
        }
        break;
    default:
        break;
    }

    return ((void*)0);
}
