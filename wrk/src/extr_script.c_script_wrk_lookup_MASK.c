
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {struct addrinfo* ai_next; int ai_socktype; int ai_family; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_2 (struct addrinfo*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,struct addrinfo*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_3) {
    struct addrinfo *VAR_4;
    struct addrinfo VAR_5 = {
        .ai_family = VAR_0,
        .ai_socktype = VAR_1
    };
    int VAR_6, VAR_7 = 1;

    const char *VAR_8 = FUNC_7(VAR_3, -2);
    const char *VAR_9 = FUNC_7(VAR_3, -1);

    if ((VAR_6 = FUNC_4(VAR_8, VAR_9, &VAR_5, &VAR_4)) != 0) {
        const char *VAR_10 = FUNC_3(VAR_6);
        FUNC_1(VAR_2, "unable to resolve %s:%s %s\n", VAR_8, VAR_9, VAR_10);
        FUNC_0(1);
    }

    FUNC_5(VAR_3);
    for (struct addrinfo *VAR_11 = VAR_4; VAR_11 != ((void*)0); VAR_11 = VAR_11->ai_next) {
        FUNC_8(VAR_3, VAR_11);
        FUNC_6(VAR_3, -2, VAR_7++);
    }

    FUNC_2(VAR_4);
    return 1;
}
