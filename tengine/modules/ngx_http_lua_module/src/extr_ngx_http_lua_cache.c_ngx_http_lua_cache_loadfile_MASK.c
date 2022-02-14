
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef int lua_State ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 char* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 char* FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (int ,int *,int ,char*,char const*) ;
 int FUNC_11 (int ,int *,int ,char*,char const*,char const*) ;
 int FUNC_12 (char const*) ;

ngx_int_t
FUNC_13(ngx_log_t *VAR_8, lua_State *VAR_9,
    const u_char *VAR_10, const u_char *VAR_11)
{
    int VAR_12;
    ngx_int_t VAR_13, VAR_14 = VAR_0;
    u_char *VAR_15;
    u_char VAR_16[VAR_1 + 1];
    const char *VAR_17 = ((void*)0);

    VAR_12 = FUNC_1(VAR_9);


    if (VAR_11 == ((void*)0)) {
        FUNC_0("CACHE file key not pre-calculated...calculating");
        VAR_15 = FUNC_5(VAR_16, VAR_2, VAR_3);

        VAR_15 = FUNC_9(VAR_15, VAR_10, FUNC_12(VAR_10));

        *VAR_15 = '\0';
        VAR_11 = VAR_16;

    } else {
        FUNC_0("CACHE file key already pre-calculated");
    }

    FUNC_10(VAR_5, VAR_8, 0,
                   "looking up Lua code cache with key '%s'", VAR_11);

    VAR_13 = FUNC_6(VAR_8, VAR_9, (char *) VAR_11);
    if (VAR_13 == VAR_7) {

        FUNC_0("Code cache hit! cache key='%s', stack top=%d, file path='%s'",
           VAR_11, FUNC_1(VAR_9), VAR_10);
        return VAR_7;
    }

    if (VAR_13 == VAR_0) {
        return VAR_0;
    }



    FUNC_0("Code cache missed! cache key='%s', stack top=%d, file path='%s'",
       VAR_11, FUNC_1(VAR_9), VAR_10);


    VAR_13 = FUNC_8(VAR_9, (char *) VAR_10);

    FUNC_0("loadfile returns %d (%d)", (int) VAR_13, 129);

    if (VAR_13 != 0) {

        switch (VAR_13) {
        case 128:
            VAR_17 = "memory allocation error";
            break;

        case 129:
            VAR_14 = VAR_4;


        default:
            if (FUNC_2(VAR_9, -1)) {
                VAR_17 = FUNC_4(VAR_9, -1);

            } else {
                VAR_17 = "unknown error";
            }
        }

        goto error;
    }



    VAR_13 = FUNC_7(VAR_9, (char *) VAR_11);
    if (VAR_13 != VAR_7) {
        VAR_17 = "fail to generate new closure from the closure factory";
        goto error;
    }

    return VAR_7;

error:

    FUNC_11(VAR_6, VAR_8, 0,
                  "failed to load external Lua file \"%s\": %s", VAR_10, VAR_17);

    FUNC_3(VAR_9, VAR_12);
    return VAR_14;
}
