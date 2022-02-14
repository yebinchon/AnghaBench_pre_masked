
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int tag; } ;
struct TYPE_10__ {TYPE_2__ output; int free_bufs; TYPE_5__* out_bufs; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_12__ {TYPE_1__* buf; struct TYPE_12__* next; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_8__ {int flush; int memory; int tag; int * last; int * pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_tfs_t *VAR_2, ssize_t VAR_3, u_char *VAR_4)
{
    ngx_http_request_t *VAR_5 = VAR_2->data;

    ngx_chain_t *VAR_6, **VAR_7;

    for (VAR_6 = VAR_2->out_bufs, VAR_7 = &VAR_2->out_bufs; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = &VAR_6->next;
    }

    VAR_6 = FUNC_0(VAR_5->pool, &VAR_2->free_bufs);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_6;

    VAR_6->buf->flush = 1;
    VAR_6->buf->memory = 1;

    VAR_6->buf->pos = VAR_4;
    VAR_6->buf->last = VAR_4 + VAR_3;
    VAR_6->buf->tag = VAR_2->output.tag;

    return VAR_1;
}
