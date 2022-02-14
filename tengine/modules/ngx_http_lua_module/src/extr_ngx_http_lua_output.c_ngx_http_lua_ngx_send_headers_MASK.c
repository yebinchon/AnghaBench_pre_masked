
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; int header_sent; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int header_sent; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_10__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 TYPE_2__* FUNC_6 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_lua_ctx_t *VAR_10;

    VAR_9 = FUNC_6(VAR_7);
    if (VAR_9 == ((void*)0)) {
        return FUNC_0(VAR_7, "no request found");
    }

    VAR_10 = FUNC_4(VAR_9, VAR_6);
    if (VAR_10 == ((void*)0)) {
        return FUNC_0(VAR_7, "no ctx found");
    }

    FUNC_5(VAR_7, VAR_10, VAR_3
                               | VAR_1
                               | VAR_2);

    if (!VAR_9->header_sent && !VAR_10->header_sent) {
        FUNC_8(VAR_4, VAR_9->connection->log, 0,
                       "lua send headers");

        VAR_8 = FUNC_7(VAR_9, VAR_10);
        if (VAR_8 == VAR_0 || VAR_8 > VAR_5) {
            FUNC_3(VAR_7);
            FUNC_2(VAR_7, "nginx output filter error");
            return 2;
        }
    }

    FUNC_1(VAR_7, 1);
    return 1;
}
