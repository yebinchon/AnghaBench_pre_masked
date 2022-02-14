
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct ipv6_mreq {unsigned int ipv6mr_interface; int ipv6mr_multiaddr; } ;
typedef int p_socket ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct ipv6_mreq*,int ,int) ;
 int FUNC_13 (int *,int ,int,int,char*,int) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_2, p_socket VAR_3, int VAR_4, int VAR_5)
{
    struct ipv6_mreq VAR_6;
    FUNC_12(&VAR_6, 0, sizeof(VAR_6));
    if (!FUNC_7(VAR_2, 3)) FUNC_0(VAR_2,3,FUNC_11(VAR_2, VAR_1));
    FUNC_8(VAR_2, "multiaddr");
    FUNC_3(VAR_2, 3);
    if (!FUNC_6(VAR_2, -1))
        FUNC_2(VAR_2, 3, "string 'multiaddr' field expected");
    if (!FUNC_1(VAR_0, FUNC_10(VAR_2, -1), &VAR_6.ipv6mr_multiaddr))
        FUNC_2(VAR_2, 3, "invalid 'multiaddr' ip address");
    FUNC_8(VAR_2, "interface");
    FUNC_3(VAR_2, 3);




    if (!FUNC_4(VAR_2, -1)) {
        if (FUNC_5(VAR_2, -1)) {
            VAR_6.ipv6mr_interface = (unsigned int) FUNC_9(VAR_2, -1);
        } else
          FUNC_2(VAR_2, -1, "number 'interface' field expected");
    }
    return FUNC_13(VAR_2, VAR_3, VAR_4, VAR_5, (char *) &VAR_6, sizeof(VAR_6));
}
