
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_8__ {TYPE_2__* connection; TYPE_1__ request_line; TYPE_4__* cleanup; int * pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {struct TYPE_9__* next; int data; int (* handler ) (int ) ;} ;
typedef TYPE_4__ ngx_http_cleanup_t ;
struct TYPE_7__ {int destroyed; int * log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*) ;
 int FUNC_1 (int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(ngx_http_request_t *VAR_2)
{
    ngx_log_t *VAR_3;
    ngx_http_cleanup_t *VAR_4;

    VAR_3 = VAR_2->connection->log;

    FUNC_0(VAR_1, VAR_3, 0, "http lua close fake "
                   "request");

    if (VAR_2->pool == ((void*)0)) {
        FUNC_1(VAR_0, VAR_3, 0, "http lua fake request "
                      "already closed");
        return;
    }

    VAR_4 = VAR_2->cleanup;
    VAR_2->cleanup = ((void*)0);

    while (VAR_4) {
        if (VAR_4->handler) {
            VAR_4->handler(VAR_4->data);
        }

        VAR_4 = VAR_4->next;
    }

    VAR_2->request_line.len = 0;

    VAR_2->connection->destroyed = 1;
}
