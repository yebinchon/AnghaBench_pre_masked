
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;
    ngx_str_t VAR_4, VAR_5;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 != 1 && VAR_2 != 2) {
        return FUNC_2(VAR_1, "expecting one or two arguments");
    }

    if (FUNC_4(VAR_1, 1)) {
        VAR_5.data = (u_char *) "";
        VAR_5.len = 0;

    } else {
        VAR_5.data = (u_char *) FUNC_0(VAR_1, 1, &VAR_5.len);
    }

    if (VAR_2 == 2) {

        FUNC_1(VAR_1, 2, VAR_0);
        VAR_3 = FUNC_7(VAR_1, 2);
    }

    VAR_4.len = FUNC_8(VAR_5.len, VAR_3);

    VAR_4.data = FUNC_5(VAR_1, VAR_4.len);

    FUNC_9(&VAR_4, &VAR_5, VAR_3);

    FUNC_6(VAR_1, (char *) VAR_4.data, VAR_4.len);

    return 1;
}
