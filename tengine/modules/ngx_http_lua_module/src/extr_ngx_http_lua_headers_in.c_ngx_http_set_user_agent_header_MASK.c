
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_9__ {scalar_t__ len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int msie6; int opera; int gecko; int chrome; int safari; int konqueror; int msie; } ;
struct TYPE_10__ {TYPE_1__ headers_in; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 int FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 char* FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_0,
    ngx_http_lua_header_val_t *VAR_1, ngx_str_t *VAR_2)
{
    u_char *VAR_3, *VAR_4;



    VAR_0->headers_in.msie = 0;
    VAR_0->headers_in.msie6 = 0;
    VAR_0->headers_in.opera = 0;
    VAR_0->headers_in.gecko = 0;
    VAR_0->headers_in.chrome = 0;
    VAR_0->headers_in.safari = 0;
    VAR_0->headers_in.konqueror = 0;

    if (VAR_2->len == 0) {
        return FUNC_0(VAR_0, VAR_1, VAR_2);
    }



    VAR_3 = VAR_2->data;

    VAR_4 = FUNC_1(VAR_3, "MSIE ", 5 - 1);

    if (VAR_4 && VAR_4 + 7 < VAR_3 + VAR_2->len) {

        VAR_0->headers_in.msie = 1;

        if (VAR_4[6] == '.') {

            switch (VAR_4[5]) {
            case '4':
            case '5':
                VAR_0->headers_in.msie6 = 1;
                break;
            case '6':
                if (FUNC_1(VAR_4 + 8, "SV1", 3 - 1) == ((void*)0)) {
                    VAR_0->headers_in.msie6 = 1;
                }
                break;
            }
        }
    }

    if (FUNC_1(VAR_3, "Opera", 5 - 1)) {
        VAR_0->headers_in.opera = 1;
        VAR_0->headers_in.msie = 0;
        VAR_0->headers_in.msie6 = 0;
    }

    if (!VAR_0->headers_in.msie && !VAR_0->headers_in.opera) {

        if (FUNC_1(VAR_3, "Gecko/", 6 - 1)) {
            VAR_0->headers_in.gecko = 1;

        } else if (FUNC_1(VAR_3, "Chrome/", 7 - 1)) {
            VAR_0->headers_in.chrome = 1;

        } else if (FUNC_1(VAR_3, "Safari/", 7 - 1)
                   && FUNC_1(VAR_3, "Mac OS X", 8 - 1))
        {
            VAR_0->headers_in.safari = 1;

        } else if (FUNC_1(VAR_3, "Konqueror", 9 - 1)) {
            VAR_0->headers_in.konqueror = 1;
        }
    }

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
