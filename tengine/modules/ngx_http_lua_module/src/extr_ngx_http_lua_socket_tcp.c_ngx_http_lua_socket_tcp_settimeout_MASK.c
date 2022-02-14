
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {TYPE_1__* conf; void* connect_timeout; void* send_timeout; void* read_timeout; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;
struct TYPE_4__ {void* connect_timeout; void* send_timeout; void* read_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 TYPE_2__* FUNC_6 (int *,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_4)
{
    int VAR_5;
    ngx_int_t VAR_6;

    ngx_http_lua_socket_tcp_upstream_t *VAR_7;

    VAR_5 = FUNC_1(VAR_4);

    if (VAR_5 != 2) {
        return FUNC_0(VAR_4, "ngx.socket settimout: expecting 2 arguments "
                          "(including the object) but seen %d", FUNC_1(VAR_4));
    }

    VAR_6 = (ngx_int_t) FUNC_5(VAR_4, 2);
    if (VAR_6 >> 31) {
        return FUNC_0(VAR_4, "bad timeout value");
    }

    FUNC_2(VAR_4, VAR_6);
    FUNC_2(VAR_4, VAR_6);

    FUNC_4(VAR_4, 1, VAR_0);
    FUNC_4(VAR_4, 1, VAR_3);
    FUNC_4(VAR_4, 1, VAR_2);

    FUNC_3(VAR_4, 1, VAR_1);
    VAR_7 = FUNC_6(VAR_4, -1);

    if (VAR_7) {
        if (VAR_6 > 0) {
            VAR_7->read_timeout = (ngx_msec_t) VAR_6;
            VAR_7->send_timeout = (ngx_msec_t) VAR_6;
            VAR_7->connect_timeout = (ngx_msec_t) VAR_6;

        } else {
            VAR_7->read_timeout = VAR_7->conf->read_timeout;
            VAR_7->send_timeout = VAR_7->conf->send_timeout;
            VAR_7->connect_timeout = VAR_7->conf->connect_timeout;
        }
    }

    return 0;
}
