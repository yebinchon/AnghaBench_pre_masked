
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {char* data; size_t len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ http_version; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,char*,...) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,size_t) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__,TYPE_1__,int) ;
 int FUNC_10 (char*,char*,size_t) ;
 void* FUNC_11 (int ,size_t) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_4)
{
    ngx_http_request_t *VAR_5;
    u_char *VAR_6;
    ngx_str_t VAR_7;
    ngx_str_t VAR_8;
    ngx_uint_t VAR_9;
    size_t VAR_10;
    ngx_int_t VAR_11;
    ngx_uint_t VAR_12;

    VAR_5 = FUNC_8(VAR_4);
    if (VAR_5 == ((void*)0)) {
        return FUNC_2(VAR_4, "no request object found");
    }

    FUNC_7(VAR_4, VAR_5);

    if (VAR_5->http_version < VAR_3) {
        return 0;
    }

    VAR_6 = (u_char *) FUNC_1(VAR_4, 1, &VAR_10);

    FUNC_0("key: %.*s, len %d", (int) VAR_10, VAR_6, (int) VAR_10);
    VAR_7.data = FUNC_11(VAR_5->pool, VAR_10 + 1);
    if (VAR_7.data == ((void*)0)) {
        return FUNC_2(VAR_4, "no memory");
    }

    FUNC_10(VAR_7.data, VAR_6, VAR_10);

    VAR_7.data[VAR_10] = '\0';

    VAR_7.len = VAR_10;

    if (FUNC_6(VAR_4, 2) == VAR_0) {
        FUNC_12(&VAR_8);

    } else if (FUNC_6(VAR_4, 2) == VAR_1) {
        VAR_12 = FUNC_4(VAR_4, 2);
        if (VAR_12 == 0) {
            FUNC_12(&VAR_8);

        } else {
            for (VAR_9 = 1; VAR_9 <= VAR_12; VAR_9++) {
                FUNC_0("header value table index %d, top: %d", (int) VAR_9,
                   FUNC_3(VAR_4));

                FUNC_5(VAR_4, 2, VAR_9);
                VAR_6 = (u_char *) FUNC_1(VAR_4, -1, &VAR_10);






                VAR_8.data = FUNC_11(VAR_5->pool, VAR_10 + 1);
                if (VAR_8.data == ((void*)0)) {
                    return FUNC_2(VAR_4, "no memory");
                }

                FUNC_10(VAR_8.data, VAR_6, VAR_10 + 1);
                VAR_8.len = VAR_10;

                VAR_11 = FUNC_9(VAR_5, VAR_7, VAR_8,
                                                   VAR_9 == 1 );

                if (VAR_11 == VAR_2) {
                    return FUNC_2(VAR_4,
                                      "failed to set header %s (error: %d)",
                                      VAR_7.data, (int) VAR_11);
                }
            }

            return 0;
        }

    } else {






        VAR_6 = (u_char *) FUNC_1(VAR_4, 2, &VAR_10);
        VAR_8.data = FUNC_11(VAR_5->pool, VAR_10 + 1);
        if (VAR_8.data == ((void*)0)) {
            return FUNC_2(VAR_4, "no memory");
        }

        FUNC_10(VAR_8.data, VAR_6, VAR_10 + 1);
        VAR_8.len = VAR_10;
    }

    FUNC_0("key: %.*s, value: %.*s",
       (int) VAR_7.len, VAR_7.data, (int) VAR_8.len, VAR_8.data);

    VAR_11 = FUNC_9(VAR_5, VAR_7, VAR_8, 1 );

    if (VAR_11 == VAR_2) {
        return FUNC_2(VAR_4, "failed to set header %s (error: %d)",
                          VAR_7.data, (int) VAR_11);
    }

    return 0;
}
