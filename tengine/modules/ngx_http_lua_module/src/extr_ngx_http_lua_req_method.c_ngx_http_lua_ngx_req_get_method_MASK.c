
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ method_name; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
    int VAR_1;
    ngx_http_request_t *VAR_2;

    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 != 0) {
        return FUNC_0(VAR_0, "only one argument expected but got %d", VAR_1);
    }

    VAR_2 = FUNC_4(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return FUNC_0(VAR_0, "request object not found");
    }

    FUNC_3(VAR_0, VAR_2);

    FUNC_2(VAR_0, (char *) VAR_2->method_name.data, VAR_2->method_name.len);
    return 1;
}
