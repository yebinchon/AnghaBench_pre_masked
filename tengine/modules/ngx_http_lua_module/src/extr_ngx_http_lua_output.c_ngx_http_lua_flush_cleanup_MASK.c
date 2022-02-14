
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {int flushing_coros; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_12__ {TYPE_2__* data; scalar_t__ flushing; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_13__ {scalar_t__ timer_set; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_9__ {TYPE_5__* write; } ;


 int FUNC_0 (TYPE_5__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_event_t *VAR_3;
    ngx_http_lua_ctx_t *VAR_4;
    ngx_http_lua_co_ctx_t *VAR_5 = VAR_1;

    VAR_5->flushing = 0;

    VAR_2 = VAR_5->data;
    if (VAR_2 == ((void*)0)) {
        return;
    }

    VAR_3 = VAR_2->connection->write;

    if (VAR_3 && VAR_3->timer_set) {
        FUNC_0(VAR_3);
    }

    VAR_4 = FUNC_1(VAR_2, VAR_0);
    if (VAR_4 == ((void*)0)) {
        return;
    }

    VAR_4->flushing_coros--;
}
