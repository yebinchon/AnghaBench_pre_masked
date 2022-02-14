
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef TYPE_1__* p_udp ;
typedef int * p_timeout ;
typedef int lua_State ;
typedef int buffer ;
typedef int addr ;
struct TYPE_2__ {int sock; int tm; } ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr*,int,char*,int,char*,int,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,size_t,size_t*,int *,int*,int *) ;
 scalar_t__ FUNC_10 (char*,char**,int) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_6)
{
    p_udp VAR_7 = (p_udp) FUNC_1(VAR_6, "udp{unconnected}", 1);
    char VAR_8[VAR_5];
    size_t VAR_9, VAR_10 = (size_t) FUNC_4(VAR_6, 2, sizeof(VAR_8));
    int VAR_11;
    p_timeout VAR_12 = &VAR_7->tm;
    struct sockaddr_storage VAR_13;
    socklen_t VAR_14 = sizeof(VAR_13);
    char VAR_15[VAR_0];
    char VAR_16[6];
    FUNC_11(VAR_12);
    VAR_10 = FUNC_0(VAR_10, sizeof(VAR_8));
    VAR_11 = FUNC_9(&VAR_7->sock, VAR_8, VAR_10, &VAR_9, (SA *) &VAR_13,
            &VAR_14, VAR_12);

    if (VAR_11 == VAR_1)
        VAR_11 = VAR_2;
    if (VAR_11 != VAR_2) {
        FUNC_7(VAR_6);
        FUNC_8(VAR_6, FUNC_12(VAR_11));
        return 2;
    }
    VAR_11 = FUNC_3((struct sockaddr *)&VAR_13, VAR_14, VAR_15,
        VAR_0, VAR_16, 6, VAR_3 | VAR_4);
 if (VAR_11) {
        FUNC_7(VAR_6);
        FUNC_8(VAR_6, FUNC_2(VAR_11));
        return 2;
    }
    FUNC_6(VAR_6, VAR_8, VAR_9);
    FUNC_8(VAR_6, VAR_15);
    FUNC_5(VAR_6, (int) FUNC_10(VAR_16, (char **) ((void*)0), 10));
    return 3;
}
