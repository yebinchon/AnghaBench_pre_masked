
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint16_t ;
typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {int offset; int size; int u_size; int modify_time; int create_time; scalar_t__ crc; int flag; int id; } ;
struct TYPE_14__ {int fsname; } ;
struct TYPE_17__ {TYPE_9__ file_stat; TYPE_1__ r_ctx; int is_large_file; int log; TYPE_5__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_segment_head_t ;
typedef int ngx_http_tfs_segment_data_t ;
struct TYPE_13__ {scalar_t__ pos; } ;
struct TYPE_18__ {TYPE_10__ body_buffer; } ;
typedef TYPE_5__ ngx_http_tfs_peer_connection_t ;
struct TYPE_19__ {int type; } ;
typedef TYPE_6__ ngx_http_tfs_header_t ;
struct TYPE_20__ {scalar_t__ data_len; int file_info; } ;
typedef TYPE_7__ ngx_http_tfs_ds_stat_response_t ;
struct TYPE_16__ {int size; } ;
struct TYPE_15__ {int u_size; } ;
struct TYPE_21__ {int data_len; scalar_t__ file_info_len; TYPE_3__ seg_head; TYPE_2__ file_info; } ;
typedef TYPE_8__ ngx_http_tfs_ds_sp_readv2_response_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_10__*,int *,int ) ;
 int FUNC_3 (int *,TYPE_9__*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_6,
    ngx_http_tfs_segment_data_t *VAR_7)
{
    uint16_t VAR_8;
    ngx_int_t VAR_9;
    ngx_str_t VAR_10;
    ngx_http_tfs_header_t *VAR_11;
    ngx_http_tfs_peer_connection_t *VAR_12;
    ngx_http_tfs_ds_stat_response_t *VAR_13;
    ngx_http_tfs_ds_sp_readv2_response_t *VAR_14;


    VAR_11 = (ngx_http_tfs_header_t *) VAR_6->header;
    VAR_12 = VAR_6->tfs_peer;
    VAR_8 = VAR_11->type;

    switch (VAR_8) {
    case 128:
        FUNC_4(&VAR_10, "stat file(data server)");
        VAR_9 = FUNC_2(&VAR_12->body_buffer, &VAR_10, VAR_6->log);
        return VAR_9;
    }

    if (!VAR_6->is_large_file) {
        VAR_13 = (ngx_http_tfs_ds_stat_response_t *) VAR_12->body_buffer.pos;
        if (VAR_13->data_len <= 0) {
            return VAR_2;
        }
        FUNC_3(&VAR_13->file_info, &VAR_6->file_stat);

    } else {
        VAR_14 = (ngx_http_tfs_ds_sp_readv2_response_t *) VAR_12->body_buffer.pos;
        if (VAR_14->data_len == VAR_3) {
            FUNC_1(VAR_6, VAR_7);
            return VAR_0;
        }


        if (VAR_14->data_len == VAR_1) {
            VAR_6->file_stat.id =
                     FUNC_0(VAR_6->r_ctx.fsname);
            VAR_6->file_stat.offset = -1;
            VAR_6->file_stat.size = -1;
            VAR_6->file_stat.u_size = -1;
            VAR_6->file_stat.modify_time = -1;
            VAR_6->file_stat.create_time = -1;
            VAR_6->file_stat.flag = VAR_4;
            VAR_6->file_stat.crc = 0;

        } else {
            if (VAR_14->data_len != sizeof(ngx_http_tfs_segment_head_t)
                || VAR_14->file_info_len <= 0)
            {
                return VAR_2;
            }
            VAR_6->file_stat.size = VAR_14->seg_head.size;
            VAR_6->file_stat.u_size =
                                 VAR_14->file_info.u_size + VAR_14->seg_head.size;
        }

    }

    return VAR_5;
}
