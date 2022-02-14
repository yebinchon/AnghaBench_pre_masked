
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * connection; } ;
struct TYPE_5__ {int reused; scalar_t__ write_closed; scalar_t__ read_closed; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 TYPE_2__* FUNC_7 (int *,int) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_2)
{
    ngx_http_lua_socket_tcp_upstream_t *VAR_3;

    if (FUNC_2(VAR_2) != 1) {
        return FUNC_1(VAR_2, "expecting 1 argument "
                          "(including the object), but got %d", FUNC_2(VAR_2));
    }

    FUNC_0(VAR_2, 1, VAR_0);

    FUNC_6(VAR_2, 1, VAR_1);
    VAR_3 = FUNC_7(VAR_2, -1);

    if (VAR_3 == ((void*)0)
        || VAR_3->peer.connection == ((void*)0)
        || (VAR_3->read_closed && VAR_3->write_closed))
    {
        FUNC_5(VAR_2);
        FUNC_4(VAR_2, "closed");
        return 2;
    }

    FUNC_3(VAR_2, VAR_3->reused);
    return 1;
}
