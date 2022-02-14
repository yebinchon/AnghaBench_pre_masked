
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_7__ {int * log; } ;
struct TYPE_5__ {int * log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;

int
FUNC_2(lua_State *VAR_2)
{
    ngx_log_t *VAR_3;
    ngx_http_request_t *VAR_4;

    VAR_4 = FUNC_1(VAR_2);

    if (VAR_4 && VAR_4->connection && VAR_4->connection->log) {
        VAR_3 = VAR_4->connection->log;

    } else {
        VAR_3 = VAR_1->log;
    }

    return FUNC_0(VAR_3, "[lua] ", VAR_0, VAR_2);
}
