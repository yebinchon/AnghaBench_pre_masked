
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ngx_pool_t ;
struct TYPE_8__ {int len; int id; int crc; int version; int type; int flag; } ;
struct TYPE_9__ {TYPE_1__ header; } ;
typedef TYPE_2__ ngx_http_tfs_rs_request_t ;
struct TYPE_10__ {int * next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_11__ {int last; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 () ;

ngx_chain_t *
FUNC_4(ngx_pool_t *VAR_3)
{
    ngx_buf_t *VAR_4;
    ngx_chain_t *VAR_5;
    ngx_http_tfs_rs_request_t *VAR_6;

    VAR_4 = FUNC_1(VAR_3, sizeof(ngx_http_tfs_rs_request_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6 = (ngx_http_tfs_rs_request_t *) VAR_4->pos;
    VAR_6->header.flag = VAR_0;
    VAR_6->header.len = sizeof(uint8_t);
    VAR_6->header.type = VAR_2;
    VAR_6->header.version = VAR_1;
    VAR_6->header.crc = FUNC_2(VAR_0,
                                       (const char *) (&VAR_6->header + 1),
                                       VAR_6->header.len);
    VAR_6->header.id = FUNC_3();

    VAR_4->last += sizeof(ngx_http_tfs_rs_request_t);

    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->buf = VAR_4;
    VAR_5->next = ((void*)0);

    return VAR_5;
}
