
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_10__ {size_t len; int crc; int id; int version; int flag; int type; } ;
struct TYPE_12__ {TYPE_1__ header; int value2; int cmd; } ;
typedef TYPE_3__ ngx_http_tfs_ns_ctl_request_t ;
typedef int ngx_http_tfs_header_t ;
struct TYPE_13__ {int * next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_14__ {size_t last; scalar_t__ pos; } ;
typedef TYPE_5__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static ngx_chain_t *
FUNC_4(ngx_http_tfs_t *VAR_4, uint8_t VAR_5)
{
    size_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_chain_t *VAR_8;
    ngx_http_tfs_ns_ctl_request_t *VAR_9;

    VAR_6 = sizeof(ngx_http_tfs_ns_ctl_request_t);

    VAR_7 = FUNC_1(VAR_4->pool, VAR_6);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_9 = (ngx_http_tfs_ns_ctl_request_t *) VAR_7->pos;
    VAR_9->header.type = VAR_0;
    VAR_9->header.len = VAR_6 - sizeof(ngx_http_tfs_header_t);
    VAR_9->header.flag = VAR_2;
    VAR_9->header.version = VAR_3;
    VAR_9->header.id = FUNC_3();
    VAR_9->cmd = VAR_1;
    VAR_9->value2 = VAR_5;

    VAR_9->header.crc = FUNC_2(VAR_2,
                                       (const char *) (&VAR_9->header + 1),
                                       VAR_9->header.len);

    VAR_7->last += VAR_6;

    VAR_8 = FUNC_0(VAR_4->pool);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->buf = VAR_7;
    VAR_8->next = ((void*)0);

    return VAR_8;
}
