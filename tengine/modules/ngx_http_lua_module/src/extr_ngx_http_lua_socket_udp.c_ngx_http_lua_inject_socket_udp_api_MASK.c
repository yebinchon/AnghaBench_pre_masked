
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_9(ngx_log_t *VAR_10, lua_State *VAR_11)
{
    FUNC_1(VAR_11, -1, "socket");

    FUNC_3(VAR_11, VAR_1);
    FUNC_7(VAR_11, -2, "udp");


    FUNC_4(VAR_11, FUNC_8(
                          VAR_8));
    FUNC_0(VAR_11, 0 , 6 );

    FUNC_3(VAR_11, VAR_5);
    FUNC_7(VAR_11, -2, "setpeername");

    FUNC_3(VAR_11, VAR_4);
    FUNC_7(VAR_11, -2, "send");

    FUNC_3(VAR_11, VAR_3);
    FUNC_7(VAR_11, -2, "receive");

    FUNC_3(VAR_11, VAR_6);
    FUNC_7(VAR_11, -2, "settimeout");

    FUNC_3(VAR_11, VAR_2);
    FUNC_7(VAR_11, -2, "close");

    FUNC_5(VAR_11, -1);
    FUNC_7(VAR_11, -2, "__index");
    FUNC_6(VAR_11, VAR_0);



    FUNC_4(VAR_11, FUNC_8(
                          VAR_9));
    FUNC_0(VAR_11, 0 , 1 );
    FUNC_3(VAR_11, VAR_7);
    FUNC_7(VAR_11, -2, "__gc");
    FUNC_6(VAR_11, VAR_0);


    FUNC_2(VAR_11, 1);
}
