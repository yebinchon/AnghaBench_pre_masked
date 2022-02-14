
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* main; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {int read_body_done; scalar_t__ waiting_more_body; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_10__ {int count; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,char*) ;

void
FUNC_3(ngx_http_request_t *VAR_2)
{
    ngx_http_lua_ctx_t *VAR_3;

    FUNC_2(VAR_0, VAR_2->connection->log, 0,
                   "lua post read for rewrite/access phases");

    VAR_3 = FUNC_1(VAR_2, VAR_1);

    VAR_3->read_body_done = 1;





    if (VAR_3->waiting_more_body) {
        VAR_3->waiting_more_body = 0;
        FUNC_0(VAR_2);
    }
}
