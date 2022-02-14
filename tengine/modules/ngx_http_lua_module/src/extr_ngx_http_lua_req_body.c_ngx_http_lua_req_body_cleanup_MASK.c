
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ keepalive; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ waiting_more_body; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_11__ {TYPE_2__* data; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_12__ {scalar_t__ timer_set; } ;
struct TYPE_8__ {TYPE_7__* read; } ;


 int FUNC_0 (TYPE_7__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_lua_ctx_t *VAR_3;
    ngx_http_lua_co_ctx_t *VAR_4 = VAR_1;

    VAR_2 = VAR_4->data;
    if (VAR_2 == ((void*)0)) {
        return;
    }

    if (VAR_2->connection->read->timer_set) {
        FUNC_0(VAR_2->connection->read);
    }

    VAR_3 = FUNC_1(VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        return;
    }

    VAR_3->waiting_more_body = 0;
    VAR_2->keepalive = 0;
}
