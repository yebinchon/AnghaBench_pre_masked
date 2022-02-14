
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
struct TYPE_22__ {int len; int * data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_20__ {int code; } ;
struct TYPE_24__ {TYPE_3__ action; int user_id; int app_id; } ;
struct TYPE_23__ {int pool; TYPE_2__* loc_conf; TYPE_7__ r_ctx; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
typedef TYPE_7__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_21__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_25__ {int file_len; TYPE_4__ header; int * file_path_s; int user_id; int app_id; } ;
typedef TYPE_8__ ngx_http_tfs_ms_base_msg_header_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_26__ {int * next; TYPE_10__* buf; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_17__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_18__ {int version; } ;
struct TYPE_19__ {TYPE_1__ meta_server_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 TYPE_10__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_5(ngx_http_tfs_t *VAR_3, ngx_str_t *VAR_4,
    ngx_str_t *VAR_5)
{
    size_t VAR_6;
    u_char *VAR_7;
    ngx_buf_t *VAR_8;
    ngx_chain_t *VAR_9;
    ngx_http_tfs_restful_ctx_t *VAR_10;
    ngx_http_tfs_ms_base_msg_header_t *VAR_11;

    VAR_10 = &VAR_3->r_ctx;

    VAR_6 = sizeof(ngx_http_tfs_ms_base_msg_header_t) +

        VAR_4->len +

        sizeof(uint64_t) +

        sizeof(uint32_t) +

        1 +

        sizeof(uint8_t);

    if (VAR_5 != ((void*)0) && VAR_5->data != ((void*)0)) {
        VAR_6 += VAR_5->len + 1;
    }

    VAR_8 = FUNC_2(VAR_3->pool, VAR_6);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_11 = (ngx_http_tfs_ms_base_msg_header_t *) VAR_8->pos;
    VAR_11->header.type = VAR_0;
    VAR_11->header.len = VAR_6 - sizeof(ngx_http_tfs_header_t);
    VAR_11->header.flag = VAR_1;
    VAR_11->header.version = VAR_2;
    VAR_11->header.id = FUNC_4();
    VAR_11->app_id = VAR_10->app_id;
    VAR_11->user_id = VAR_10->user_id;
    VAR_11->file_len = VAR_4->len + 1;
    VAR_7 = FUNC_1(VAR_11->file_path_s, VAR_4->data, VAR_4->len + 1);

    *((uint64_t *)VAR_7) = VAR_3->loc_conf->meta_server_table.version;
    VAR_7 += sizeof(uint64_t);

    if (VAR_5 != ((void*)0) && VAR_5->data != ((void*)0)) {

        *((uint32_t *)VAR_7) = VAR_5->len + 1;
        VAR_7 += sizeof(uint32_t);
        VAR_7 = FUNC_1(VAR_7, VAR_5->data, VAR_5->len + 1);

    } else {
        *((uint32_t *)VAR_7) = 0;
        VAR_7 += sizeof(uint32_t);
    }


    *VAR_7 = VAR_10->action.code;

    VAR_11->header.crc = FUNC_3(VAR_1,
                                       (const char *) (&VAR_11->header + 1),
                                       VAR_11->header.len);
    VAR_8->last += VAR_6;

    VAR_9 = FUNC_0(VAR_3->pool);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_9->buf = VAR_8;
    VAR_9->next = ((void*)0);

    return VAR_9;
}
