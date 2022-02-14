
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ eof; scalar_t__ acquired_raw_req_socket; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,TYPE_3__*,int) ;
 TYPE_2__* FUNC_8 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_10 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_7)
{
    ngx_http_request_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;
    ngx_int_t VAR_10;

    VAR_8 = FUNC_8(VAR_7);
    if (VAR_8 == ((void*)0)) {
        return FUNC_1(VAR_7, "no request object found");
    }

    if (FUNC_2(VAR_7) != 0) {
        return FUNC_1(VAR_7, "no argument is expected");
    }

    VAR_9 = FUNC_6(VAR_8, VAR_6);
    if (VAR_9 == ((void*)0)) {
        return FUNC_1(VAR_7, "no ctx found");
    }

    if (VAR_9->acquired_raw_req_socket) {
        FUNC_5(VAR_7);
        FUNC_4(VAR_7, "raw request socket acquired");
        return 2;
    }

    if (VAR_9->eof) {
        FUNC_5(VAR_7);
        FUNC_4(VAR_7, "seen eof");
        return 2;
    }

    FUNC_7(VAR_7, VAR_9, VAR_3
                               | VAR_1
                               | VAR_2);

    FUNC_10(VAR_5, VAR_8->connection->log, 0,
                   "lua send eof");

    VAR_10 = FUNC_9(VAR_8, VAR_9, ((void*)0) );

    FUNC_0("send chain: %d", (int) VAR_10);

    if (VAR_10 == VAR_0 || VAR_10 >= VAR_4) {
        FUNC_5(VAR_7);
        FUNC_4(VAR_7, "nginx output filter error");
        return 2;
    }

    FUNC_3(VAR_7, 1);
    return 1;
}
