
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {int code; int count; char* start; char* end; int http_version; } ;
typedef TYPE_1__ ngx_http_status_t ;
struct TYPE_8__ {int state; int http_major; int http_minor; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {char* pos; char* last; } ;
typedef TYPE_3__ ngx_buf_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

ngx_int_t
FUNC_0(ngx_http_request_t *VAR_3, ngx_buf_t *VAR_4,
    ngx_http_status_t *VAR_5)
{
    u_char VAR_6;
    u_char *VAR_7;
    enum {
        sw_start = 0,
        sw_H,
        sw_HT,
        sw_HTT,
        sw_HTTP,
        sw_first_major_digit,
        sw_major_digit,
        sw_first_minor_digit,
        sw_minor_digit,
        sw_status,
        sw_space_after_status,
        sw_status_text,
        sw_almost_done
    } VAR_8;

    VAR_8 = VAR_3->state;

    for (VAR_7 = VAR_4->pos; VAR_7 < VAR_4->last; VAR_7++) {
        VAR_6 = *VAR_7;

        switch (VAR_8) {


        case sw_start:
            switch (VAR_6) {
            case 'H':
                VAR_8 = sw_H;
                break;
            default:
                return VAR_1;
            }
            break;

        case sw_H:
            switch (VAR_6) {
            case 'T':
                VAR_8 = sw_HT;
                break;
            default:
                return VAR_1;
            }
            break;

        case sw_HT:
            switch (VAR_6) {
            case 'T':
                VAR_8 = sw_HTT;
                break;
            default:
                return VAR_1;
            }
            break;

        case sw_HTT:
            switch (VAR_6) {
            case 'P':
                VAR_8 = sw_HTTP;
                break;
            default:
                return VAR_1;
            }
            break;

        case sw_HTTP:
            switch (VAR_6) {
            case '/':
                VAR_8 = sw_first_major_digit;
                break;
            default:
                return VAR_1;
            }
            break;


        case sw_first_major_digit:
            if (VAR_6 < '1' || VAR_6 > '9') {
                return VAR_1;
            }

            VAR_3->http_major = VAR_6 - '0';
            VAR_8 = sw_major_digit;
            break;


        case sw_major_digit:
            if (VAR_6 == '.') {
                VAR_8 = sw_first_minor_digit;
                break;
            }

            if (VAR_6 < '0' || VAR_6 > '9') {
                return VAR_1;
            }

            if (VAR_3->http_major > 99) {
                return VAR_1;
            }

            VAR_3->http_major = VAR_3->http_major * 10 + (VAR_6 - '0');
            break;


        case sw_first_minor_digit:
            if (VAR_6 < '0' || VAR_6 > '9') {
                return VAR_1;
            }

            VAR_3->http_minor = VAR_6 - '0';
            VAR_8 = sw_minor_digit;
            break;


        case sw_minor_digit:
            if (VAR_6 == ' ') {
                VAR_8 = sw_status;
                break;
            }

            if (VAR_6 < '0' || VAR_6 > '9') {
                return VAR_1;
            }

            if (VAR_3->http_minor > 99) {
                return VAR_1;
            }

            VAR_3->http_minor = VAR_3->http_minor * 10 + (VAR_6 - '0');
            break;


        case sw_status:
            if (VAR_6 == ' ') {
                break;
            }

            if (VAR_6 < '0' || VAR_6 > '9') {
                return VAR_1;
            }

            VAR_5->code = VAR_5->code * 10 + (VAR_6 - '0');

            if (++VAR_5->count == 3) {
                VAR_8 = sw_space_after_status;
                VAR_5->start = VAR_7 - 2;
            }

            break;


        case sw_space_after_status:
            switch (VAR_6) {
            case ' ':
                VAR_8 = sw_status_text;
                break;
            case '.':
                VAR_8 = sw_status_text;
                break;
            case 129:
                VAR_8 = sw_almost_done;
                break;
            case 128:
                goto done;
            default:
                return VAR_1;
            }
            break;


        case sw_status_text:
            switch (VAR_6) {
            case 129:
                VAR_8 = sw_almost_done;

                break;
            case 128:
                goto done;
            }
            break;


        case sw_almost_done:
            VAR_5->end = VAR_7 - 1;
            switch (VAR_6) {
            case 128:
                goto done;
            default:
                return VAR_1;
            }
        }
    }

    VAR_4->pos = VAR_7;
    VAR_3->state = VAR_8;

    return VAR_0;

done:

    VAR_4->pos = VAR_7 + 1;

    if (VAR_5->end == ((void*)0)) {
        VAR_5->end = VAR_7;
    }

    VAR_5->http_version = VAR_3->http_major * 1000 + VAR_3->http_minor;
    VAR_3->state = sw_start;

    return VAR_2;
}
