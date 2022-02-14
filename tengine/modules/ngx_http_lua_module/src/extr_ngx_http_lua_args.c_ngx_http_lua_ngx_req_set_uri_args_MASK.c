
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {size_t len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_8__ {size_t len; int * data; } ;
struct TYPE_10__ {scalar_t__ valid_unparsed_uri; TYPE_1__ args; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int lua_State ;





 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int *,int,TYPE_2__*) ;
 int FUNC_11 (int *,int *,size_t) ;
 int * FUNC_12 (int ,size_t) ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_0)
{
    ngx_http_request_t *VAR_1;
    ngx_str_t VAR_2;
    const char *VAR_3;
    size_t VAR_4;
    u_char *VAR_5;

    if (FUNC_4(VAR_0) != 1) {
        return FUNC_2(VAR_0, "expecting 1 argument but seen %d",
                          FUNC_4(VAR_0));
    }

    VAR_1 = FUNC_9(VAR_0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_2(VAR_0, "no request object found");
    }

    FUNC_8(VAR_0, VAR_1);

    switch (FUNC_7(VAR_0, 1)) {
    case 130:
    case 129:
        VAR_5 = (u_char *) FUNC_6(VAR_0, 1, &VAR_4);

        VAR_2.data = FUNC_12(VAR_1->pool, VAR_4);
        if (VAR_2.data == ((void*)0)) {
            return FUNC_2(VAR_0, "no memory");
        }

        FUNC_11(VAR_2.data, VAR_5, VAR_4);

        VAR_2.len = VAR_4;
        break;

    case 128:
        FUNC_10(VAR_1, VAR_0, 1, &VAR_2);

        FUNC_0("args: %.*s", (int) VAR_2.len, VAR_2.data);

        break;

    default:
        VAR_3 = FUNC_5(VAR_0, "string, number, or table expected, "
                              "but got %s", FUNC_3(VAR_0, 2));
        return FUNC_1(VAR_0, 1, VAR_3);
    }

    FUNC_0("args: %.*s", (int) VAR_2.len, VAR_2.data);

    VAR_1->args.data = VAR_2.data;
    VAR_1->args.len = VAR_2.len;

    VAR_1->valid_unparsed_uri = 0;

    return 0;
}
