
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_3__ {scalar_t__ context; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_lua_ctx_t *VAR_3;




    VAR_2 = FUNC_2(VAR_1, 1);


    if (VAR_2 == ((void*)0)) {
        return 0;
    }

    VAR_3 = FUNC_3(VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        return 0;
    }

    FUNC_1(VAR_1, (int) VAR_3->context);
    return 1;
}
