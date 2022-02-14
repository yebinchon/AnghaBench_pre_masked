
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int * p_socket ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int ,int,int,char*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static
int FUNC_3(lua_State *VAR_0, p_socket VAR_1, int VAR_2, int VAR_3, void *VAR_4, int* VAR_5)
{
    socklen_t VAR_6 = *VAR_5;
    if (FUNC_0(*VAR_1, VAR_2, VAR_3, (char *) VAR_4, &VAR_6) < 0) {
        FUNC_1(VAR_0);
        FUNC_2(VAR_0, "getsockopt failed");
        return 2;
    }
    *VAR_5 = VAR_6;
    return 0;
}
