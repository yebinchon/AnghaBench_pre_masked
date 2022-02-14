
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
typedef size_t ngx_uint_t ;
struct TYPE_18__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int len; char* data; } ;
struct TYPE_21__ {TYPE_1__ value; int * lengths; } ;
struct TYPE_19__ {int status; int overwrite; TYPE_3__ args; TYPE_6__ value; } ;
typedef TYPE_4__ ngx_http_err_page_t ;
struct TYPE_20__ {int * error_pages; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
typedef TYPE_6__ ngx_http_complex_value_t ;
struct TYPE_22__ {TYPE_6__* complex_value; TYPE_3__* value; TYPE_8__* cf; } ;
typedef TYPE_7__ ngx_http_compile_complex_value_t ;
struct TYPE_23__ {TYPE_2__* args; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_4__* FUNC_1 (int *) ;
 void* FUNC_2 (char*,int) ;
 int FUNC_3 (int ,TYPE_8__*,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (char*,char) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_core_loc_conf_t *VAR_9 = VAR_8;

    u_char *VAR_10;
    ngx_int_t VAR_11;
    ngx_str_t *VAR_12, VAR_13, VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_http_err_page_t *VAR_17;
    ngx_http_complex_value_t VAR_18;
    ngx_http_compile_complex_value_t VAR_19;

    if (VAR_9->error_pages == ((void*)0)) {
        VAR_9->error_pages = FUNC_0(VAR_6->pool, 4,
                                             sizeof(ngx_http_err_page_t));
        if (VAR_9->error_pages == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_12 = VAR_6->args->elts;

    VAR_15 = VAR_6->args->nelts - 2;

    if (VAR_12[VAR_15].data[0] == '=') {
        if (VAR_15 == 1) {
            FUNC_3(VAR_4, VAR_6, 0,
                               "invalid value \"%V\"", &VAR_12[VAR_15]);
            return VAR_0;
        }

        if (VAR_12[VAR_15].len > 1) {
            VAR_11 = FUNC_2(&VAR_12[VAR_15].data[1], VAR_12[VAR_15].len - 1);

            if (VAR_11 == VAR_2) {
                FUNC_3(VAR_4, VAR_6, 0,
                                   "invalid value \"%V\"", &VAR_12[VAR_15]);
                return VAR_0;
            }

        } else {
            VAR_11 = 0;
        }

        VAR_16 = 2;

    } else {
        VAR_11 = -1;
        VAR_16 = 1;
    }

    VAR_13 = VAR_12[VAR_6->args->nelts - 1];

    FUNC_5(&VAR_19, sizeof(ngx_http_compile_complex_value_t));

    VAR_19.cf = VAR_6;
    VAR_19.value = &VAR_13;
    VAR_19.complex_value = &VAR_18;

    if (FUNC_4(&VAR_19) != VAR_5) {
        return VAR_0;
    }

    FUNC_6(&VAR_14);

    if (VAR_18.lengths == ((void*)0) && VAR_13.len && VAR_13.data[0] == '/') {
        VAR_10 = (u_char *) FUNC_7(VAR_13.data, '?');

        if (VAR_10) {
            VAR_18.value.len = VAR_10 - VAR_13.data;
            VAR_18.value.data = VAR_13.data;
            VAR_10++;
            VAR_14.len = (VAR_13.data + VAR_13.len) - VAR_10;
            VAR_14.data = VAR_10;
        }
    }

    for (VAR_15 = 1; VAR_15 < VAR_6->args->nelts - VAR_16; VAR_15++) {
        VAR_17 = FUNC_1(VAR_9->error_pages);
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        VAR_17->status = FUNC_2(VAR_12[VAR_15].data, VAR_12[VAR_15].len);

        if (VAR_17->status == VAR_2 || VAR_17->status == 499) {
            FUNC_3(VAR_4, VAR_6, 0,
                               "invalid value \"%V\"", &VAR_12[VAR_15]);
            return VAR_0;
        }

        if (VAR_17->status < 300 || VAR_17->status > 599) {
            FUNC_3(VAR_4, VAR_6, 0,
                               "value \"%V\" must be between 300 and 599",
                               &VAR_12[VAR_15]);
            return VAR_0;
        }

        VAR_17->overwrite = VAR_11;

        if (VAR_11 == -1) {
            switch (VAR_17->status) {
                case 128:
                case 130:
                case 129:
                    VAR_17->overwrite = VAR_3;
            }
        }

        VAR_17->value = VAR_18;
        VAR_17->args = VAR_14;
    }

    return VAR_1;
}
