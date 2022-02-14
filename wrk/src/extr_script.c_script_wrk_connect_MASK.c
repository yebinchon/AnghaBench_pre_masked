
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int lua_State ;


 struct addrinfo* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0) {
    struct addrinfo *VAR_1 = FUNC_0(VAR_0);
    int VAR_2, VAR_3 = 0;
    if ((VAR_2 = FUNC_4(VAR_1->ai_family, VAR_1->ai_socktype, VAR_1->ai_protocol)) != -1) {
        VAR_3 = FUNC_2(VAR_2, VAR_1->ai_addr, VAR_1->ai_addrlen) == 0;
        FUNC_1(VAR_2);
    }
    FUNC_3(VAR_0, VAR_3);
    return 1;
}
