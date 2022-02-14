
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_7__ {TYPE_2__* free_bufs; } ;
typedef TYPE_1__ ngx_http_charset_ctx_t ;
struct TYPE_8__ {TYPE_5__* buf; struct TYPE_8__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_9__ {scalar_t__ tag; int * shadow; } ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static ngx_chain_t *
FUNC_2(ngx_pool_t *VAR_1, ngx_http_charset_ctx_t *VAR_2)
{
    ngx_chain_t *VAR_3;

    VAR_3 = VAR_2->free_bufs;

    if (VAR_3) {
        VAR_2->free_bufs = VAR_3->next;

        VAR_3->buf->shadow = ((void*)0);
        VAR_3->next = ((void*)0);

        return VAR_3;
    }

    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->buf = FUNC_1(VAR_1);
    if (VAR_3->buf == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->next = ((void*)0);

    VAR_3->buf->tag = (ngx_buf_tag_t) &VAR_0;

    return VAR_3;
}
