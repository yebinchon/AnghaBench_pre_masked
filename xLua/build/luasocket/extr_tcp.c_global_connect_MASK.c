
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_tcp ;
struct addrinfo {int family; int ai_family; int sock; int tm; void* ai_socktype; int ai_flags; int io; int buf; } ;
typedef struct addrinfo* p_tcp ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
typedef int connecthints ;
typedef int bindhints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int,char*) ;
 char* FUNC_3 (int *,char const*,char const*,struct addrinfo*) ;
 char* FUNC_4 (int *,int*,char const*,char const*,int *,struct addrinfo*) ;
 int FUNC_5 (int *,int ,int ,int ,int *) ;
 char* FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int *,int,int) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_7) {
    const char *VAR_8 = FUNC_6(VAR_7, 1);
    const char *VAR_9 = FUNC_6(VAR_7, 2);
    const char *VAR_10 = FUNC_7(VAR_7, 3, ((void*)0));
    const char *VAR_11 = FUNC_7(VAR_7, 4, "0");
    int VAR_12 = FUNC_2(VAR_7, 5, "unspec");
    p_tcp VAR_13 = (p_tcp) FUNC_8(VAR_7, sizeof(t_tcp));
    struct addrinfo VAR_14, VAR_15;
    const char *VAR_16 = ((void*)0);

    FUNC_11(VAR_13, 0, sizeof(t_tcp));
    FUNC_5(&VAR_13->io, (p_send) VAR_6, (p_recv) VAR_5,
            (p_error) VAR_4, &VAR_13->sock);
    FUNC_13(&VAR_13->tm, -1, -1);
    FUNC_1(&VAR_13->buf, &VAR_13->io, &VAR_13->tm);
    VAR_13->sock = VAR_2;
    VAR_13->family = VAR_1;

    FUNC_11(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.ai_socktype = VAR_3;
    VAR_14.ai_family = VAR_12;
    VAR_14.ai_flags = VAR_0;
    if (VAR_10) {
        VAR_16 = FUNC_3(&VAR_13->sock, VAR_10, VAR_11, &VAR_14);
        if (VAR_16) {
            FUNC_9(VAR_7);
            FUNC_10(VAR_7, VAR_16);
            return 2;
        }
        VAR_13->family = VAR_14.ai_family;
    }

    FUNC_11(&VAR_15, 0, sizeof(VAR_15));
    VAR_15.ai_socktype = VAR_3;

    VAR_15.ai_family = VAR_14.ai_family;
    VAR_16 = FUNC_4(&VAR_13->sock, &VAR_13->family, VAR_8, VAR_9,
         &VAR_13->tm, &VAR_15);
    if (VAR_16) {
        FUNC_12(&VAR_13->sock);
        FUNC_9(VAR_7);
        FUNC_10(VAR_7, VAR_16);
        return 2;
    }
    FUNC_0(VAR_7, "tcp{client}", -1);
    return 1;
}
