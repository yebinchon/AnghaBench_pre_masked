
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef char off_t ;
struct TYPE_9__ {int len; char* data; } ;
struct TYPE_10__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {char start; char end; char complete_length; } ;
typedef TYPE_4__ ngx_http_slice_content_range_t ;
struct TYPE_8__ {TYPE_3__* content_range; } ;
struct TYPE_12__ {TYPE_1__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3,
    ngx_http_slice_content_range_t *VAR_4)
{
    off_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    u_char *VAR_10;
    ngx_table_elt_t *VAR_11;

    VAR_11 = VAR_3->headers_out.content_range;

    if (VAR_11 == ((void*)0)
        || VAR_11->value.len < 7
        || FUNC_0(VAR_11->value.data, "bytes ", 6) != 0)
    {
        return VAR_0;
    }

    VAR_10 = VAR_11->value.data + 6;

    VAR_8 = VAR_1 / 10;
    VAR_9 = VAR_1 % 10;

    VAR_5 = 0;
    VAR_6 = 0;
    VAR_7 = 0;

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10 < '0' || *VAR_10 > '9') {
        return VAR_0;
    }

    while (*VAR_10 >= '0' && *VAR_10 <= '9') {
        if (VAR_5 >= VAR_8 && (VAR_5 > VAR_8 || *VAR_10 - '0' > VAR_9)) {
            return VAR_0;
        }

        VAR_5 = VAR_5 * 10 + (*VAR_10++ - '0');
    }

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10++ != '-') {
        return VAR_0;
    }

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10 < '0' || *VAR_10 > '9') {
        return VAR_0;
    }

    while (*VAR_10 >= '0' && *VAR_10 <= '9') {
        if (VAR_6 >= VAR_8 && (VAR_6 > VAR_8 || *VAR_10 - '0' > VAR_9)) {
            return VAR_0;
        }

        VAR_6 = VAR_6 * 10 + (*VAR_10++ - '0');
    }

    VAR_6++;

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10++ != '/') {
        return VAR_0;
    }

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10 != '*') {
        if (*VAR_10 < '0' || *VAR_10 > '9') {
            return VAR_0;
        }

        while (*VAR_10 >= '0' && *VAR_10 <= '9') {
            if (VAR_7 >= VAR_8
                && (VAR_7 > VAR_8 || *VAR_10 - '0' > VAR_9))
            {
                return VAR_0;
            }

            VAR_7 = VAR_7 * 10 + (*VAR_10++ - '0');
        }

    } else {
        VAR_7 = -1;
        VAR_10++;
    }

    while (*VAR_10 == ' ') { VAR_10++; }

    if (*VAR_10 != '\0') {
        return VAR_0;
    }

    VAR_4->start = VAR_5;
    VAR_4->end = VAR_6;
    VAR_4->complete_length = VAR_7;

    return VAR_2;
}
