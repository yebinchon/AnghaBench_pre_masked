
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct addrinfo {int ai_family; int ai_socktype; } ;
typedef TYPE_1__* p_tcp ;
typedef int lua_State ;
typedef int connecthints ;
struct TYPE_2__ {int tm; int family; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *,int *,char const*,char const*,int *,struct addrinfo*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (struct addrinfo*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1)
{
    p_tcp VAR_2 = (p_tcp) FUNC_0(VAR_1, "tcp{any}", 1);
    const char *VAR_3 = FUNC_3(VAR_1, 2);
    const char *VAR_4 = FUNC_3(VAR_1, 3);
    struct addrinfo VAR_5;
    const char *VAR_6;
    FUNC_7(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.ai_socktype = VAR_0;

    VAR_5.ai_family = VAR_2->family;
    FUNC_8(&VAR_2->tm);
    VAR_6 = FUNC_2(&VAR_2->sock, &VAR_2->family, VAR_3, VAR_4,
        &VAR_2->tm, &VAR_5);

    FUNC_1(VAR_1, "tcp{client}", 1);
    if (VAR_6) {
        FUNC_4(VAR_1);
        FUNC_6(VAR_1, VAR_6);
        return 2;
    }
    FUNC_5(VAR_1, 1);
    return 1;
}
