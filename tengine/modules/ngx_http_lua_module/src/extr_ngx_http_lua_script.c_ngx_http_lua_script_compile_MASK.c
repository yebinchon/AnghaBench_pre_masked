
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_1__* source; int log; int variables; } ;
typedef TYPE_2__ ngx_http_lua_script_compile_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_lua_script_compile_t *VAR_3)
{
    u_char VAR_4;
    ngx_str_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    unsigned VAR_8;
    ngx_uint_t VAR_9 = 0;

    if (FUNC_3(VAR_3) != VAR_2) {
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_3->source->len; ) {

        VAR_5.len = 0;

        if (VAR_3->source->data[VAR_6] == '$') {

            if (++VAR_6 == VAR_3->source->len) {
                goto invalid_variable;
            }

            if (VAR_3->source->data[VAR_6] == '$') {
                VAR_5.data = &VAR_3->source->data[VAR_6];
                VAR_6++;
                VAR_5.len++;

                if (FUNC_1(VAR_3, &VAR_5,
                                                      (VAR_6 == VAR_3->source->len))
                    != VAR_2)
                {
                    return VAR_0;
                }

                continue;
            }

            if (VAR_3->source->data[VAR_6] >= '0' && VAR_3->source->data[VAR_6] <= '9') {
                VAR_8 = 1;
                VAR_9 = 0;

            } else {
                VAR_8 = 0;
            }

            if (VAR_3->source->data[VAR_6] == '{') {
                VAR_7 = 1;

                if (++VAR_6 == VAR_3->source->len) {
                    goto invalid_variable;
                }

                if (VAR_3->source->data[VAR_6] >= '0' && VAR_3->source->data[VAR_6] <= '9') {
                    VAR_8 = 1;
                    VAR_9 = 0;
                }

                VAR_5.data = &VAR_3->source->data[VAR_6];

            } else {
                VAR_7 = 0;
                VAR_5.data = &VAR_3->source->data[VAR_6];
            }

            for ( ; VAR_6 < VAR_3->source->len; VAR_6++, VAR_5.len++) {
                VAR_4 = VAR_3->source->data[VAR_6];

                if (VAR_4 == '}' && VAR_7) {
                    VAR_6++;
                    VAR_7 = 0;
                    break;
                }

                if (VAR_8) {
                    if (VAR_4 >= '0' && VAR_4 <= '9') {
                        VAR_9 = VAR_9 * 10 + (VAR_4 - '0');
                        continue;
                    }

                    break;
                }



                if ((VAR_4 >= 'A' && VAR_4 <= 'Z')
                    || (VAR_4 >= 'a' && VAR_4 <= 'z')
                    || (VAR_4 >= '0' && VAR_4 <= '9')
                    || VAR_4 == '_')
                {
                    continue;
                }

                break;
            }

            if (VAR_7) {
                FUNC_4(VAR_1, VAR_3->log, 0,
                              "the closing bracket in \"%V\" "
                              "variable is missing", &VAR_5);
                return VAR_0;
            }

            if (VAR_5.len == 0) {
                goto invalid_variable;
            }

            if (!VAR_8) {
                FUNC_4(VAR_1, VAR_3->log, 0,
                              "attempt to use named capturing variable "
                              "\"%V\" (named captures not supported yet)",
                              &VAR_5);

                return VAR_0;
            }

            VAR_3->variables++;

            if (FUNC_0(VAR_3, VAR_9) != VAR_2) {
                return VAR_0;
            }

            continue;
        }

        VAR_5.data = &VAR_3->source->data[VAR_6];

        while (VAR_6 < VAR_3->source->len) {

            if (VAR_3->source->data[VAR_6] == '$') {
                break;
            }

            VAR_6++;
            VAR_5.len++;
        }

        if (FUNC_1(VAR_3, &VAR_5, (VAR_6 == VAR_3->source->len))
            != VAR_2)
        {
            return VAR_0;
        }
    }

    return FUNC_2(VAR_3);

invalid_variable:

    FUNC_4(VAR_1, VAR_3->log, 0,
                  "lua script: invalid capturing variable name found in \"%V\"",
                  VAR_3->source);

    return VAR_0;
}
