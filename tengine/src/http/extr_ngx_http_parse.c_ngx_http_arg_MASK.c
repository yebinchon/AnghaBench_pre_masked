
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_7__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {scalar_t__ len; char* data; } ;
struct TYPE_8__ {TYPE_1__ args; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*,char*,size_t) ;
 char* FUNC_1 (char*,char*,char) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, u_char *VAR_3, size_t VAR_4, ngx_str_t *VAR_5)
{
    u_char *VAR_6, *VAR_7;

    if (VAR_2->args.len == 0) {
        return VAR_0;
    }

    VAR_6 = VAR_2->args.data;
    VAR_7 = VAR_6 + VAR_2->args.len;

    for ( ; VAR_6 < VAR_7; VAR_6++) {



        VAR_6 = FUNC_0(VAR_6, VAR_7 - 1, VAR_3, VAR_4 - 1);

        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }

        if ((VAR_6 == VAR_2->args.data || *(VAR_6 - 1) == '&') && *(VAR_6 + VAR_4) == '=') {

            VAR_5->data = VAR_6 + VAR_4 + 1;

            VAR_6 = FUNC_1(VAR_6, VAR_7, '&');

            if (VAR_6 == ((void*)0)) {
                VAR_6 = VAR_2->args.data + VAR_2->args.len;
            }

            VAR_5->len = VAR_6 - VAR_5->data;

            return VAR_1;
        }
    }

    return VAR_0;
}
