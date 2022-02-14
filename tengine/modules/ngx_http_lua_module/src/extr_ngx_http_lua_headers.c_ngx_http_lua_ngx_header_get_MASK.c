
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_5__ {char* data; size_t len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_http_request_t ;
struct TYPE_6__ {scalar_t__ transform_underscores_in_resp_headers; } ;
typedef TYPE_2__ ngx_http_lua_loc_conf_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int FUNC_0 (char*,int,char*,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int * FUNC_4 (char*,char,size_t) ;
 int * FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *,TYPE_1__*) ;
 int * FUNC_9 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    u_char *VAR_3, VAR_4;
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6;
    size_t VAR_7;
    ngx_http_lua_loc_conf_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;

    VAR_2 = FUNC_9(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_2(VAR_1, "no request object found");
    }

    VAR_9 = FUNC_5(VAR_2, VAR_0);
    if (VAR_9 == ((void*)0)) {
        return FUNC_2(VAR_1, "no ctx found");
    }

    FUNC_7(VAR_1, VAR_2);


    VAR_3 = (u_char *) FUNC_1(VAR_1, 2, &VAR_7);

    FUNC_0("key: %.*s, len %d", (int) VAR_7, VAR_3, (int) VAR_7);

    VAR_8 = FUNC_6(VAR_2, VAR_0);
    if (VAR_8->transform_underscores_in_resp_headers
        && FUNC_4(VAR_3, '_', VAR_7) != ((void*)0))
    {
        VAR_5.data = (u_char *) FUNC_3(VAR_1, VAR_7);
        if (VAR_5.data == ((void*)0)) {
            return FUNC_2(VAR_1, "no memory");
        }


        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
            VAR_4 = VAR_3[VAR_6];
            if (VAR_4 == '_') {
                VAR_4 = '-';
            }
            VAR_5.data[VAR_6] = VAR_4;
        }

    } else {
        VAR_5.data = VAR_3;
    }

    VAR_5.len = VAR_7;

    return FUNC_8(VAR_1, VAR_2, VAR_9, &VAR_5);
}
