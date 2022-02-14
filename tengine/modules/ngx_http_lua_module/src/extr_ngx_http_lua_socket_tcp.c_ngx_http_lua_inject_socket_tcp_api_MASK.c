
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
typedef int lua_State ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*,int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int ,int *,int ,char*,scalar_t__) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

void
FUNC_9(ngx_log_t *VAR_29, lua_State *VAR_30)
{
    ngx_int_t VAR_31;

    FUNC_1(VAR_30, 0, 4 );

    FUNC_2(VAR_30, VAR_7);
    FUNC_4(VAR_30, -1);
    FUNC_6(VAR_30, -3, "tcp");
    FUNC_6(VAR_30, -2, "stream");

    {
        const char VAR_32[] = "local sock = ngx.socket.tcp()"
                            " local ok, err = sock:connect(...)"
                            " if ok then return sock else return nil, err end";

        VAR_31 = FUNC_0(VAR_30, VAR_32, sizeof(VAR_32) - 1, "=ngx.socket.connect");
    }

    if (VAR_31 != VAR_2) {
        FUNC_8(VAR_1, VAR_29, 0,
                      "failed to load Lua code for ngx.socket.connect(): %i",
                      VAR_31);

    } else {
        FUNC_6(VAR_30, -2, "connect");
    }

    FUNC_6(VAR_30, -2, "socket");


    FUNC_3(VAR_30, FUNC_7(
                          VAR_25));
    FUNC_1(VAR_30, 0 , 5 );

    FUNC_2(VAR_30, VAR_11);
    FUNC_6(VAR_30, -2, "receive");

    FUNC_2(VAR_30, VAR_13);
    FUNC_6(VAR_30, -2, "receiveuntil");

    FUNC_2(VAR_30, VAR_17);
    FUNC_6(VAR_30, -2, "settimeout");

    FUNC_2(VAR_30, VAR_18);
    FUNC_6(VAR_30, -2, "settimeouts");

    FUNC_4(VAR_30, -1);
    FUNC_6(VAR_30, -2, "__index");

    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_24));
    FUNC_1(VAR_30, 0 , 6 );

    FUNC_2(VAR_30, VAR_11);
    FUNC_6(VAR_30, -2, "receive");

    FUNC_2(VAR_30, VAR_13);
    FUNC_6(VAR_30, -2, "receiveuntil");

    FUNC_2(VAR_30, VAR_14);
    FUNC_6(VAR_30, -2, "send");

    FUNC_2(VAR_30, VAR_17);
    FUNC_6(VAR_30, -2, "settimeout");

    FUNC_2(VAR_30, VAR_18);
    FUNC_6(VAR_30, -2, "settimeouts");

    FUNC_4(VAR_30, -1);
    FUNC_6(VAR_30, -2, "__index");

    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_27));
    FUNC_1(VAR_30, 0 , 12 );

    FUNC_2(VAR_30, VAR_9);
    FUNC_6(VAR_30, -2, "connect");
    FUNC_2(VAR_30, VAR_11);
    FUNC_6(VAR_30, -2, "receive");

    FUNC_2(VAR_30, VAR_12);
    FUNC_6(VAR_30, -2, "receiveany");

    FUNC_2(VAR_30, VAR_13);
    FUNC_6(VAR_30, -2, "receiveuntil");

    FUNC_2(VAR_30, VAR_14);
    FUNC_6(VAR_30, -2, "send");

    FUNC_2(VAR_30, VAR_8);
    FUNC_6(VAR_30, -2, "close");

    FUNC_2(VAR_30, VAR_16);
    FUNC_6(VAR_30, -2, "setoption");

    FUNC_2(VAR_30, VAR_17);
    FUNC_6(VAR_30, -2, "settimeout");

    FUNC_2(VAR_30, VAR_18);
    FUNC_6(VAR_30, -2, "settimeouts");

    FUNC_2(VAR_30, VAR_10);
    FUNC_6(VAR_30, -2, "getreusedtimes");

    FUNC_2(VAR_30, VAR_15);
    FUNC_6(VAR_30, -2, "setkeepalive");

    FUNC_4(VAR_30, -1);
    FUNC_6(VAR_30, -2, "__index");
    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_28));
    FUNC_1(VAR_30, 0 , 1 );
    FUNC_2(VAR_30, VAR_20);
    FUNC_6(VAR_30, -2, "__gc");
    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_3));
    FUNC_1(VAR_30, 0 , 1 );
    FUNC_2(VAR_30, VAR_5);
    FUNC_6(VAR_30, -2, "__gc");
    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_23));
    FUNC_1(VAR_30, 0, 1);
    FUNC_2(VAR_30, VAR_6);
    FUNC_6(VAR_30, -2, "__gc");
    FUNC_5(VAR_30, VAR_0);



    FUNC_3(VAR_30, FUNC_7(
                          VAR_22));
    FUNC_1(VAR_30, 0 , 1 );
    FUNC_2(VAR_30, VAR_4);
    FUNC_6(VAR_30, -2, "__gc");
    FUNC_5(VAR_30, VAR_0);
}
