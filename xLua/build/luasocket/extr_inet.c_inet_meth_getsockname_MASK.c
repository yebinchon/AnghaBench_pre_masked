
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int peer ;
typedef int * p_socket ;
typedef int lua_State ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,int,char*,int,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int ) ;

int FUNC_7(lua_State *VAR_6, p_socket VAR_7, int VAR_8)
{
    int VAR_9;
    struct sockaddr_storage VAR_10;
    socklen_t VAR_11 = sizeof(VAR_10);
    char VAR_12[VAR_0];
    char VAR_13[6];
    if (FUNC_2(*VAR_7, (SA *) &VAR_10, &VAR_11) < 0) {
        FUNC_4(VAR_6);
        FUNC_5(VAR_6, FUNC_6(VAR_5));
        return 2;
    }
 VAR_9=FUNC_1((struct sockaddr *)&VAR_10, VAR_11,
  VAR_12, VAR_0, VAR_13, 6, VAR_1 | VAR_2);
    if (VAR_9) {
        FUNC_4(VAR_6);
        FUNC_5(VAR_6, FUNC_0(VAR_9));
        return 2;
    }
    FUNC_5(VAR_6, VAR_12);
    FUNC_5(VAR_6, VAR_13);
    if (VAR_8 == VAR_3) {
        FUNC_3(VAR_6, "inet");
    } else if (VAR_8 == VAR_4) {
        FUNC_3(VAR_6, "inet6");
    } else {
        FUNC_3(VAR_6, "uknown family");
    }
    return 3;
}
