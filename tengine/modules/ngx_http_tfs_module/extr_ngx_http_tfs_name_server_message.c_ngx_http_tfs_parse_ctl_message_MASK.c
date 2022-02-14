
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int cluster_id; } ;
struct TYPE_9__ {int group_count; int group_seq; int log; TYPE_2__ file; TYPE_5__* tfs_peer; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_10__ {scalar_t__ code; scalar_t__ error_len; int error_str; } ;
typedef TYPE_4__ ngx_http_tfs_status_msg_t ;
struct TYPE_7__ {scalar_t__ pos; } ;
struct TYPE_11__ {TYPE_1__ body_buffer; } ;
typedef TYPE_5__ ngx_http_tfs_peer_connection_t ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,...) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_5, uint8_t VAR_6)
{
    uint32_t VAR_7;
    ngx_int_t VAR_8;
    ngx_http_tfs_status_msg_t *VAR_9;
    ngx_http_tfs_peer_connection_t *VAR_10;

    VAR_10 = VAR_5->tfs_peer;
    VAR_9 = (ngx_http_tfs_status_msg_t *) VAR_10->body_buffer.pos;
    VAR_7 = VAR_9->code;

    if (VAR_7 == VAR_1 && VAR_9->error_len > 0) {
        switch(VAR_6) {
        case 130:
            VAR_8 = FUNC_0(VAR_9->error_str, VAR_9->error_len - 1);
            VAR_8 = VAR_8 - '0';

            if (VAR_8 == VAR_0) {
                FUNC_1(VAR_2, VAR_5->log, 0,
                              "invalid cluster id \"%s\" ", VAR_9->error_str);
                return VAR_0;
            }

            VAR_5->file.cluster_id = VAR_8;
            break;
        case 129:
            VAR_5->group_count = FUNC_0(VAR_9->error_str, VAR_9->error_len - 1);
            if (VAR_5->group_count == VAR_0 || VAR_5->group_count <= 0) {
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "invalid  group count \"%s\" ", VAR_9->error_str);
                VAR_5->group_count = 1;
            }
            break;
        case 128:
            VAR_5->group_seq = FUNC_0(VAR_9->error_str, VAR_9->error_len - 1);
            if (VAR_5->group_seq == VAR_0 || VAR_5->group_seq < 0) {
                FUNC_1(VAR_3, VAR_5->log, 0,
                              "invalid  group seq \"%s\" ", VAR_9->error_str);
                VAR_5->group_seq = 0;
            }
        }

    } else {
        FUNC_1(VAR_2, VAR_5->log, 0,
                      "tfs name server ctl message invalid");
        return VAR_0;
    }

    return VAR_4;
}
