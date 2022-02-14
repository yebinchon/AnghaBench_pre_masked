
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handler; int * data; struct TYPE_7__* next; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_8__ {TYPE_1__* pool; scalar_t__ filter_finalize; scalar_t__ internal; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_realip_ctx_t ;
struct TYPE_6__ {TYPE_2__* cleanup; } ;


 int * FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_http_realip_ctx_t *
FUNC_1(ngx_http_request_t *VAR_2)
{
    ngx_pool_cleanup_t *VAR_3;
    ngx_http_realip_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_1);

    if (VAR_4 == ((void*)0) && (VAR_2->internal || VAR_2->filter_finalize)) {






        for (VAR_3 = VAR_2->pool->cleanup; VAR_3; VAR_3 = VAR_3->next) {
            if (VAR_3->handler == VAR_0) {
                VAR_4 = VAR_3->data;
                break;
            }
        }
    }

    return VAR_4;
}
