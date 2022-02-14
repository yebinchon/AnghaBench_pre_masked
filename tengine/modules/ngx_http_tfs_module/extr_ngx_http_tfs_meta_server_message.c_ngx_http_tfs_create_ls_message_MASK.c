
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


typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_char ;
struct TYPE_14__ {int len; int data; } ;
struct TYPE_19__ {int user_id; int app_id; } ;
struct TYPE_18__ {int pool; TYPE_3__* loc_conf; int last_file_type; TYPE_1__ last_file_path; int last_file_pid; TYPE_6__ r_ctx; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
typedef TYPE_6__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_17__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_20__ {int file_len; TYPE_4__ header; int file_path; int pid; int user_id; int app_id; } ;
typedef TYPE_7__ ngx_http_tfs_ms_ls_msg_header_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_21__ {int * next; TYPE_9__* buf; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_22__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_15__ {int version; } ;
struct TYPE_16__ {TYPE_2__ meta_server_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_8__* FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int) ;
 TYPE_9__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_5(ngx_http_tfs_t *VAR_3)
{
    size_t VAR_4;
    u_char *VAR_5;
    ngx_buf_t *VAR_6;
    ngx_chain_t *VAR_7;
    ngx_http_tfs_restful_ctx_t *VAR_8;
    ngx_http_tfs_ms_ls_msg_header_t *VAR_9;

    VAR_8 = &VAR_3->r_ctx;

    VAR_4 = sizeof(ngx_http_tfs_ms_ls_msg_header_t) +

        VAR_3->last_file_path.len +

        1 +

        sizeof(uint8_t) +

        sizeof(uint64_t);

    VAR_6 = FUNC_2(VAR_3->pool, VAR_4);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_9 = (ngx_http_tfs_ms_ls_msg_header_t *) VAR_6->pos;
    VAR_9->header.type = VAR_0;
    VAR_9->header.len = VAR_4 - sizeof(ngx_http_tfs_header_t);
    VAR_9->header.flag = VAR_1;
    VAR_9->header.version = VAR_2;
    VAR_9->header.id = FUNC_4();
    VAR_9->app_id = VAR_8->app_id;
    VAR_9->user_id = VAR_8->user_id;
    VAR_9->file_len = VAR_3->last_file_path.len + 1;
    VAR_9->pid = VAR_3->last_file_pid;
    VAR_5 = FUNC_1(VAR_9->file_path, VAR_3->last_file_path.data,
                   VAR_3->last_file_path.len + 1);

    *VAR_5 = VAR_3->last_file_type;
    VAR_5 += sizeof(uint8_t);

    *((uint64_t *)VAR_5) = VAR_3->loc_conf->meta_server_table.version;

    VAR_9->header.crc = FUNC_3(VAR_1,
                                       (const char *) (&VAR_9->header + 1),
                                       VAR_9->header.len);
    VAR_6->last += VAR_4;

    VAR_7 = FUNC_0(VAR_3->pool);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->buf = VAR_6;
    VAR_7->next = ((void*)0);

    return VAR_7;
}
