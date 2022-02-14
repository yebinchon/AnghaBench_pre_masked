
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int ngx_http_grpc_frame_t ;
struct TYPE_11__ {int free; } ;
typedef TYPE_2__ ngx_http_grpc_ctx_t ;
struct TYPE_12__ {TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_13__ {int temporary; int flush; scalar_t__ tag; int * end; int * last; int * pos; int * start; } ;
typedef TYPE_4__ ngx_buf_t ;


 TYPE_3__* FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_chain_t *
FUNC_3(ngx_http_request_t *VAR_1, ngx_http_grpc_ctx_t *VAR_2)
{
    u_char *VAR_3;
    ngx_buf_t *VAR_4;
    ngx_chain_t *VAR_5;

    VAR_5 = FUNC_0(VAR_1->pool, &VAR_2->free);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4 = VAR_5->buf;
    VAR_3 = VAR_4->start;

    if (VAR_3 == ((void*)0)) {






        VAR_3 = FUNC_2(VAR_1->pool, 2 * sizeof(ngx_http_grpc_frame_t) + 8);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }

    }

    FUNC_1(VAR_4, sizeof(ngx_buf_t));

    VAR_4->start = VAR_3;
    VAR_4->pos = VAR_3;
    VAR_4->last = VAR_3;
    VAR_4->end = VAR_3 + 2 * sizeof(ngx_http_grpc_frame_t) + 8;

    VAR_4->tag = (ngx_buf_tag_t) &VAR_0;
    VAR_4->temporary = 1;
    VAR_4->flush = 1;

    return VAR_5;
}
