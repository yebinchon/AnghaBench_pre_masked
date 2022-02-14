
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1)
{
    ngx_str_t VAR_2;

    if (FUNC_2(VAR_1) != 1) {
        return FUNC_1(VAR_1, "expecting 1 argument but seen %d",
                          FUNC_2(VAR_1));
    }

    FUNC_0(VAR_1, 1, VAR_0);
    FUNC_4(((void*)0), VAR_1, 1, &VAR_2);
    FUNC_3(VAR_1, (char *) VAR_2.data, VAR_2.len);
    return 1;
}
