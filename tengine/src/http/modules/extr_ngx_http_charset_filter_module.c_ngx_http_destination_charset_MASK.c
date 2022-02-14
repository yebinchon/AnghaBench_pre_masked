
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_31__ {int data; scalar_t__ len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_32__ {int data; scalar_t__ len; scalar_t__ not_found; } ;
typedef TYPE_7__ ngx_http_variable_value_t ;
struct TYPE_28__ {scalar_t__ len; } ;
struct TYPE_26__ {scalar_t__ len; } ;
struct TYPE_29__ {TYPE_3__ charset; TYPE_6__* override_charset; TYPE_1__ content_type; } ;
struct TYPE_33__ {TYPE_4__ headers_out; TYPE_2__* connection; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_34__ {TYPE_6__ name; } ;
typedef TYPE_9__ ngx_http_charset_t ;
struct TYPE_30__ {TYPE_9__* elts; } ;
struct TYPE_24__ {TYPE_5__ charsets; } ;
typedef TYPE_10__ ngx_http_charset_main_conf_t ;
struct TYPE_25__ {size_t charset; scalar_t__ override_charset; int types; } ;
typedef TYPE_11__ ngx_http_charset_loc_conf_t ;
struct TYPE_27__ {int log; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (TYPE_8__*,TYPE_6__*) ;
 TYPE_7__* FUNC_1 (TYPE_8__*,size_t) ;
 TYPE_11__* FUNC_2 (TYPE_8__*,int ) ;
 TYPE_10__* FUNC_3 (TYPE_8__*,int ) ;
 int * FUNC_4 (TYPE_8__*,int *) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_7, ngx_str_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_http_charset_t *VAR_10;
    ngx_http_variable_value_t *VAR_11;
    ngx_http_charset_loc_conf_t *VAR_12;
    ngx_http_charset_main_conf_t *VAR_13;

    if (VAR_7->headers_out.content_type.len == 0) {
        return VAR_0;
    }

    if (VAR_7->headers_out.override_charset
        && VAR_7->headers_out.override_charset->len)
    {
        *VAR_8 = *VAR_7->headers_out.override_charset;

        VAR_9 = FUNC_0(VAR_7, VAR_8);

        if (VAR_9 != VAR_4) {
            return VAR_9;
        }

        FUNC_5(VAR_5, VAR_7->connection->log, 0,
                      "unknown charset \"%V\" to override", VAR_8);

        return VAR_0;
    }

    VAR_12 = FUNC_2(VAR_7, VAR_6);
    VAR_9 = VAR_12->charset;

    if (VAR_9 == VAR_2) {
        return VAR_0;
    }

    if (VAR_7->headers_out.charset.len) {
        if (VAR_12->override_charset == 0) {
            return VAR_0;
        }

    } else {
        if (FUNC_4(VAR_7, &VAR_12->types) == ((void*)0)) {
            return VAR_0;
        }
    }

    if (VAR_9 < VAR_3) {
        VAR_13 = FUNC_3(VAR_7, VAR_6);
        VAR_10 = VAR_13->charsets.elts;
        *VAR_8 = VAR_10[VAR_9].name;
        return VAR_9;
    }

    VAR_11 = FUNC_1(VAR_7, VAR_9 - VAR_3);

    if (VAR_11 == ((void*)0) || VAR_11->not_found) {
        return VAR_1;
    }

    VAR_8->len = VAR_11->len;
    VAR_8->data = VAR_11->data;

    return FUNC_0(VAR_7, VAR_8);
}
