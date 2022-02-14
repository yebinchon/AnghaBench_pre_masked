
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int const*,int,int,int const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*,size_t,char const*) ;
 int FUNC_8 (int ,int *,int ,char*,int const*) ;
 int FUNC_9 (int ,int *,int ,char*,char const*) ;

ngx_int_t
FUNC_10(ngx_log_t *VAR_5, lua_State *VAR_6,
    const u_char *VAR_7, size_t VAR_8, const u_char *VAR_9,
    const char *VAR_10)
{
    int VAR_11;
    ngx_int_t VAR_12;
    const char *VAR_13 = ((void*)0);

    VAR_11 = FUNC_1(VAR_6);

    FUNC_8(VAR_2, VAR_5, 0,
                   "looking up Lua code cache with key '%s'", VAR_9);

    VAR_12 = FUNC_5(VAR_5, VAR_6, (char *) VAR_9);
    if (VAR_12 == VAR_4) {

        FUNC_0("Code cache hit! cache key='%s', stack top=%d, script='%.*s'",
           VAR_9, FUNC_1(VAR_6), (int) VAR_8, VAR_7);
        return VAR_4;
    }

    if (VAR_12 == VAR_1) {
        return VAR_1;
    }



    FUNC_0("Code cache missed! cache key='%s', stack top=%d, script='%.*s'",
       VAR_9, FUNC_1(VAR_6), (int) VAR_8, VAR_7);


    VAR_12 = FUNC_7(VAR_6, (char *) VAR_7, VAR_8, VAR_10);

    if (VAR_12 != 0) {

        if (VAR_12 == VAR_0) {
            VAR_13 = "memory allocation error";

        } else {
            if (FUNC_2(VAR_6, -1)) {
                VAR_13 = FUNC_4(VAR_6, -1);

            } else {
                VAR_13 = "unknown error";
            }
        }

        goto error;
    }



    VAR_12 = FUNC_6(VAR_6, (char *) VAR_9);
    if (VAR_12 != VAR_4) {
        VAR_13 = "fail to generate new closure from the closure factory";
        goto error;
    }

    return VAR_4;

error:

    FUNC_9(VAR_3, VAR_5, 0,
                  "failed to load inlined Lua code: %s", VAR_13);
    FUNC_3(VAR_6, VAR_11);
    return VAR_1;
}
