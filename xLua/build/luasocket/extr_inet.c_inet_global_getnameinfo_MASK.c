
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_addrlen; int ai_addr; struct addrinfo* ai_next; int ai_family; int ai_socktype; } ;
typedef int socklen_t ;
typedef int sbuf ;
typedef int lua_State ;
typedef int hints ;
typedef int hbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (int ,int ,char*,int ,char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_4) {
    char VAR_5[VAR_0];
    char VAR_6[VAR_1];
    int VAR_7, VAR_8;
    struct addrinfo VAR_9;
    struct addrinfo *VAR_10, *VAR_11;
    const char *VAR_12 = FUNC_4(VAR_4, 1, ((void*)0));
    const char *VAR_13 = FUNC_4(VAR_4, 2, ((void*)0));

    if (!(VAR_12 || VAR_13))
        FUNC_3(VAR_4, "host and serv cannot be both nil");

    FUNC_10(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.ai_socktype = VAR_3;
    VAR_9.ai_family = VAR_2;

    VAR_8 = FUNC_1(VAR_12, VAR_13, &VAR_9, &VAR_10);
    if (VAR_8 != 0) {
        FUNC_6(VAR_4);
        FUNC_8(VAR_4, FUNC_11(VAR_8));
        return 2;
    }

    FUNC_5(VAR_4);
    for (VAR_7 = 1, VAR_11 = VAR_10; VAR_11; VAR_7++, VAR_11 = VAR_11->ai_next) {
        FUNC_2(VAR_11->ai_addr, (socklen_t) VAR_11->ai_addrlen,
            VAR_5, VAR_12? (socklen_t) sizeof(VAR_5): 0,
            VAR_6, VAR_13? (socklen_t) sizeof(VAR_6): 0, 0);
        if (VAR_12) {
            FUNC_7(VAR_4, VAR_7);
            FUNC_8(VAR_4, VAR_5);
            FUNC_9(VAR_4, -3);
        }
    }
    FUNC_0(VAR_10);

    if (VAR_13) {
        FUNC_8(VAR_4, VAR_6);
        return 2;
    } else {
        return 1;
    }
}
