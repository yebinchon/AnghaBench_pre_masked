
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_family; int ai_socktype; } ;
typedef TYPE_1__* p_udp ;
typedef int * p_timeout ;
typedef int lua_State ;
typedef int connecthints ;
struct TYPE_2__ {int family; int sock; int tm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *,int *,char const*,char const*,int *,struct addrinfo*) ;
 int FUNC_3 (int *,int ,int *) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_1) {
    p_udp VAR_2 = (p_udp) FUNC_0(VAR_1, "udp{any}", 1);
    p_timeout VAR_3 = &VAR_2->tm;
    const char *VAR_4 = FUNC_4(VAR_1, 2);
    int VAR_5 = FUNC_9(VAR_4, "*");
    const char *VAR_6 = VAR_5? FUNC_4(VAR_1, 3): "0";
    struct addrinfo VAR_7;
    const char *VAR_8;
    FUNC_8(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.ai_socktype = VAR_0;

    VAR_7.ai_family = VAR_2->family;
    if (VAR_5) {
        VAR_8 = FUNC_2(&VAR_2->sock, &VAR_2->family, VAR_4,
            VAR_6, VAR_3, &VAR_7);
        if (VAR_8) {
            FUNC_5(VAR_1);
            FUNC_7(VAR_1, VAR_8);
            return 2;
        }
        FUNC_1(VAR_1, "udp{connected}", 1);
    } else {


        FUNC_3(&VAR_2->sock, VAR_2->family, VAR_3);
        FUNC_1(VAR_1, "udp{unconnected}", 1);
    }

    FUNC_6(VAR_1, 1);
    return 1;
}
