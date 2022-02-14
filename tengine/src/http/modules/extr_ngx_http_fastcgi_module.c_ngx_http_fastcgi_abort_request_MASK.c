
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_1(ngx_http_request_t *VAR_1)
{
    FUNC_0(VAR_0, VAR_1->connection->log, 0,
                   "abort http fastcgi request");

    return;
}
