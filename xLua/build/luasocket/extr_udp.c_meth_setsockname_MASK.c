
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_flags; int ai_family; int ai_socktype; } ;
typedef TYPE_1__* p_udp ;
typedef int lua_State ;
typedef int bindhints ;
struct TYPE_2__ {int sock; int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,char const*,char const*,struct addrinfo*) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_2) {
    p_udp VAR_3 = (p_udp) FUNC_0(VAR_2, "udp{unconnected}", 1);
    const char *VAR_4 = FUNC_2(VAR_2, 2);
    const char *VAR_5 = FUNC_2(VAR_2, 3);
    const char *VAR_6;
    struct addrinfo VAR_7;
    FUNC_6(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.ai_socktype = VAR_1;
    VAR_7.ai_family = VAR_3->family;
    VAR_7.ai_flags = VAR_0;
    VAR_6 = FUNC_1(&VAR_3->sock, VAR_4, VAR_5, &VAR_7);
    if (VAR_6) {
        FUNC_3(VAR_2);
        FUNC_5(VAR_2, VAR_6);
        return 2;
    }
    FUNC_4(VAR_2, 1);
    return 1;
}
