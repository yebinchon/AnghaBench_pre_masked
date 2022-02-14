
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_18__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_http_output_body_filter_pt ;
struct TYPE_19__ {int requires_body_filter; int requires_header_filter; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_17__ {int * lengths; TYPE_3__ value; } ;
struct TYPE_20__ {char* body_filter_src_key; scalar_t__ body_filter_handler; TYPE_2__ body_filter_src; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
struct TYPE_21__ {TYPE_2__* complex_value; TYPE_3__* value; TYPE_7__* cf; } ;
typedef TYPE_6__ ngx_http_compile_complex_value_t ;
struct TYPE_22__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_23__ {int * post; } ;
typedef TYPE_8__ ngx_command_t ;
struct TYPE_16__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*) ;
 char* FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 TYPE_4__* FUNC_4 (TYPE_7__*,int ) ;
 int * VAR_10 ;
 char* FUNC_5 (char*,int ,scalar_t__) ;
 int VAR_11 ;
 int FUNC_6 (TYPE_6__*,int) ;
 char* FUNC_7 (int ,int) ;

char *
FUNC_8(ngx_conf_t *VAR_12, ngx_command_t *VAR_13,
    void *VAR_14)
{
    u_char *VAR_15;
    ngx_str_t *VAR_16;
    ngx_http_lua_main_conf_t *VAR_17;
    ngx_http_lua_loc_conf_t *VAR_18 = VAR_14;

    ngx_http_compile_complex_value_t VAR_19;

    FUNC_0("enter");


    if (VAR_13->post == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_18->body_filter_handler) {
        return "is duplicate";
    }

    VAR_16 = VAR_12->args->elts;

    if (VAR_16[1].len == 0) {

        FUNC_1(VAR_8, VAR_12, 0,
                           "invalid location config: no runnable Lua code");
        return VAR_0;
    }

    if (VAR_13->post == VAR_10) {

        VAR_18->body_filter_src.value = VAR_16[1];

        VAR_15 = FUNC_7(VAR_12->pool,
                       sizeof("body_filter_by_lua") +
                       VAR_5 + 1);
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        VAR_18->body_filter_src_key = VAR_15;

        VAR_15 = FUNC_2(VAR_15, "body_filter_by_lua", sizeof("body_filter_by_lua") - 1);
        VAR_15 = FUNC_2(VAR_15, VAR_6, VAR_7);
        VAR_15 = FUNC_5(VAR_15, VAR_16[1].data, VAR_16[1].len);
        *VAR_15 = '\0';

    } else {
        FUNC_6(&VAR_19, sizeof(ngx_http_compile_complex_value_t));
        VAR_19.cf = VAR_12;
        VAR_19.value = &VAR_16[1];
        VAR_19.complex_value = &VAR_18->body_filter_src;

        if (FUNC_3(&VAR_19) != VAR_9) {
            return VAR_0;
        }

        if (VAR_18->body_filter_src.lengths == ((void*)0)) {

            VAR_15 = FUNC_7(VAR_12->pool, VAR_2 + 1);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            VAR_18->body_filter_src_key = VAR_15;

            VAR_15 = FUNC_2(VAR_15, VAR_3, VAR_4);
            VAR_15 = FUNC_5(VAR_15, VAR_16[1].data, VAR_16[1].len);
            *VAR_15 = '\0';
        }
    }

    VAR_18->body_filter_handler = (ngx_http_output_body_filter_pt) VAR_13->post;

    VAR_17 = FUNC_4(VAR_12, VAR_11);

    VAR_17->requires_body_filter = 1;
    VAR_17->requires_header_filter = 1;

    return VAR_1;
}
