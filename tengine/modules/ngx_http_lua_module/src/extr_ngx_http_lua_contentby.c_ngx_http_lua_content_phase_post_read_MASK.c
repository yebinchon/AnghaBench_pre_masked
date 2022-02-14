
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {int read_body_done; scalar_t__ waiting_more_body; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_9__ {int count; } ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_1)
{
    ngx_http_lua_ctx_t *VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);

    VAR_2->read_body_done = 1;

    if (VAR_2->waiting_more_body) {
        VAR_2->waiting_more_body = 0;
        FUNC_2(VAR_1, FUNC_1(VAR_1));

    } else {
        VAR_1->main->count--;
    }
}
