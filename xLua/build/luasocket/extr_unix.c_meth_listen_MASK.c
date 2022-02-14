
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_unix ;
typedef int lua_State ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1)
{
    p_unix VAR_2 = (p_unix) FUNC_0(VAR_1, "unix{master}", 1);
    int VAR_3 = (int) FUNC_2(VAR_1, 2, 32);
    int VAR_4 = FUNC_6(&VAR_2->sock, VAR_3);
    if (VAR_4 != VAR_0) {
        FUNC_3(VAR_1);
        FUNC_5(VAR_1, FUNC_7(VAR_4));
        return 2;
    }

    FUNC_1(VAR_1, "unix{server}", 1);
    FUNC_4(VAR_1, 1);
    return 1;
}
