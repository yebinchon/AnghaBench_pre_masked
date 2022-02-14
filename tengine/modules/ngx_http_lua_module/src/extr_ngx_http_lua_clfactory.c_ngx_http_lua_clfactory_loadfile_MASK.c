
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int ptr; } ;
struct TYPE_6__ {int ptr; } ;
struct TYPE_8__ {int extraline; scalar_t__ file_type; int * f; scalar_t__ sent_end; scalar_t__ sent_begin; int end_code_len; TYPE_2__ end_code; int begin_code_len; TYPE_1__ begin_code; } ;
typedef TYPE_3__ ngx_http_lua_clfactory_file_ctx_t ;
typedef int ngx_flag_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int * FUNC_3 (char const*,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,int) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,TYPE_3__*,char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*,char const*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 char* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,TYPE_3__*,int) ;
 int FUNC_16 (int *,char*,int) ;
 int VAR_11 ;
 int FUNC_17 (int,int *) ;

ngx_int_t
FUNC_18(lua_State *VAR_12, const char *VAR_13)
{
    int VAR_14, VAR_15, VAR_16;
    ngx_flag_t VAR_17;

    ngx_http_lua_clfactory_file_ctx_t VAR_18;


    int VAR_19;

    VAR_17 = 0;
    VAR_19 = FUNC_7(VAR_12) + 1;

    VAR_18.extraline = 0;
    VAR_18.file_type = VAR_10;


    VAR_18.begin_code.ptr = VAR_0;
    VAR_18.begin_code_len = VAR_1;
    VAR_18.end_code.ptr = VAR_2;
    VAR_18.end_code_len = VAR_3;


    FUNC_11(VAR_12, "@%s", VAR_13);

    VAR_18.f = FUNC_2(VAR_13, "r");
    if (VAR_18.f == ((void*)0)) {
        return FUNC_16(VAR_12, "open", VAR_19);
    }

    VAR_14 = FUNC_4(VAR_18.f);

    if (VAR_14 == '#') {
        VAR_18.extraline = 1;

        while ((VAR_14 = FUNC_4(VAR_18.f)) != VAR_4 && VAR_14 != '\n') {

        }

        if (VAR_14 == '\n') {
            VAR_14 = FUNC_4(VAR_18.f);
        }

        VAR_17 = 1;
    }

    if (VAR_14 == VAR_7[0] && VAR_13) {
        VAR_18.f = FUNC_3(VAR_13, "rb", VAR_18.f);

        if (VAR_18.f == ((void*)0)) {
            return FUNC_16(VAR_12, "reopen", VAR_19);
        }


        FUNC_5(VAR_12, VAR_6, "_LOADED", 1);
        FUNC_6(VAR_12, -1, "jit");

        if (FUNC_8(VAR_12, -1)) {
            VAR_18.file_type = VAR_8;

        } else {
            VAR_18.file_type = VAR_9;
        }

        FUNC_10(VAR_12, 2);







        if (VAR_18.file_type == VAR_8 && VAR_17) {

            if (VAR_13) {
                FUNC_0(VAR_18.f);
            }

            VAR_13 = FUNC_14(VAR_12, VAR_19) + 1;
            FUNC_11(VAR_12, "bad byte-code header in %s", VAR_13);
            FUNC_12(VAR_12, VAR_19);

            return VAR_5;
        }

        while ((VAR_14 = FUNC_4(VAR_18.f)) != VAR_4 && VAR_14 != VAR_7[0]) {

        }


        VAR_15 = FUNC_15(VAR_12, &VAR_18, VAR_19);

        if (VAR_15 != 0) {
            return VAR_15;
        }


        VAR_18.extraline = 0;
    }


    if (VAR_18.file_type == VAR_10) {
        FUNC_17(VAR_14, VAR_18.f);
    }

    VAR_18.sent_begin = VAR_18.sent_end = 0;




    VAR_15 = FUNC_9(VAR_12, VAR_11, &VAR_18,
                      FUNC_14(VAR_12, -1));

    VAR_16 = FUNC_1(VAR_18.f);

    if (VAR_13) {
        FUNC_0(VAR_18.f);
    }

    if (VAR_16) {
        FUNC_13(VAR_12, VAR_19);
        return FUNC_16(VAR_12, "read", VAR_19);
    }

    FUNC_12(VAR_12, VAR_19);

    return VAR_15;
}
