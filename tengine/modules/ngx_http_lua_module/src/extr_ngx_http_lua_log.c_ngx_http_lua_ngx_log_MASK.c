
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_log_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_7__ {int * log; } ;
struct TYPE_5__ {int * log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int *) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* FUNC_5 (int *) ;

int
FUNC_6(lua_State *VAR_3)
{
    ngx_log_t *VAR_4;
    ngx_http_request_t *VAR_5;
    const char *VAR_6;
    int VAR_7;

    VAR_5 = FUNC_5(VAR_3);

    if (VAR_5 && VAR_5->connection && VAR_5->connection->log) {
        VAR_4 = VAR_5->connection->log;

    } else {
        VAR_4 = VAR_2->log;
    }

    VAR_7 = FUNC_2(VAR_3, 1);
    if (VAR_7 < VAR_1 || VAR_7 > VAR_0) {
        VAR_6 = FUNC_3(VAR_3, "bad log level: %d", VAR_7);
        return FUNC_1(VAR_3, 1, VAR_6);
    }


    FUNC_4(VAR_3, 1);

    return FUNC_0(VAR_4, "[lua] ", (ngx_uint_t) VAR_7, VAR_3);
}
