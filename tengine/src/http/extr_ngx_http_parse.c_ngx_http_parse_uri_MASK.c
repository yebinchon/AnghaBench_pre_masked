
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_3__ {char* uri_start; char* uri_end; int space_in_uri; int complex_uri; int quoted_uri; char* args_start; int plus_in_uri; char* uri_ext; } ;
typedef TYPE_1__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;

ngx_int_t
FUNC_0(ngx_http_request_t *VAR_3)
{
    u_char *VAR_4, VAR_5;
    enum {
        sw_start = 0,
        sw_after_slash_in_uri,
        sw_check_uri,
        sw_uri
    } VAR_6;

    VAR_6 = sw_start;

    for (VAR_4 = VAR_3->uri_start; VAR_4 != VAR_3->uri_end; VAR_4++) {

        VAR_5 = *VAR_4;

        switch (VAR_6) {

        case sw_start:

            if (VAR_5 != '/') {
                return VAR_0;
            }

            VAR_6 = sw_after_slash_in_uri;
            break;


        case sw_after_slash_in_uri:

            if (VAR_2[VAR_5 >> 5] & (1U << (VAR_5 & 0x1f))) {
                VAR_6 = sw_check_uri;
                break;
            }

            switch (VAR_5) {
            case ' ':
                VAR_3->space_in_uri = 1;
                VAR_6 = sw_check_uri;
                break;
            case '.':
                VAR_3->complex_uri = 1;
                VAR_6 = sw_uri;
                break;
            case '%':
                VAR_3->quoted_uri = 1;
                VAR_6 = sw_uri;
                break;
            case '/':
                VAR_3->complex_uri = 1;
                VAR_6 = sw_uri;
                break;






            case '?':
                VAR_3->args_start = VAR_4 + 1;
                VAR_6 = sw_uri;
                break;
            case '#':
                VAR_3->complex_uri = 1;
                VAR_6 = sw_uri;
                break;
            case '+':
                VAR_3->plus_in_uri = 1;
                break;
            default:
                VAR_6 = sw_check_uri;
                break;
            }
            break;


        case sw_check_uri:

            if (VAR_2[VAR_5 >> 5] & (1U << (VAR_5 & 0x1f))) {
                break;
            }

            switch (VAR_5) {
            case '/':







                VAR_3->uri_ext = ((void*)0);
                VAR_6 = sw_after_slash_in_uri;
                break;
            case '.':
                VAR_3->uri_ext = VAR_4 + 1;
                break;
            case ' ':
                VAR_3->space_in_uri = 1;
                break;






            case '%':
                VAR_3->quoted_uri = 1;
                VAR_6 = sw_uri;
                break;
            case '?':
                VAR_3->args_start = VAR_4 + 1;
                VAR_6 = sw_uri;
                break;
            case '#':
                VAR_3->complex_uri = 1;
                VAR_6 = sw_uri;
                break;
            case '+':
                VAR_3->plus_in_uri = 1;
                break;
            }
            break;


        case sw_uri:

            if (VAR_2[VAR_5 >> 5] & (1U << (VAR_5 & 0x1f))) {
                break;
            }

            switch (VAR_5) {
            case ' ':
                VAR_3->space_in_uri = 1;
                break;
            case '#':
                VAR_3->complex_uri = 1;
                break;
            }
            break;
        }
    }

    return VAR_1;
}
