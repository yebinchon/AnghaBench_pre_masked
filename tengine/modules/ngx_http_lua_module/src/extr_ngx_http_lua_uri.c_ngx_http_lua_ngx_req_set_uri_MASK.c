
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {size_t len; int * data; } ;
struct TYPE_14__ {int internal; int uri_changed; scalar_t__ valid_location; scalar_t__ valid_unparsed_uri; TYPE_2__ uri; int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ entered_content_phase; scalar_t__ entered_access_phase; scalar_t__ entered_rewrite_phase; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *,TYPE_4__*,int ) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 TYPE_3__* FUNC_11 (int *) ;
 int VAR_3 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,int ,int ,char*,size_t,int *) ;
 int FUNC_14 (int *,int *,size_t) ;
 int * FUNC_15 (int ,size_t) ;

__attribute__((used)) static int
FUNC_16(lua_State *VAR_4)
{
    ngx_http_request_t *VAR_5;
    size_t VAR_6;
    u_char *VAR_7;
    int VAR_8;
    int VAR_9 = 0;
    ngx_http_lua_ctx_t *VAR_10;

    VAR_8 = FUNC_4(VAR_4);

    if (VAR_8 != 1 && VAR_8 != 2) {
        return FUNC_3(VAR_4, "expecting 1 or 2 arguments but seen %d", VAR_8);
    }

    VAR_5 = FUNC_11(VAR_4);
    if (VAR_5 == ((void*)0)) {
        return FUNC_3(VAR_4, "no request found");
    }

    FUNC_9(VAR_4, VAR_5);

    VAR_7 = (u_char *) FUNC_1(VAR_4, 1, &VAR_6);

    if (VAR_6 == 0) {
        return FUNC_3(VAR_4, "attempt to use zero-length uri");
    }

    if (VAR_8 == 2) {

        FUNC_2(VAR_4, 2, VAR_0);
        VAR_9 = FUNC_5(VAR_4, 2);

        if (VAR_9) {

            VAR_10 = FUNC_7(VAR_5, VAR_3);
            if (VAR_10 == ((void*)0)) {
                return FUNC_3(VAR_4, "no ctx found");
            }

            FUNC_0("rewrite: %d, access: %d, content: %d",
               (int) VAR_10->entered_rewrite_phase,
               (int) VAR_10->entered_access_phase,
               (int) VAR_10->entered_content_phase);

            FUNC_8(VAR_4, VAR_10, VAR_1);

            FUNC_13(VAR_2, VAR_5->connection->log, 0,
                           "lua set uri jump to \"%*s\"", VAR_6, VAR_7);

            FUNC_10(VAR_4, VAR_10);
        }
    }

    VAR_5->uri.data = FUNC_15(VAR_5->pool, VAR_6);
    if (VAR_5->uri.data == ((void*)0)) {
        return FUNC_3(VAR_4, "no memory");
    }

    FUNC_14(VAR_5->uri.data, VAR_7, VAR_6);

    VAR_5->uri.len = VAR_6;

    VAR_5->internal = 1;
    VAR_5->valid_unparsed_uri = 0;

    FUNC_12(VAR_5);

    if (VAR_9) {
        VAR_5->uri_changed = 1;

        return FUNC_6(VAR_4, 0);
    }

    VAR_5->valid_location = 0;
    VAR_5->uri_changed = 0;

    return 0;
}
