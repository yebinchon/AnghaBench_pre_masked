
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


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_20__ {int s_addr; } ;
struct sockaddr_in {TYPE_5__ sin_addr; } ;
struct TYPE_16__ {int len; int * data; } ;
struct TYPE_17__ {TYPE_1__ appkey; } ;
struct TYPE_22__ {int pool; TYPE_4__* loc_conf; TYPE_2__ r_ctx; } ;
typedef TYPE_7__ ngx_http_tfs_t ;
struct TYPE_21__ {scalar_t__ len; int crc; int id; int version; int type; int flag; } ;
struct TYPE_23__ {TYPE_6__ header; scalar_t__ appkey_len; } ;
typedef TYPE_8__ ngx_http_tfs_rcs_login_msg_header_t ;
struct TYPE_24__ {int * next; TYPE_10__* buf; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_15__ {char* last; scalar_t__ pos; } ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_19__ {TYPE_3__* upstream; } ;
struct TYPE_18__ {struct sockaddr_in local_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_0 (int ) ;
 TYPE_10__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int *,int) ;

ngx_chain_t *
FUNC_5(ngx_http_tfs_t *VAR_3)
{
    ngx_buf_t *VAR_4;
    ngx_chain_t *VAR_5;
    struct sockaddr_in *VAR_6;
    ngx_http_tfs_rcs_login_msg_header_t *VAR_7;

    VAR_4 = FUNC_1(VAR_3->pool,
                            sizeof(ngx_http_tfs_rcs_login_msg_header_t)
                             + sizeof(uint64_t) + VAR_3->r_ctx.appkey.len + 1);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = (ngx_http_tfs_rcs_login_msg_header_t *) VAR_4->pos;
    VAR_7->header.flag = VAR_0;
    VAR_7->header.len = sizeof(uint64_t) + VAR_3->r_ctx.appkey.len
                       + sizeof(uint32_t) + 1;
    VAR_7->header.type = VAR_2;
    VAR_7->header.version = VAR_1;
    VAR_7->header.id = FUNC_3();

    VAR_7->appkey_len = VAR_3->r_ctx.appkey.len + 1;

    VAR_4->last += sizeof(ngx_http_tfs_rcs_login_msg_header_t);


    FUNC_4(VAR_4->last, VAR_3->r_ctx.appkey.data, VAR_3->r_ctx.appkey.len);
    VAR_4->last += VAR_3->r_ctx.appkey.len;
    *(VAR_4->last) = '\0';
    VAR_4->last += 1;


    VAR_6 = &(VAR_3->loc_conf->upstream->local_addr);
    FUNC_4(VAR_4->last, &(VAR_6->sin_addr.s_addr), sizeof(uint64_t));
    VAR_4->last += sizeof(uint64_t);

    VAR_7->header.crc = FUNC_2(VAR_0,
                                       (const char *) (&VAR_7->header + 1),
                                       VAR_7->header.len);

    VAR_5 = FUNC_0(VAR_3->pool);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->buf = VAR_4;
    VAR_5->next = ((void*)0);

    return VAR_5;
}
