
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_5__ {int log; int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_request_t *VAR_3;

    VAR_2 = VAR_1->data;
    VAR_3 = VAR_2->data;

    FUNC_1(VAR_0, VAR_2->log, 0,
                   "http2 run request handler");

    FUNC_0(VAR_3);
}
