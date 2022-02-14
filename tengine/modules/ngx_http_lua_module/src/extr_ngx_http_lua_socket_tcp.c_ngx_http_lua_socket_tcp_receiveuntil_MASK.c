
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {unsigned int inclusive; } ;
typedef TYPE_4__ ngx_http_lua_socket_compiled_pattern_t ;
typedef int lua_State ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 TYPE_3__* FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *,scalar_t__,TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_19 (int ,int ,int ,char*) ;
 int FUNC_20 (TYPE_4__*,size_t) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_21(lua_State *VAR_6)
{
    ngx_http_request_t *VAR_7;
    int VAR_8;
    ngx_str_t VAR_9;
    ngx_int_t VAR_10;
    size_t VAR_11;
    unsigned VAR_12 = 0;

    ngx_http_lua_socket_compiled_pattern_t *VAR_13;

    VAR_8 = FUNC_5(VAR_6);
    if (VAR_8 != 2 && VAR_8 != 3) {
        return FUNC_2(VAR_6, "expecting 2 or 3 arguments "
                          "(including the object), but got %d", VAR_8);
    }

    if (VAR_8 == 3) {


        FUNC_1(VAR_6, 3, VAR_1);

        FUNC_4(VAR_6, 3, "inclusive");

        switch (FUNC_15(VAR_6, -1)) {
            case 128:

                break;

            case 129:
                if (FUNC_14(VAR_6, -1)) {
                    VAR_12 = 1;
                }
                break;

            default:
                return FUNC_2(VAR_6, "bad \"inclusive\" option value type: %s",
                                  FUNC_3(VAR_6, -1));

        }

        FUNC_7(VAR_6, 2);
    }

    VAR_7 = FUNC_16(VAR_6);
    if (VAR_7 == ((void*)0)) {
        return FUNC_2(VAR_6, "no request found");
    }

    FUNC_19(VAR_2, VAR_7->connection->log, 0,
                   "lua tcp socket calling receiveuntil() method");

    FUNC_1(VAR_6, 1, VAR_1);

    VAR_9.data = (u_char *) FUNC_0(VAR_6, 2, &VAR_9.len);
    if (VAR_9.len == 0) {
        FUNC_11(VAR_6);
        FUNC_10(VAR_6, "pattern is empty");
        return 2;
    }

    VAR_11 = sizeof(ngx_http_lua_socket_compiled_pattern_t);

    VAR_13 = FUNC_6(VAR_6, VAR_11);
    if (VAR_13 == ((void*)0)) {
        return FUNC_2(VAR_6, "no memory");
    }

    FUNC_9(VAR_6, FUNC_17(
                          VAR_5));
    FUNC_12(VAR_6, VAR_0);
    FUNC_13(VAR_6, -2);

    FUNC_20(VAR_13, VAR_11);

    VAR_13->inclusive = VAR_12;

    VAR_10 = FUNC_18(VAR_9.data, VAR_9.len, VAR_13,
                                             VAR_7->connection->log);

    if (VAR_10 != VAR_3) {
        FUNC_11(VAR_6);
        FUNC_10(VAR_6, "failed to compile pattern");
        return 2;
    }

    FUNC_8(VAR_6, VAR_4, 3);
    return 1;
}
