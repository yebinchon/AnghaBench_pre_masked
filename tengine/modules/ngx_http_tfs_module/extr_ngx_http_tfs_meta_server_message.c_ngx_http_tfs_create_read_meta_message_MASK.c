
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef size_t uint64_t ;
typedef int u_char ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_22__ {TYPE_1__ file_path_s; int user_id; int app_id; } ;
struct TYPE_21__ {int pool; int has_split_frag; int log; TYPE_4__* main_conf; TYPE_3__* loc_conf; TYPE_7__ r_ctx; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
typedef TYPE_7__ ngx_http_tfs_restful_ctx_t ;
typedef int ngx_http_tfs_ms_read_response_t ;
struct TYPE_20__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_23__ {int file_len; TYPE_5__ header; int file_path_s; int user_id; int app_id; } ;
typedef TYPE_8__ ngx_http_tfs_ms_base_msg_header_t ;
typedef int ngx_http_tfs_meta_frag_meta_info_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_24__ {int * next; TYPE_10__* buf; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_15__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_10__ ngx_buf_t ;
typedef size_t int64_t ;
struct TYPE_19__ {int body_buffer_size; } ;
struct TYPE_17__ {size_t version; } ;
struct TYPE_18__ {TYPE_2__ meta_server_table; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_9__* FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int) ;
 TYPE_10__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,char*,size_t,size_t,size_t) ;

__attribute__((used)) static ngx_chain_t *
FUNC_6(ngx_http_tfs_t *VAR_7, int64_t VAR_8,
    uint64_t VAR_9)
{
    u_char *VAR_10;
    size_t VAR_11, VAR_12, VAR_13;
    ngx_buf_t *VAR_14;
    ngx_chain_t *VAR_15;
    ngx_http_tfs_restful_ctx_t *VAR_16;
    ngx_http_tfs_ms_base_msg_header_t *VAR_17;

    VAR_16 = &VAR_7->r_ctx;

    VAR_11 = sizeof(ngx_http_tfs_ms_base_msg_header_t) +

        VAR_16->file_path_s.len +

        1 +

        sizeof(uint64_t) +

        sizeof(uint64_t) +

        sizeof(uint64_t);

    VAR_14 = FUNC_2(VAR_7->pool, VAR_11);
    if (VAR_14 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_17 = (ngx_http_tfs_ms_base_msg_header_t *) VAR_14->pos;
    VAR_17->header.type = VAR_4;
    VAR_17->header.len = VAR_11 - sizeof(ngx_http_tfs_header_t);
    VAR_17->header.flag = VAR_2;
    VAR_17->header.version = VAR_3;
    VAR_17->header.id = FUNC_4();
    VAR_17->app_id = VAR_16->app_id;
    VAR_17->user_id = VAR_16->user_id;
    VAR_17->file_len = VAR_16->file_path_s.len + 1;
    VAR_10 = FUNC_1(VAR_17->file_path_s, VAR_16->file_path_s.data,
                   VAR_16->file_path_s.len + 1);

    *((uint64_t *)VAR_10) = VAR_7->loc_conf->meta_server_table.version;
    VAR_10 += sizeof(uint64_t);

    *((uint64_t *) VAR_10) = VAR_8;
    VAR_10 += sizeof(uint64_t);

    VAR_12 = (VAR_7->main_conf->body_buffer_size
                      - sizeof(ngx_http_tfs_ms_read_response_t))
        / sizeof(ngx_http_tfs_meta_frag_meta_info_t);
    VAR_13 = VAR_9 / (VAR_0);

    FUNC_5(VAR_6, VAR_7->log, 0 ,
                  "max_frag_count: %uz, req_frag_count: %uz, data size: %uz",
                  VAR_12, VAR_13, VAR_9);

    if (VAR_13 > VAR_12) {
        *((uint64_t *) VAR_10) =
            (VAR_12 - 1) * VAR_0;
        VAR_7->has_split_frag = VAR_5;

    } else {
        *((uint64_t *) VAR_10) = VAR_9;
        VAR_7->has_split_frag = VAR_1;
    }

    VAR_17->header.crc = FUNC_3(VAR_2,
                                       (const char *) (&VAR_17->header + 1),
                                       VAR_17->header.len);

    VAR_14->last += VAR_11;

    VAR_15 = FUNC_0(VAR_7->pool);
    if (VAR_15 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_15->buf = VAR_14;
    VAR_15->next = ((void*)0);

    return VAR_15;
}
