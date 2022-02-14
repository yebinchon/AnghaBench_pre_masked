
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; scalar_t__ ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_socktype; } ;
typedef int socklen_t ;
typedef int lua_State ;
typedef int hints ;
typedef int hbuf ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (int ,int ,char*,int ,int *,int ,int ) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_4)
{
    const char *VAR_5 = FUNC_3(VAR_4, 1);
    struct addrinfo *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    struct addrinfo VAR_8;
    int VAR_9 = 1, VAR_10 = 0;
    FUNC_10(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.ai_socktype = VAR_3;
    VAR_8.ai_family = VAR_2;
    VAR_10 = FUNC_1(VAR_5, ((void*)0), &VAR_8, &VAR_7);
    if (VAR_10 != 0) {
        FUNC_6(VAR_4);
        FUNC_8(VAR_4, FUNC_11(VAR_10));
        return 2;
    }
    FUNC_4(VAR_4);
    for (VAR_6 = VAR_7; VAR_6; VAR_6 = VAR_6->ai_next) {
        char VAR_11[VAR_0];
        VAR_10 = FUNC_2(VAR_6->ai_addr, (socklen_t) VAR_6->ai_addrlen,
            VAR_11, (socklen_t) sizeof(VAR_11), ((void*)0), 0, VAR_1);
        if (VAR_10){
          FUNC_6(VAR_4);
          FUNC_8(VAR_4, FUNC_11(VAR_10));
          return 2;
        }
        FUNC_7(VAR_4, VAR_9);
        FUNC_4(VAR_4);
        switch (VAR_6->ai_family) {
            case 129:
                FUNC_5(VAR_4, "family");
                FUNC_5(VAR_4, "inet");
                FUNC_9(VAR_4, -3);
                break;
            case 128:
                FUNC_5(VAR_4, "family");
                FUNC_5(VAR_4, "inet6");
                FUNC_9(VAR_4, -3);
                break;
        }
        FUNC_5(VAR_4, "addr");
        FUNC_8(VAR_4, VAR_11);
        FUNC_9(VAR_4, -3);
        FUNC_9(VAR_4, -3);
        VAR_9++;
    }
    FUNC_0(VAR_7);
    return 1;
}
