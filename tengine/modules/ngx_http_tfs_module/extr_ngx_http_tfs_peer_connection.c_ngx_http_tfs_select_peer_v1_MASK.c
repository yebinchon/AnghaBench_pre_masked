
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int code; } ;
struct TYPE_6__ {TYPE_1__ action; } ;
struct TYPE_7__ {int * tfs_peer_servers; int * input_filter; void* process_request_body; void* create_request; int * retry_handler; int state; int * tfs_peer; TYPE_2__ r_ctx; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_peer_connection_t ;







 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

__attribute__((used)) static ngx_http_tfs_peer_connection_t *
FUNC_0(ngx_http_tfs_t *VAR_13)
{
    switch (VAR_13->r_ctx.action.code) {
    case 156:
        switch (VAR_13->state) {
        case 143:
            VAR_13->create_request = VAR_5;
            VAR_13->process_request_body = VAR_10;
            VAR_13->input_filter = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_2];

        case 146:
        case 145:
        case 147:
            VAR_13->create_request = VAR_4;
            VAR_13->process_request_body = VAR_9;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_1];

        case 142:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_6;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_11;
            return &VAR_13->tfs_peer_servers[VAR_0];

        case 144:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_8;
            VAR_13->input_filter = VAR_7;
            VAR_13->retry_handler = VAR_11;
            return &VAR_13->tfs_peer_servers[VAR_0];

        case 149:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_6;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_0];

        case 148:
            return VAR_13->tfs_peer;

        default:
            return ((void*)0);
        }
        break;
    case 157:
        switch (VAR_13->state) {
        case 150:
            VAR_13->create_request = VAR_5;
            VAR_13->process_request_body = VAR_10;
            VAR_13->input_filter = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_2];

        case 152:
            VAR_13->create_request = VAR_4;
            VAR_13->process_request_body = VAR_9;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_12;
            return &VAR_13->tfs_peer_servers[VAR_1];

        case 151:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_8;
            VAR_13->input_filter = VAR_7;
            VAR_13->retry_handler = VAR_11;
            return &VAR_13->tfs_peer_servers[VAR_0];

        case 153:
            VAR_13->input_filter = ((void*)0);
            return VAR_13->tfs_peer;

        default:
            return ((void*)0);
        }
        break;
    case 154:
        switch (VAR_13->state) {
        case 130:
            VAR_13->create_request = VAR_5;
            VAR_13->process_request_body = VAR_10;
            VAR_13->input_filter = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_2];

        case 132:
        case 131:
        case 137:
        case 133:
            VAR_13->create_request = VAR_4;
            VAR_13->process_request_body = VAR_9;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_12;
            return &VAR_13->tfs_peer_servers[VAR_1];

        case 129:
        case 136:
        case 128:
        case 138:
        case 135:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_6;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_11;
            return &VAR_13->tfs_peer_servers[VAR_0];

        case 134:
            VAR_13->input_filter = ((void*)0);
            return VAR_13->tfs_peer;
        default:
            return ((void*)0);
        }
        break;
    case 155:
        switch (VAR_13->state) {
        case 140:
            VAR_13->create_request = VAR_5;
            VAR_13->process_request_body = VAR_10;
            VAR_13->input_filter = ((void*)0);
            return &VAR_13->tfs_peer_servers[VAR_2];

        case 141:
            VAR_13->create_request = VAR_4;
            VAR_13->process_request_body = VAR_9;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_12;
            return &VAR_13->tfs_peer_servers[VAR_1];

        case 139:
            VAR_13->create_request = VAR_3;
            VAR_13->process_request_body = VAR_6;
            VAR_13->input_filter = ((void*)0);
            VAR_13->retry_handler = VAR_11;
            return &VAR_13->tfs_peer_servers[VAR_0];

        default:
            return ((void*)0);
        }
        break;

    case 158:
        VAR_13->create_request = VAR_5;
        VAR_13->process_request_body = VAR_10;
        VAR_13->input_filter = ((void*)0);
        return &VAR_13->tfs_peer_servers[VAR_2];

    default:
        break;
    }

    return ((void*)0);
}
