
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_12__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int size; } ;
struct TYPE_13__ {int log; TYPE_3__ stat_info; TYPE_2__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_14__ {int code; int error_len; int error_str; } ;
typedef TYPE_6__ ngx_http_tfs_status_msg_t ;
struct TYPE_15__ {int type; } ;
typedef TYPE_7__ ngx_http_tfs_header_t ;
typedef int int32_t ;
struct TYPE_9__ {scalar_t__ pos; } ;
struct TYPE_10__ {TYPE_1__ body_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned long long*) ;
 int FUNC_1 (int ,int ,int ,char*,int,...) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_6)
{
    int32_t VAR_7, VAR_8;
    uint16_t VAR_9;
    uint64_t VAR_10;
    ngx_str_t VAR_11;
    ngx_int_t VAR_12;
    ngx_http_tfs_header_t *VAR_13;
    ngx_http_tfs_status_msg_t *VAR_14;

    VAR_13 = (ngx_http_tfs_header_t *) VAR_6->header;
    VAR_9 = VAR_13->type;

    switch (VAR_9) {
    case 128:
        VAR_14 = (ngx_http_tfs_status_msg_t *) VAR_6->tfs_peer->body_buffer.pos;
        VAR_11.len = 0;
        VAR_7 = VAR_14->code;

        if (VAR_7 != VAR_2) {
            VAR_8 = VAR_14->error_len;
            if (VAR_8 > 0) {
                VAR_11.data = VAR_14->error_str;
                VAR_11.len = VAR_8;
            }

            FUNC_1(VAR_3, VAR_6->log, 0,
                          "remove_file failed, error code (%d) err_msg(%V)",
                          VAR_7, &VAR_11);
            if (VAR_7 <= VAR_1) {
                return VAR_7;
            }

            return VAR_1;
        }


        VAR_8 = VAR_14->error_len;
        VAR_10 = 0;
        if (VAR_8 > 1) {
            VAR_12 = FUNC_0(VAR_14->error_str,
                                     VAR_8 - 1,
                                     (unsigned long long *) &VAR_10);
            if (VAR_12 == VAR_0) {
                return VAR_0;
            }
            VAR_6->stat_info.size += VAR_10;
        }

        FUNC_1(VAR_4, VAR_6->log, 0,
                      "remove_file success, file_size: %uL ",
                      VAR_10);

        return VAR_5;
    default:
        FUNC_1(VAR_4, VAR_6->log, 0,
                      "remove file(ds) response msg type is invalid %d ", VAR_9);
    }

    return VAR_0;
}
