
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_8__ {int * connection; } ;
struct TYPE_9__ {scalar_t__ body_downstream; scalar_t__ raw_downstream; int * request; scalar_t__ write_closed; scalar_t__ read_closed; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ) ;
 TYPE_2__* FUNC_8 (int *,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*,int *) ;
 int FUNC_11 (int *,TYPE_2__*,int *) ;
 int FUNC_12 (int *,TYPE_2__*,int *) ;
 int FUNC_13 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_14(lua_State *VAR_2)
{
    ngx_http_request_t *VAR_3;
    ngx_http_lua_socket_tcp_upstream_t *VAR_4;

    if (FUNC_2(VAR_2) != 1) {
        return FUNC_1(VAR_2, "expecting 1 argument "
                          "(including the object) but seen %d", FUNC_2(VAR_2));
    }

    VAR_3 = FUNC_9(VAR_2);
    if (VAR_3 == ((void*)0)) {
        return FUNC_1(VAR_2, "no request found");
    }

    FUNC_0(VAR_2, 1, VAR_0);

    FUNC_7(VAR_2, 1, VAR_1);
    VAR_4 = FUNC_8(VAR_2, -1);
    FUNC_3(VAR_2, 1);

    if (VAR_4 == ((void*)0)
        || VAR_4->peer.connection == ((void*)0)
        || (VAR_4->read_closed && VAR_4->write_closed))
    {
        FUNC_6(VAR_2);
        FUNC_5(VAR_2, "closed");
        return 2;
    }

    if (VAR_4->request != VAR_3) {
        return FUNC_1(VAR_2, "bad request");
    }

    FUNC_10(VAR_3, VAR_4, VAR_2);
    FUNC_11(VAR_3, VAR_4, VAR_2);
    FUNC_12(VAR_3, VAR_4, VAR_2);

    if (VAR_4->raw_downstream || VAR_4->body_downstream) {
        FUNC_6(VAR_2);
        FUNC_5(VAR_2, "attempt to close a request socket");
        return 2;
    }

    FUNC_13(VAR_3, VAR_4);

    FUNC_4(VAR_2, 1);
    return 1;
}
