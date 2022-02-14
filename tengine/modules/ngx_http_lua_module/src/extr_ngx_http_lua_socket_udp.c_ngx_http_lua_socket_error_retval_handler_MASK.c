
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {int ft_type; scalar_t__ socket_errno; } ;
typedef TYPE_3__ ngx_http_lua_socket_udp_upstream_t ;
typedef int lua_State ;
typedef int errstr ;
struct TYPE_6__ {int log; } ;


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
 int FUNC_3 (int ,int ,int ,char*) ;
 int * FUNC_4 (scalar_t__,int *,int) ;
 int * FUNC_5 (scalar_t__,int *,int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_7(ngx_http_request_t *VAR_8,
    ngx_http_lua_socket_udp_upstream_t *VAR_9, lua_State *VAR_10)
{
    u_char VAR_11[VAR_7];
    u_char *VAR_12;

    FUNC_3(VAR_6, VAR_8->connection->log, 0,
                   "lua udp socket error retval handler");

    if (VAR_9->ft_type & VAR_4) {
        return 2;
    }

    FUNC_2(VAR_10);

    if (VAR_9->ft_type & VAR_3) {
        FUNC_0(VAR_10, "partial write");

    } else if (VAR_9->ft_type & VAR_5) {
        FUNC_0(VAR_10, "timeout");

    } else if (VAR_9->ft_type & VAR_1) {
        FUNC_0(VAR_10, "closed");

    } else if (VAR_9->ft_type & VAR_0) {
        FUNC_0(VAR_10, "buffer too small");

    } else if (VAR_9->ft_type & VAR_2) {
        FUNC_0(VAR_10, "no memory");

    } else {

        if (VAR_9->socket_errno) {



            VAR_12 = FUNC_5(VAR_9->socket_errno, VAR_11, sizeof(VAR_11));


            FUNC_6(VAR_11, VAR_11, VAR_12 - VAR_11);
            FUNC_1(VAR_10, (char *) VAR_11, VAR_12 - VAR_11);

        } else {
            FUNC_0(VAR_10, "error");
        }
    }

    return 2;
}
