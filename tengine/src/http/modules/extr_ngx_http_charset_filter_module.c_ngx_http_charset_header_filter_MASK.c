
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_36__ {int len; int data; } ;
typedef TYPE_7__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_33__ {int len; } ;
struct TYPE_34__ {int content_type_len; TYPE_4__ content_type; TYPE_2__* content_encoding; } ;
struct TYPE_37__ {TYPE_6__* connection; TYPE_5__ headers_out; struct TYPE_37__* main; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_38__ {int ** tables; } ;
typedef TYPE_9__ ngx_http_charset_t ;
struct TYPE_32__ {TYPE_9__* elts; } ;
struct TYPE_29__ {TYPE_3__ charsets; } ;
typedef TYPE_10__ ngx_http_charset_main_conf_t ;
struct TYPE_35__ {int log; } ;
struct TYPE_30__ {scalar_t__ len; } ;
struct TYPE_31__ {TYPE_1__ value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (TYPE_8__*,TYPE_9__*,size_t,size_t) ;
 int VAR_6 ;
 size_t FUNC_1 (TYPE_8__*,TYPE_7__*) ;
 TYPE_10__* FUNC_2 (TYPE_8__*,int ) ;
 size_t FUNC_3 (TYPE_8__*,TYPE_7__*) ;
 size_t FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*,TYPE_7__*) ;
 size_t FUNC_6 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_7__*,TYPE_7__*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_7__*,TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_7)
{
    ngx_int_t VAR_8, VAR_9;
    ngx_str_t VAR_10, VAR_11;
    ngx_http_charset_t *VAR_12;
    ngx_http_charset_main_conf_t *VAR_13;

    if (VAR_7 == VAR_7->main) {
        VAR_8 = FUNC_1(VAR_7, &VAR_10);

    } else {
        VAR_8 = FUNC_3(VAR_7, &VAR_10);
    }

    if (VAR_8 == VAR_1) {
        return VAR_1;
    }

    if (VAR_8 == VAR_0) {
        return FUNC_4(VAR_7);
    }



    VAR_9 = FUNC_6(VAR_7, &VAR_11);

    if (VAR_9 == VAR_1) {
        return VAR_1;
    }






    FUNC_7(VAR_4, VAR_7->connection->log, 0,
                   "charset: \"%V\" > \"%V\"", &VAR_11, &VAR_10);

    if (VAR_9 == VAR_2) {
        FUNC_5(VAR_7, &VAR_10);

        return FUNC_4(VAR_7);
    }

    if (VAR_8 == VAR_3
        || VAR_9 == VAR_3)
    {
        if (VAR_9 != VAR_8
            || FUNC_9(VAR_10.data, VAR_11.data, VAR_10.len) != 0)
        {
            goto no_charset_map;
        }

        FUNC_5(VAR_7, &VAR_10);

        return FUNC_4(VAR_7);
    }

    if (VAR_9 == VAR_8) {
        VAR_7->headers_out.content_type.len = VAR_7->headers_out.content_type_len;

        FUNC_5(VAR_7, &VAR_10);

        return FUNC_4(VAR_7);
    }



    if (VAR_7->headers_out.content_encoding
        && VAR_7->headers_out.content_encoding->value.len)
    {
        return FUNC_4(VAR_7);
    }

    VAR_13 = FUNC_2(VAR_7, VAR_6);
    VAR_12 = VAR_13->charsets.elts;

    if (VAR_12[VAR_9].tables == ((void*)0)
        || VAR_12[VAR_9].tables[VAR_8] == ((void*)0))
    {
        goto no_charset_map;
    }

    VAR_7->headers_out.content_type.len = VAR_7->headers_out.content_type_len;

    FUNC_5(VAR_7, &VAR_10);

    return FUNC_0(VAR_7, VAR_12, VAR_8, VAR_9);

no_charset_map:

    FUNC_8(VAR_5, VAR_7->connection->log, 0,
                  "no \"charset_map\" between the charsets \"%V\" and \"%V\"",
                  &VAR_11, &VAR_10);

    return FUNC_4(VAR_7);
}
