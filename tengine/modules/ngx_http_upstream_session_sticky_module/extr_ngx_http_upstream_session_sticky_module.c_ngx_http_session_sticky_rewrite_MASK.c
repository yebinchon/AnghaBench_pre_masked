
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_12__ {char* data; long len; } ;
struct TYPE_16__ {TYPE_1__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int len; char* data; } ;
struct TYPE_17__ {TYPE_4__ sid; TYPE_3__* sscf; } ;
typedef TYPE_6__ ngx_http_ss_ctx_t ;
struct TYPE_18__ {int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_13__ {char* data; int len; } ;
struct TYPE_14__ {TYPE_2__ cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 char* FUNC_1 (char*,char*,int) ;
 TYPE_6__* FUNC_2 (TYPE_7__*,int ) ;
 int VAR_3 ;
 char* FUNC_3 (int ,int) ;
 char* FUNC_4 (char*,char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4, ngx_table_elt_t *VAR_5)
{
    u_char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    ngx_http_ss_ctx_t *VAR_11;
    enum {
        pre_equal = 0,
        pre_value,
        value
    } VAR_12;

    VAR_11 = FUNC_2(VAR_4, VAR_3);
    VAR_6 = FUNC_4(VAR_5->value.data,
                         VAR_5->value.data + VAR_5->value.len,
                         VAR_11->sscf->cookie.data,
                         VAR_11->sscf->cookie.len - 1);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_6;
    VAR_10 = VAR_5->value.data;
    VAR_9 = VAR_5->value.data + VAR_5->value.len;

    VAR_12 = 0;
    while (VAR_6 < VAR_9) {
        switch (VAR_12) {
        case pre_equal:
            if (*VAR_6 == '=') {
                VAR_12 = pre_value;

            } else if (*VAR_6 == ';') {
                goto success;
            }

            break;

        case pre_value:
            if (!FUNC_0(*VAR_6)) {
                VAR_12 = value;
                VAR_6--;
            }
            break;

        case value:
            if (*VAR_6 == ';') {
                goto success;
            }
            break;

        default:
            break;
        }

        VAR_6++;
    }

    if (VAR_6 >= VAR_9 && (VAR_12 == value || VAR_12 == pre_equal)) {
        goto success;
    }

    return VAR_0;

success:

    VAR_8 = VAR_6;
    VAR_5->value.len = VAR_5->value.len
                     - (VAR_8 - VAR_7)
                     + VAR_11->sscf->cookie.len
                     + 1
                     + VAR_11->sid.len;

    VAR_6 = FUNC_3(VAR_4->pool, VAR_5->value.len);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    VAR_5->value.data = VAR_6;
    VAR_6 = FUNC_1(VAR_6, VAR_10, VAR_7 - VAR_10);
    VAR_6 = FUNC_1(VAR_6, VAR_11->sscf->cookie.data, VAR_11->sscf->cookie.len);
    *VAR_6++ = '=';
    VAR_6 = FUNC_1(VAR_6, VAR_11->sid.data, VAR_11->sid.len);
    VAR_6 = FUNC_1(VAR_6, VAR_8, VAR_9 - VAR_8);

    return VAR_2;
}
