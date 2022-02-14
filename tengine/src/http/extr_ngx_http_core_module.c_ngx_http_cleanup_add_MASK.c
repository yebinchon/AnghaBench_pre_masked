
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; TYPE_3__* cleanup; int pool; struct TYPE_8__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {struct TYPE_9__* next; int * handler; int * data; } ;
typedef TYPE_3__ ngx_http_cleanup_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_3__*) ;
 void* FUNC_1 (int ,size_t) ;

ngx_http_cleanup_t *
FUNC_2(ngx_http_request_t *VAR_1, size_t VAR_2)
{
    ngx_http_cleanup_t *VAR_3;

    VAR_1 = VAR_1->main;

    VAR_3 = FUNC_1(VAR_1->pool, sizeof(ngx_http_cleanup_t));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_2) {
        VAR_3->data = FUNC_1(VAR_1->pool, VAR_2);
        if (VAR_3->data == ((void*)0)) {
            return ((void*)0);
        }

    } else {
        VAR_3->data = ((void*)0);
    }

    VAR_3->handler = ((void*)0);
    VAR_3->next = VAR_1->cleanup;

    VAR_1->cleanup = VAR_3;

    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                   "http cleanup add: %p", VAR_3);

    return VAR_3;
}
