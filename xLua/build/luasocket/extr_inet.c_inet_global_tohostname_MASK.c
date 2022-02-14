
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_name; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct hostent**) ;
 int FUNC_1 (int *,struct hostent*) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1) {
    const char *VAR_2 = FUNC_2(VAR_1, 1);
    struct hostent *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_0(VAR_2, &VAR_3);
    if (VAR_4 != VAR_0) {
        FUNC_3(VAR_1);
        FUNC_4(VAR_1, FUNC_5(VAR_4));
        return 2;
    }
    FUNC_4(VAR_1, VAR_3->h_name);
    FUNC_1(VAR_1, VAR_3);
    return 2;
}
