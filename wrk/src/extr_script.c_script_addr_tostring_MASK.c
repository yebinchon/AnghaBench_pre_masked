
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct addrinfo* FUNC_0 (int *) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int,char*,int,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_4) {
    struct addrinfo *VAR_5 = FUNC_0(VAR_4);
    char VAR_6[VAR_0];
    char VAR_7[VAR_1];

    int VAR_8 = VAR_2 | VAR_3;
    int VAR_9 = FUNC_2(VAR_5->ai_addr, VAR_5->ai_addrlen, VAR_6, VAR_0, VAR_7, VAR_1, VAR_8);
    if (VAR_9 != 0) {
        const char *VAR_10 = FUNC_1(VAR_9);
        return FUNC_3(VAR_4, "addr tostring failed %s", VAR_10);
    }

    FUNC_4(VAR_4, "%s:%s", VAR_6, VAR_7);
    return 1;
}
