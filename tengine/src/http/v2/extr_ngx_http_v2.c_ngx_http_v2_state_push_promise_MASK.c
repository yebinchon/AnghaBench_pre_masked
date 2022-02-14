
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_http_v2_connection_t *VAR_2, u_char *VAR_3,
    u_char *VAR_4)
{
    FUNC_1(VAR_1, VAR_2->connection->log, 0,
                  "client sent PUSH_PROMISE frame");

    return FUNC_0(VAR_2, VAR_0);
}
