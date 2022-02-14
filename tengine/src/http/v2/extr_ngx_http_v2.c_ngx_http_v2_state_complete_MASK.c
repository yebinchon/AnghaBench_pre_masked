
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int handler; int * stream; } ;
struct TYPE_8__ {TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_3(ngx_http_v2_connection_t *VAR_4, u_char *VAR_5,
    u_char *VAR_6)
{
    FUNC_1(VAR_2, VAR_4->connection->log, 0,
                   "http2 frame complete pos:%p end:%p", VAR_5, VAR_6);

    if (VAR_5 > VAR_6) {
        FUNC_2(VAR_1, VAR_4->connection->log, 0,
                      "receive buffer overrun");

        return FUNC_0(VAR_4, VAR_0);
    }

    VAR_4->state.stream = ((void*)0);
    VAR_4->state.handler = VAR_3;

    return VAR_5;
}
