
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_5__ {int setby_nargs; TYPE_1__* setby_args; } ;
typedef TYPE_2__ ngx_http_lua_main_conf_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int VAR_0 ;

int
FUNC_4(lua_State *VAR_1, ngx_http_request_t *VAR_2)
{
    int VAR_3;
    int VAR_4;

    ngx_http_variable_value_t *VAR_5;
    ngx_http_lua_main_conf_t *VAR_6;

    VAR_3 = FUNC_0(VAR_1, 2);
    VAR_3--;

    VAR_6 = FUNC_3(VAR_2, VAR_0);


    VAR_4 = VAR_6->setby_nargs;


    VAR_5 = VAR_6->setby_args;

    if (VAR_3 < 0 || VAR_3 > VAR_4 - 1) {
        FUNC_2(VAR_1);

    } else {
        FUNC_1(VAR_1, (const char *) (VAR_5[VAR_3].data), VAR_5[VAR_3].len);
    }

    return 1;
}
