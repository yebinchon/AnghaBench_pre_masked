
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* main; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_posted_request_t ;
struct TYPE_6__ {TYPE_3__* posted_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2)
{
    ngx_http_posted_request_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2->pool, sizeof(ngx_http_posted_request_t));
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->request = VAR_2;
    VAR_3->next = VAR_2->main->posted_requests;
    VAR_2->main->posted_requests = VAR_3;

    return VAR_1;
}
