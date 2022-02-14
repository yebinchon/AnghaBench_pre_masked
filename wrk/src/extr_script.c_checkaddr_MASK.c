
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int,char*) ;
 struct addrinfo* FUNC_1 (int *,int,char*) ;

__attribute__((used)) static struct addrinfo *FUNC_2(lua_State *VAR_0) {
    struct addrinfo *VAR_1 = FUNC_1(VAR_0, -1, "wrk.addr");
    FUNC_0(VAR_0, VAR_1 != ((void*)0), 1, "`addr' expected");
    return VAR_1;
}
