
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_flags; scalar_t__ ai_addrlen; int ai_addr; int ai_socktype; int ai_family; } ;
typedef int socklen_t ;
typedef TYPE_1__* p_udp ;
typedef int * p_timeout ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int aihint ;
struct TYPE_2__ {int sock; int family; int tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 char* FUNC_4 (int *,int,size_t*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (int *,char const*,size_t,size_t*,int ,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_4) {
    p_udp VAR_5 = (p_udp) FUNC_0(VAR_4, "udp{unconnected}", 1);
    size_t VAR_6, VAR_7 = 0;
    const char *VAR_8 = FUNC_4(VAR_4, 2, &VAR_6);
    const char *VAR_9 = FUNC_5(VAR_4, 3);
    const char *VAR_10 = FUNC_5(VAR_4, 4);
    p_timeout VAR_11 = &VAR_5->tm;
    int VAR_12;
    struct addrinfo VAR_13;
    struct addrinfo *VAR_14;
    FUNC_9(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.ai_family = VAR_5->family;
    VAR_13.ai_socktype = VAR_3;
    VAR_13.ai_flags = VAR_0 | VAR_1;
    VAR_12 = FUNC_3(VAR_9, VAR_10, &VAR_13, &VAR_14);
 if (VAR_12) {
        FUNC_6(VAR_4);
        FUNC_8(VAR_4, FUNC_2(VAR_12));
        return 2;
    }
    FUNC_11(VAR_11);
    VAR_12 = FUNC_10(&VAR_5->sock, VAR_8, VAR_6, &VAR_7, VAR_14->ai_addr,
        (socklen_t) VAR_14->ai_addrlen, VAR_11);
    FUNC_1(VAR_14);
    if (VAR_12 != VAR_2) {
        FUNC_6(VAR_4);
        FUNC_8(VAR_4, FUNC_12(VAR_12));
        return 2;
    }
    FUNC_7(VAR_4, (lua_Number) VAR_7);
    return 1;
}
