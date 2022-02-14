
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int args; int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_1)
{
    FUNC_1(VAR_0, VAR_1->connection->log, 0,
                   "http finalizer done: \"%V?%V\"", &VAR_1->uri, &VAR_1->args);

    FUNC_0(VAR_1, 0);
}
