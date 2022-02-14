
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_19__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_20__ {int requires_access; int requires_capture_filter; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_18__ {int * lengths; TYPE_3__ value; } ;
struct TYPE_21__ {char* access_chunkname; char* access_src_key; scalar_t__ access_handler; TYPE_2__ access_src; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
typedef scalar_t__ ngx_http_handler_pt ;
struct TYPE_22__ {TYPE_2__* complex_value; TYPE_3__* value; TYPE_7__* cf; } ;
typedef TYPE_6__ ngx_http_compile_complex_value_t ;
struct TYPE_23__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_24__ {int * post; } ;
typedef TYPE_8__ ngx_command_t ;
struct TYPE_17__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*) ;
 char* FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 TYPE_4__* FUNC_4 (TYPE_7__*,int ) ;
 int * VAR_10 ;
 char* FUNC_5 (char*,int ,scalar_t__) ;
 char* FUNC_6 (TYPE_7__*,char*,int,size_t*) ;
 int VAR_11 ;
 int FUNC_7 (TYPE_6__*,int) ;
 char* FUNC_8 (int ,scalar_t__) ;

char *
FUNC_9(ngx_conf_t *VAR_12, ngx_command_t *VAR_13, void *VAR_14)
{
    size_t VAR_15;
    u_char *VAR_16, *VAR_17;
    ngx_str_t *VAR_18;
    ngx_http_lua_main_conf_t *VAR_19;
    ngx_http_lua_loc_conf_t *VAR_20 = VAR_14;

    ngx_http_compile_complex_value_t VAR_21;

    FUNC_0("enter");


    if (VAR_13->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_20->access_handler) {
        return "is duplicate";
    }

    VAR_18 = VAR_12->args->elts;

    if (VAR_18[1].len == 0) {

        FUNC_1(VAR_8, VAR_12, 0,
                           "invalid location config: no runnable Lua code");

        return VAR_0;
    }

    if (VAR_13->post == VAR_10) {
        VAR_17 = FUNC_6(VAR_12, "access_by_lua",
                                                sizeof("access_by_lua") - 1,
                                                &VAR_15);
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->access_chunkname = VAR_17;



        VAR_20->access_src.value = VAR_18[1];

        VAR_16 = FUNC_8(VAR_12->pool,
                       VAR_15 + VAR_5 + 1);
        if (VAR_16 == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->access_src_key = VAR_16;

        VAR_16 = FUNC_2(VAR_16, VAR_17, VAR_15);
        VAR_16 = FUNC_2(VAR_16, VAR_6, VAR_7);
        VAR_16 = FUNC_5(VAR_16, VAR_18[1].data, VAR_18[1].len);
        *VAR_16 = '\0';

    } else {
        FUNC_7(&VAR_21, sizeof(ngx_http_compile_complex_value_t));
        VAR_21.cf = VAR_12;
        VAR_21.value = &VAR_18[1];
        VAR_21.complex_value = &VAR_20->access_src;

        if (FUNC_3(&VAR_21) != VAR_9) {
            return VAR_0;
        }

        if (VAR_20->access_src.lengths == ((void*)0)) {

            VAR_16 = FUNC_8(VAR_12->pool, VAR_2 + 1);
            if (VAR_16 == ((void*)0)) {
                return VAR_0;
            }

            VAR_20->access_src_key = VAR_16;

            VAR_16 = FUNC_2(VAR_16, VAR_3, VAR_4);
            VAR_16 = FUNC_5(VAR_16, VAR_18[1].data, VAR_18[1].len);
            *VAR_16 = '\0';
        }
    }

    VAR_20->access_handler = (ngx_http_handler_pt) VAR_13->post;

    VAR_19 = FUNC_4(VAR_12, VAR_11);

    VAR_19->requires_access = 1;
    VAR_19->requires_capture_filter = 1;

    return VAR_1;
}
