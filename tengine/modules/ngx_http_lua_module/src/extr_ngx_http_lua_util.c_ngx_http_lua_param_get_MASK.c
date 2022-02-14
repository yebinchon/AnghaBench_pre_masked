
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_4__ {int context; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int * FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_3)
{
    ngx_http_lua_ctx_t *VAR_4;
    ngx_http_request_t *VAR_5;

    VAR_5 = FUNC_4(VAR_3);
    if (VAR_5 == ((void*)0)) {
        return 0;
    }

    VAR_4 = FUNC_1(VAR_5, VAR_2);
    if (VAR_4 == ((void*)0)) {
        return FUNC_0(VAR_3, "ctx not found");
    }

    FUNC_3(VAR_3, VAR_4, VAR_1
                               | VAR_0);

    if (VAR_4->context & (VAR_1)) {
        return FUNC_5(VAR_3, VAR_5);
    }



    return FUNC_2(VAR_3, VAR_5);
}
