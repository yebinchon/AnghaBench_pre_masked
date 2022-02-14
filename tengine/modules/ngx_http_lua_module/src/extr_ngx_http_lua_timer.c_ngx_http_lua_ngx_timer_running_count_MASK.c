
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {int running_timers; } ;
typedef TYPE_1__ ngx_http_lua_main_conf_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_lua_main_conf_t *VAR_3;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_0(VAR_1, "no request");
    }

    VAR_3 = FUNC_2(VAR_2, VAR_0);

    FUNC_1(VAR_1, VAR_3->running_timers);

    return 1;
}
