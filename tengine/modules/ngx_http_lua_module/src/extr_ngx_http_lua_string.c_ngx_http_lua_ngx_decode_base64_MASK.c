
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_2)
{
    ngx_str_t VAR_3, VAR_4;

    if (FUNC_2(VAR_2) != 1) {
        return FUNC_1(VAR_2, "expecting one argument");
    }

    if (FUNC_6(VAR_2, 1) != VAR_0) {
        return FUNC_1(VAR_2, "string argument only");
    }

    VAR_4.data = (u_char *) FUNC_0(VAR_2, 1, &VAR_4.len);

    VAR_3.len = FUNC_7(VAR_4.len);

    VAR_3.data = FUNC_3(VAR_2, VAR_3.len);

    if (FUNC_8(&VAR_3, &VAR_4) == VAR_1) {
        FUNC_4(VAR_2, (char *) VAR_3.data, VAR_3.len);

    } else {
        FUNC_5(VAR_2);
    }

    return 1;
}
