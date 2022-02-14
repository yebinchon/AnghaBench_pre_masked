
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cache; int args; int uri; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_10__ {int log; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,char*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_request_t *VAR_3;

    VAR_3 = VAR_1->data;
    VAR_2 = VAR_3->connection;

    FUNC_2(VAR_2->log, VAR_3);

    FUNC_3(VAR_0, VAR_2->log, 0,
                   "http file cache wait: \"%V?%V\"", &VAR_3->uri, &VAR_3->args);

    FUNC_0(VAR_3, VAR_3->cache);

    FUNC_1(VAR_2);
}
