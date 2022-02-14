
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_15__ {uintptr_t status; int text; int * complex_value; TYPE_2__* value; TYPE_6__* cf; int code; } ;
typedef TYPE_3__ ngx_http_script_return_code_t ;
struct TYPE_16__ {int codes; } ;
typedef TYPE_4__ ngx_http_rewrite_loc_conf_t ;
typedef TYPE_3__ ngx_http_compile_complex_value_t ;
struct TYPE_17__ {TYPE_1__* args; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 uintptr_t FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_6__*,int ,char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 TYPE_3__* FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    ngx_http_rewrite_loc_conf_t *VAR_10 = VAR_9;

    u_char *VAR_11;
    ngx_str_t *VAR_12, *VAR_13;
    ngx_http_script_return_code_t *VAR_14;
    ngx_http_compile_complex_value_t VAR_15;

    VAR_14 = FUNC_3(VAR_7->pool, &VAR_10->codes,
                                     sizeof(ngx_http_script_return_code_t));
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = VAR_7->args->elts;

    FUNC_4(VAR_14, sizeof(ngx_http_script_return_code_t));

    VAR_14->code = VAR_6;

    VAR_11 = VAR_12[1].data;

    VAR_14->status = FUNC_0(VAR_11, VAR_12[1].len);

    if (VAR_14->status == (uintptr_t) VAR_2) {

        if (VAR_7->args->nelts == 2
            && (FUNC_5(VAR_11, "http://", sizeof("http://") - 1) == 0
                || FUNC_5(VAR_11, "https://", sizeof("https://") - 1) == 0
                || FUNC_5(VAR_11, "$scheme", sizeof("$scheme") - 1) == 0))
        {
            VAR_14->status = VAR_3;
            VAR_13 = &VAR_12[1];

        } else {
            FUNC_1(VAR_4, VAR_7, 0,
                               "invalid return code \"%V\"", &VAR_12[1]);
            return VAR_0;
        }

    } else {

        if (VAR_14->status > 999) {
            FUNC_1(VAR_4, VAR_7, 0,
                               "invalid return code \"%V\"", &VAR_12[1]);
            return VAR_0;
        }

        if (VAR_7->args->nelts == 2) {
            return VAR_1;
        }

        VAR_13 = &VAR_12[2];
    }

    FUNC_4(&VAR_15, sizeof(ngx_http_compile_complex_value_t));

    VAR_15.cf = VAR_7;
    VAR_15.value = VAR_13;
    VAR_15.complex_value = &VAR_14->text;

    if (FUNC_2(&VAR_15) != VAR_5) {
        return VAR_0;
    }

    return VAR_1;
}
