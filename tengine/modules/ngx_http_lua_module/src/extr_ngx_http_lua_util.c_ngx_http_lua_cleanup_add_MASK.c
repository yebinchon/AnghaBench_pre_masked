
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* cleanup; TYPE_1__* connection; struct TYPE_14__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {TYPE_4__* free_cleanup; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_16__ {struct TYPE_16__* next; int * handler; } ;
typedef TYPE_4__ ngx_http_cleanup_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,size_t) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_4__*) ;

ngx_http_cleanup_t *
FUNC_4(ngx_http_request_t *VAR_2, size_t VAR_3)
{
    ngx_http_cleanup_t *VAR_4;
    ngx_http_lua_ctx_t *VAR_5;

    if (VAR_3 == 0) {
        VAR_5 = FUNC_2(VAR_2, VAR_1);

        VAR_2 = VAR_2->main;

        if (VAR_5 != ((void*)0) && VAR_5->free_cleanup) {
            VAR_4 = VAR_5->free_cleanup;
            VAR_5->free_cleanup = VAR_4->next;

            FUNC_0("reuse cleanup: %p", VAR_4);

            FUNC_3(VAR_0, VAR_2->connection->log, 0,
                           "lua http cleanup reuse: %p", VAR_4);

            VAR_4->handler = ((void*)0);
            VAR_4->next = VAR_2->cleanup;

            VAR_2->cleanup = VAR_4;

            return VAR_4;
        }
    }

    return FUNC_1(VAR_2, VAR_3);
}
