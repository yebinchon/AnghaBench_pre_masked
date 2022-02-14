
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {TYPE_1__* conf; scalar_t__ read_timeout; } ;
typedef TYPE_2__ ngx_http_lua_socket_udp_upstream_t ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ read_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 TYPE_2__* FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_2)
{
    int VAR_3;
    ngx_int_t VAR_4;

    ngx_http_lua_socket_udp_upstream_t *VAR_5;

    VAR_3 = FUNC_1(VAR_2);

    if (VAR_3 != 2) {
        return FUNC_0(VAR_2, "ngx.socket settimout: expecting at least 2 "
                          "arguments (including the object) but seen %d",
                          FUNC_1(VAR_2));
    }

    VAR_4 = (ngx_int_t) FUNC_4(VAR_2, 2);

    FUNC_3(VAR_2, 1, VAR_1);

    FUNC_2(VAR_2, 1, VAR_0);
    VAR_5 = FUNC_5(VAR_2, -1);

    if (VAR_5) {
        if (VAR_4 > 0) {
            VAR_5->read_timeout = (ngx_msec_t) VAR_4;

        } else {
            VAR_5->read_timeout = VAR_5->conf->read_timeout;
        }
    }

    return 0;
}
