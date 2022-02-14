
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_30__ {int segment_index; size_t last_write_segment_index; TYPE_9__* segment_data; int cluster_id; } ;
struct TYPE_25__ {int len; int data; } ;
struct TYPE_20__ {TYPE_1__ file_path_s; int user_id; int app_id; } ;
struct TYPE_32__ {int pool; TYPE_6__ file; int log; TYPE_3__* loc_conf; TYPE_10__ r_ctx; } ;
typedef TYPE_8__ ngx_http_tfs_t ;
struct TYPE_29__ {int size; int offset; int file_id; int block_id; } ;
struct TYPE_33__ {TYPE_5__ segment_info; } ;
typedef TYPE_9__ ngx_http_tfs_segment_data_t ;
typedef TYPE_10__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_31__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_21__ {int file_len; TYPE_7__ header; int file_path_s; int user_id; int app_id; } ;
typedef TYPE_11__ ngx_http_tfs_ms_base_msg_header_t ;
typedef int ngx_http_tfs_meta_frag_meta_info_t ;
struct TYPE_22__ {int frag_count; TYPE_4__* frag_meta; int cluster_id; } ;
typedef TYPE_12__ ngx_http_tfs_meta_frag_info_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_23__ {int * next; TYPE_14__* buf; } ;
typedef TYPE_13__ ngx_chain_t ;
struct TYPE_24__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_14__ ngx_buf_t ;
struct TYPE_28__ {int size; int offset; int file_id; int block_id; } ;
struct TYPE_26__ {int version; } ;
struct TYPE_27__ {TYPE_2__ meta_server_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_13__* FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int) ;
 TYPE_14__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 (TYPE_9__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,char*,size_t,int) ;

__attribute__((used)) static ngx_chain_t *
FUNC_7(ngx_http_tfs_t *VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6, VAR_7;
    ngx_buf_t *VAR_8;
    ngx_int_t VAR_9, VAR_10;
    ngx_chain_t *VAR_11;
    ngx_http_tfs_restful_ctx_t *VAR_12;
    ngx_http_tfs_segment_data_t *VAR_13;
    ngx_http_tfs_meta_frag_info_t *VAR_14;
    ngx_http_tfs_ms_base_msg_header_t *VAR_15;

    VAR_12 = &VAR_4->r_ctx;
    VAR_9 =
        VAR_4->file.segment_index - VAR_4->file.last_write_segment_index;
    FUNC_6(VAR_3, VAR_4->log, 0 ,
                   "last_write_segment_index: %uD, segment_index: %uD",
                   VAR_4->file.last_write_segment_index, VAR_4->file.segment_index);

    VAR_7 = sizeof(ngx_http_tfs_meta_frag_info_t) +
        sizeof(ngx_http_tfs_meta_frag_meta_info_t) * VAR_9;

    VAR_6 = sizeof(ngx_http_tfs_ms_base_msg_header_t) +
        VAR_12->file_path_s.len + 1 +

        sizeof(uint64_t) +
        VAR_7;

    VAR_8 = FUNC_2(VAR_4->pool, VAR_6);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_15 = (ngx_http_tfs_ms_base_msg_header_t *) VAR_8->pos;
    VAR_15->header.type = VAR_2;
    VAR_15->header.flag = VAR_0;
    VAR_15->header.version = VAR_1;
    VAR_15->header.id = FUNC_5();
    VAR_15->app_id = VAR_12->app_id;
    VAR_15->user_id = VAR_12->user_id;
    VAR_15->file_len = VAR_12->file_path_s.len + 1;
    VAR_5 = FUNC_1(VAR_15->file_path_s, VAR_12->file_path_s.data,
                   VAR_12->file_path_s.len + 1);

    *((uint64_t *)VAR_5) = VAR_4->loc_conf->meta_server_table.version;

    VAR_14 = (ngx_http_tfs_meta_frag_info_t*)(VAR_5 + sizeof(uint64_t));
    VAR_14->cluster_id = VAR_4->file.cluster_id;
    VAR_14->frag_count = VAR_9;
    VAR_13 = &VAR_4->file.segment_data[VAR_4->file.last_write_segment_index];
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {



        VAR_14->frag_meta[VAR_10].block_id = VAR_13->segment_info.block_id;
        VAR_14->frag_meta[VAR_10].file_id = VAR_13->segment_info.file_id;
        VAR_14->frag_meta[VAR_10].offset = VAR_13->segment_info.offset;
        VAR_14->frag_meta[VAR_10].size = VAR_13->segment_info.size;
        VAR_13++;
    }
    VAR_4->file.last_write_segment_index += VAR_9;

    VAR_8->last += VAR_6;

    VAR_15->header.len = VAR_6 - sizeof(ngx_http_tfs_header_t);
    VAR_15->header.crc = FUNC_3(VAR_0,
                                       (const char *) (&VAR_15->header + 1),
                                       VAR_6 - sizeof(ngx_http_tfs_header_t));

    VAR_11 = FUNC_0(VAR_4->pool);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_11->buf = VAR_8;
    VAR_11->next = ((void*)0);

    return VAR_11;
}
