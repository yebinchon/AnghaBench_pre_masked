
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parent; TYPE_1__* connection; TYPE_2__* main; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_4__ ngx_http_posted_request_t ;
struct TYPE_7__ {TYPE_4__* posted_requests; int subrequests; int count; } ;
struct TYPE_6__ {int data; } ;



__attribute__((used)) static void
FUNC_0(ngx_http_request_t *VAR_0)
{
    ngx_http_posted_request_t *VAR_1;
    ngx_http_posted_request_t **VAR_2;


    VAR_0->main->count--;
    VAR_0->main->subrequests++;


    VAR_2 = &VAR_0->main->posted_requests;
    for (VAR_1 = VAR_0->main->posted_requests; VAR_1->next; VAR_1 = VAR_1->next) {
        VAR_2 = &VAR_1->next;
    }

    *VAR_2 = ((void*)0);

    VAR_0->connection->data = VAR_0->parent;
}
