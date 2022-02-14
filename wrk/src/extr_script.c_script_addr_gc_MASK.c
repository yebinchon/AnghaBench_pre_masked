
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addr; } ;
typedef int lua_State ;


 struct addrinfo* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
    struct addrinfo *VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_1->ai_addr);
    return 0;
}
