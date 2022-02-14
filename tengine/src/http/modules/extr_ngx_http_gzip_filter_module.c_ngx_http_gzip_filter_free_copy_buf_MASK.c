
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_4__* copied; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_10__ {TYPE_1__* buf; struct TYPE_10__* next; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_7__ {int start; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(ngx_http_request_t *VAR_0,
    ngx_http_gzip_ctx_t *VAR_1)
{
    ngx_chain_t *VAR_2;

    for (VAR_2 = VAR_1->copied; VAR_2; VAR_2 = VAR_2->next) {
        FUNC_0(VAR_0->pool, VAR_2->buf->start);
    }

    VAR_1->copied = ((void*)0);
}
