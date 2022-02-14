
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef size_t ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_8__ {int data; int len; } ;
struct TYPE_11__ {TYPE_1__ name; } ;
typedef TYPE_4__ ngx_http_charset_t ;
struct TYPE_9__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_12__ {TYPE_2__ charsets; } ;
typedef TYPE_5__ ngx_http_charset_main_conf_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3)
{
    ngx_uint_t VAR_4, VAR_5;
    ngx_http_charset_t *VAR_6;
    ngx_http_charset_main_conf_t *VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_1);

    VAR_6 = VAR_7->charsets.elts;
    VAR_5 = VAR_7->charsets.nelts;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if (VAR_6[VAR_4].name.len != VAR_3->len) {
            continue;
        }

        if (FUNC_1(VAR_6[VAR_4].name.data, VAR_3->data, VAR_3->len) == 0) {
            return VAR_4;
        }
    }

    return VAR_0;
}
