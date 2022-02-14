
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_10__ {scalar_t__ len; scalar_t__ data; scalar_t__ not_found; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_11__ {int ncaptures; int* captures; int * captures_data; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int lua_State ;
typedef scalar_t__ LUA_NUMBER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,size_t) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_2)
{
    ngx_http_request_t *VAR_3;
    u_char *VAR_4, *VAR_5;
    size_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_str_t VAR_8;
    ngx_http_variable_value_t *VAR_9;
    VAR_3 = FUNC_11(VAR_2);
    if (VAR_3 == ((void*)0)) {
        return FUNC_1(VAR_2, "no request object found");
    }

    FUNC_10(VAR_2, VAR_3);
    if (FUNC_7(VAR_2, -1) != VAR_1) {
        return FUNC_1(VAR_2, "bad variable name");
    }

    VAR_4 = (u_char *) FUNC_5(VAR_2, -1, &VAR_6);

    VAR_5 = FUNC_2(VAR_2, VAR_6);

    VAR_7 = FUNC_8(VAR_5, VAR_4, VAR_6);

    VAR_8.len = VAR_6;
    VAR_8.data = VAR_5;

    VAR_9 = FUNC_9(VAR_3, &VAR_8, VAR_7);

    if (VAR_9 == ((void*)0) || VAR_9->not_found) {
        FUNC_4(VAR_2);
        return 1;
    }

    FUNC_3(VAR_2, (const char *) VAR_9->data, (size_t) VAR_9->len);
    return 1;
}
