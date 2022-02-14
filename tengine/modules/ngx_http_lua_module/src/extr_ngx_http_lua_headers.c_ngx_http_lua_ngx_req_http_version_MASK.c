
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int http_version; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int lua_State ;






 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
    ngx_http_request_t *VAR_1;

    VAR_1 = FUNC_4(VAR_0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_0(VAR_0, "no request object found");
    }

    FUNC_3(VAR_0, VAR_1);

    switch (VAR_1->http_version) {
    case 128:
        FUNC_2(VAR_0, 0.9);
        break;

    case 131:
        FUNC_2(VAR_0, 1.0);
        break;

    case 130:
        FUNC_2(VAR_0, 1.1);
        break;


    case 129:
        FUNC_2(VAR_0, 2.0);
        break;


    default:
        FUNC_1(VAR_0);
        break;
    }

    return 1;
}
