
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_22__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_23__ {int requires_capture_filter; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_21__ {int * lengths; TYPE_3__ value; } ;
struct TYPE_24__ {char* content_chunkname; char* content_src_key; scalar_t__ content_handler; TYPE_2__ content_src; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
typedef scalar_t__ ngx_http_handler_pt ;
struct TYPE_25__ {int handler; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {TYPE_2__* complex_value; TYPE_3__* value; TYPE_8__* cf; } ;
typedef TYPE_7__ ngx_http_compile_complex_value_t ;
struct TYPE_27__ {int pool; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_28__ {int * post; } ;
typedef TYPE_9__ ngx_command_t ;
struct TYPE_20__ {TYPE_3__* elts; } ;


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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_8__*,int ,char*) ;
 char* FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 TYPE_6__* FUNC_4 (TYPE_8__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_8__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 char* FUNC_6 (char*,int ,scalar_t__) ;
 char* FUNC_7 (TYPE_8__*,char*,int,size_t*) ;
 int VAR_13 ;
 int FUNC_8 (TYPE_7__*,int) ;
 char* FUNC_9 (int ,scalar_t__) ;

char *
FUNC_10(ngx_conf_t *VAR_14, ngx_command_t *VAR_15, void *VAR_16)
{
    size_t VAR_17;
    u_char *VAR_18;
    u_char *VAR_19;
    ngx_str_t *VAR_20;
    ngx_http_core_loc_conf_t *VAR_21;
    ngx_http_lua_main_conf_t *VAR_22;
    ngx_http_lua_loc_conf_t *VAR_23 = VAR_16;

    ngx_http_compile_complex_value_t VAR_24;

    FUNC_0("enter");


    if (VAR_15->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_23->content_handler) {
        return "is duplicate";
    }

    VAR_20 = VAR_14->args->elts;

    FUNC_0("value[0]: %.*s", (int) VAR_20[0].len, VAR_20[0].data);
    FUNC_0("value[1]: %.*s", (int) VAR_20[1].len, VAR_20[1].data);

    if (VAR_20[1].len == 0) {

        FUNC_1(VAR_8, VAR_14, 0,
                           "invalid location config: no runnable Lua code");
        return VAR_0;
    }

    if (VAR_15->post == VAR_12) {
        VAR_19 = FUNC_7(VAR_14, "content_by_lua",
                                                sizeof("content_by_lua") - 1,
                                                &VAR_17);
        if (VAR_19 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->content_chunkname = VAR_19;

        FUNC_0("chunkname: %s", VAR_19);



        VAR_23->content_src.value = VAR_20[1];

        VAR_18 = FUNC_9(VAR_14->pool,
                       VAR_17 + VAR_5 + 1);
        if (VAR_18 == ((void*)0)) {
            return VAR_0;
        }

        VAR_23->content_src_key = VAR_18;

        VAR_18 = FUNC_2(VAR_18, VAR_19, VAR_17);
        VAR_18 = FUNC_2(VAR_18, VAR_6, VAR_7);
        VAR_18 = FUNC_6(VAR_18, VAR_20[1].data, VAR_20[1].len);
        *VAR_18 = '\0';

    } else {
        FUNC_8(&VAR_24, sizeof(ngx_http_compile_complex_value_t));
        VAR_24.cf = VAR_14;
        VAR_24.value = &VAR_20[1];
        VAR_24.complex_value = &VAR_23->content_src;

        if (FUNC_3(&VAR_24) != VAR_9) {
            return VAR_0;
        }

        if (VAR_23->content_src.lengths == ((void*)0)) {

            VAR_18 = FUNC_9(VAR_14->pool, VAR_2 + 1);
            if (VAR_18 == ((void*)0)) {
                return VAR_0;
            }

            VAR_23->content_src_key = VAR_18;

            VAR_18 = FUNC_2(VAR_18, VAR_3, VAR_4);
            VAR_18 = FUNC_6(VAR_18, VAR_20[1].data, VAR_20[1].len);
            *VAR_18 = '\0';
        }
    }

    VAR_23->content_handler = (ngx_http_handler_pt) VAR_15->post;

    VAR_22 = FUNC_5(VAR_14, VAR_13);

    VAR_22->requires_capture_filter = 1;


    VAR_21 = FUNC_4(VAR_14, VAR_10);
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    VAR_21->handler = VAR_11;

    return VAR_1;
}
