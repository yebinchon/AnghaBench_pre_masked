
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_unix ;
typedef int lua_State ;
struct TYPE_2__ {int sock; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,char*,char const**) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{

    static const char* VAR_1[] = { "receive", "send", "both", ((void*)0) };
    p_unix VAR_2 = (p_unix) FUNC_0(VAR_0, "unix{client}", 1);
    int VAR_3 = FUNC_1(VAR_0, 2, "both", VAR_1);
    FUNC_3(&VAR_2->sock, VAR_3);
    FUNC_2(VAR_0, 1);
    return 1;
}
