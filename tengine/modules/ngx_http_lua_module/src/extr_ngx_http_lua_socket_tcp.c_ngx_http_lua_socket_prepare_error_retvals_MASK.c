
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_http_request_t ;
struct TYPE_3__ {scalar_t__ socket_errno; } ;
typedef TYPE_1__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;
typedef int errstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__,int *,int) ;
 int * FUNC_4 (scalar_t__,int *,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_6(ngx_http_request_t *VAR_8,
    ngx_http_lua_socket_tcp_upstream_t *VAR_9, lua_State *VAR_10, ngx_uint_t VAR_11)
{
    u_char VAR_12[VAR_7];
    u_char *VAR_13;

    if (VAR_11 & (VAR_4
                   | VAR_5))
    {
        return 2;
    }

    FUNC_2(VAR_10);

    if (VAR_11 & VAR_6) {
        FUNC_0(VAR_10, "timeout");

    } else if (VAR_11 & VAR_2) {
        FUNC_0(VAR_10, "closed");

    } else if (VAR_11 & VAR_0) {
        FUNC_0(VAR_10, "buffer too small");

    } else if (VAR_11 & VAR_3) {
        FUNC_0(VAR_10, "no memory");

    } else if (VAR_11 & VAR_1) {
        FUNC_0(VAR_10, "client aborted");

    } else {

        if (VAR_9->socket_errno) {



            VAR_13 = FUNC_4(VAR_9->socket_errno, VAR_12, sizeof(VAR_12));


            FUNC_5(VAR_12, VAR_12, VAR_13 - VAR_12);
            FUNC_1(VAR_10, (char *) VAR_12, VAR_13 - VAR_12);

        } else {
            FUNC_0(VAR_10, "error");
        }
    }

    return 2;
}
