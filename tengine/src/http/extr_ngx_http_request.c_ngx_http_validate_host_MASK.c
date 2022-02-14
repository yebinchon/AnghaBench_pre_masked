
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_3__ {size_t len; int* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int*,int*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_str_t *VAR_3, ngx_pool_t *VAR_4, ngx_uint_t VAR_5)
{
    u_char *VAR_6, VAR_7;
    size_t VAR_8, VAR_9, VAR_10;

    enum {
        sw_usual = 0,
        sw_literal,
        sw_rest
    } VAR_11;

    VAR_9 = VAR_3->len;
    VAR_10 = VAR_3->len;

    VAR_6 = VAR_3->data;

    VAR_11 = sw_usual;

    for (VAR_8 = 0; VAR_8 < VAR_3->len; VAR_8++) {
        VAR_7 = VAR_6[VAR_8];

        switch (VAR_7) {

        case '.':
            if (VAR_9 == VAR_8 - 1) {
                return VAR_0;
            }
            VAR_9 = VAR_8;
            break;

        case ':':
            if (VAR_11 == sw_usual) {
                VAR_10 = VAR_8;
                VAR_11 = sw_rest;
            }
            break;

        case '[':
            if (VAR_8 == 0) {
                VAR_11 = sw_literal;
            }
            break;

        case ']':
            if (VAR_11 == sw_literal) {
                VAR_10 = VAR_8 + 1;
                VAR_11 = sw_rest;
            }
            break;

        case '\0':
            return VAR_0;

        default:

            if (FUNC_0(VAR_7)) {
                return VAR_0;
            }

            if (VAR_7 >= 'A' && VAR_7 <= 'Z') {
                VAR_5 = 1;
            }

            break;
        }
    }

    if (VAR_9 == VAR_10 - 1) {
        VAR_10--;
    }

    if (VAR_10 == 0) {
        return VAR_0;
    }

    if (VAR_5) {
        VAR_3->data = FUNC_1(VAR_4, VAR_10);
        if (VAR_3->data == ((void*)0)) {
            return VAR_1;
        }

        FUNC_2(VAR_3->data, VAR_6, VAR_10);
    }

    VAR_3->len = VAR_10;

    return VAR_2;
}
