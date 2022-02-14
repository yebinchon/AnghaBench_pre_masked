
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_6__* main; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {TYPE_2__ charset_name; int charset; } ;
typedef TYPE_4__ ngx_http_charset_ctx_t ;
struct TYPE_14__ {TYPE_2__ charset; } ;
struct TYPE_18__ {TYPE_1__ headers_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 TYPE_4__* FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_str_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_str_t *VAR_6;
    ngx_http_charset_ctx_t *VAR_7;

    VAR_7 = FUNC_1(VAR_3->main, VAR_2);

    if (VAR_7) {
        *VAR_4 = VAR_7->charset_name;
        return VAR_7->charset;
    }

    VAR_6 = &VAR_3->main->headers_out.charset;

    if (VAR_6->len == 0) {
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_3->pool, sizeof(ngx_http_charset_ctx_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_2(VAR_3->main, VAR_7, VAR_2);

    VAR_5 = FUNC_0(VAR_3, VAR_6);

    VAR_7->charset = VAR_5;
    VAR_7->charset_name = *VAR_6;
    *VAR_4 = *VAR_6;

    return VAR_5;
}
