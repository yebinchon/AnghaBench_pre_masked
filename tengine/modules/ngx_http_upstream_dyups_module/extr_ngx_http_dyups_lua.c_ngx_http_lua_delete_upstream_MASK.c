
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0)
{
    ngx_int_t VAR_1;
    ngx_str_t VAR_2, VAR_3;

    if (FUNC_2(VAR_0) != 1) {
        return FUNC_1(VAR_0, "exactly 1 argument expected");
    }

    VAR_2.data = (u_char *) FUNC_0(VAR_0, 1, &VAR_2.len);

    VAR_1 = FUNC_5(&VAR_2, &VAR_3);

    FUNC_3(VAR_0, (lua_Integer) VAR_1);
    FUNC_4(VAR_0, (char *) VAR_3.data, VAR_3.len);

    return 2;
}
