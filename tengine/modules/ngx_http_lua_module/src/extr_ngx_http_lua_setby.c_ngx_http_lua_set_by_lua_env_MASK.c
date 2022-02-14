
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_3__ {size_t setby_nargs; int * setby_args; } ;
typedef TYPE_1__ ngx_http_lua_main_conf_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(lua_State *VAR_1, ngx_http_request_t *VAR_2, size_t VAR_3,
    ngx_http_variable_value_t *VAR_4)
{
    ngx_http_lua_main_conf_t *VAR_5;

    FUNC_7(VAR_1, VAR_2);

    VAR_5 = FUNC_4(VAR_2, VAR_0);

    VAR_5->setby_nargs = VAR_3;
    VAR_5->setby_args = VAR_4;
    FUNC_5(VAR_1, 0 , 1 );



    FUNC_0(VAR_1, 0 , 1 );
    FUNC_6(VAR_1);
    FUNC_2(VAR_1, -2, "__index");
    FUNC_3(VAR_1, -2);


    FUNC_1(VAR_1, -2);

}
