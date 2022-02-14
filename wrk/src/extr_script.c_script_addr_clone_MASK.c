
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 struct addrinfo* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct addrinfo*,struct addrinfo*) ;

struct addrinfo *FUNC_4(lua_State *VAR_0, struct addrinfo *VAR_1) {
    struct addrinfo *VAR_2 = FUNC_1(VAR_0, sizeof(*VAR_2));
    FUNC_0(VAR_0, "wrk.addr");
    FUNC_2(VAR_0, -2);
    FUNC_3(VAR_1, VAR_2);
    return VAR_2;
}
