
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_14__ {int wait_count; } ;
typedef TYPE_2__ ngx_http_lua_sema_t ;
struct TYPE_15__ {int (* resume_handler ) (TYPE_1__*) ;scalar_t__ entered_content_phase; TYPE_4__* cur_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_16__ {int sem_resume_status; int co; int sem_wait_queue; TYPE_2__* data; int * cleanup; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_17__ {TYPE_4__* data; } ;
typedef TYPE_5__ ngx_event_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_2)
{
    ngx_http_lua_co_ctx_t *VAR_3;
    ngx_http_request_t *VAR_4;
    ngx_http_lua_ctx_t *VAR_5;
    ngx_connection_t *VAR_6;
    ngx_http_lua_sema_t *VAR_7;

    VAR_3 = VAR_2->data;
    VAR_3->cleanup = ((void*)0);

    FUNC_0("ngx_http_lua_sema_timeout_handler timeout coctx:%p", VAR_3);

    VAR_7 = VAR_3->data;

    FUNC_7(&VAR_3->sem_wait_queue);
    VAR_7->wait_count--;

    VAR_4 = FUNC_4(VAR_3->co);
    VAR_6 = VAR_4->connection;

    VAR_5 = FUNC_2(VAR_4, VAR_1);
    FUNC_3(VAR_5 != ((void*)0));

    VAR_5->cur_co_ctx = VAR_3;

    VAR_3->sem_resume_status = VAR_0;

    if (VAR_5->entered_content_phase) {
        (void) FUNC_5(VAR_4);

    } else {
        VAR_5->resume_handler = FUNC_5;
        FUNC_1(VAR_4);
    }

    FUNC_6(VAR_6);
}
