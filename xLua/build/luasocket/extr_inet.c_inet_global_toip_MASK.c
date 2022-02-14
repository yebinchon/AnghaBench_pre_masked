
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct hostent**) ;
 int FUNC_1 (struct in_addr) ;
 int FUNC_2 (int *,struct hostent*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1)
{
    const char *VAR_2 = FUNC_3(VAR_1, 1);
    struct hostent *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_0(VAR_2, &VAR_3);
    if (VAR_4 != VAR_0) {
        FUNC_4(VAR_1);
        FUNC_5(VAR_1, FUNC_6(VAR_4));
        return 2;
    }
    FUNC_5(VAR_1, FUNC_1(*((struct in_addr *) VAR_3->h_addr)));
    FUNC_2(VAR_1, VAR_3);
    return 2;
}
