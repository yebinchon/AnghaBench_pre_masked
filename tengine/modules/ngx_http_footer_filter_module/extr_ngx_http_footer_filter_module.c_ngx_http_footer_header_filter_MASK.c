
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int ngx_int_t ;
struct TYPE_23__ {scalar_t__ status; int content_length_n; TYPE_3__* content_length; TYPE_2__* content_encoding; } ;
struct TYPE_24__ {int method; TYPE_4__ headers_out; int pool; struct TYPE_24__* main; scalar_t__ header_only; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_25__ {int * variable; int types; } ;
typedef TYPE_6__ ngx_http_footer_loc_conf_t ;
struct TYPE_19__ {scalar_t__ len; } ;
struct TYPE_26__ {TYPE_17__ footer; } ;
typedef TYPE_7__ ngx_http_footer_ctx_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_22__ {scalar_t__ hash; } ;
struct TYPE_20__ {scalar_t__ len; } ;
struct TYPE_21__ {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int *,TYPE_17__*) ;
 int VAR_4 ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*,int ) ;
 int * FUNC_5 (TYPE_5__*,int *) ;
 TYPE_7__* FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_5)
{
    ngx_http_footer_ctx_t *VAR_6;
    ngx_http_footer_loc_conf_t *VAR_7;

    VAR_7 = FUNC_2(VAR_5, VAR_4);

    if (VAR_7->variable == (ngx_http_complex_value_t *) -1
        || VAR_5->header_only
        || (VAR_5->method & VAR_1)
        || VAR_5 != VAR_5->main
        || VAR_5->headers_out.status == VAR_2
        || (VAR_5->headers_out.content_encoding
            && VAR_5->headers_out.content_encoding->value.len)
        || FUNC_5(VAR_5, &VAR_7->types) == ((void*)0))
    {
        return FUNC_3(VAR_5);
    }

    VAR_6 = FUNC_6(VAR_5->pool, sizeof(ngx_http_footer_ctx_t));
    if (VAR_6 == ((void*)0)) {
       return VAR_0;
    }

    if (FUNC_1(VAR_5, VAR_7->variable, &VAR_6->footer) != VAR_3) {
        return VAR_0;
    }

    FUNC_4(VAR_5, VAR_6, VAR_4);

    if (VAR_5->headers_out.content_length_n != -1) {
        VAR_5->headers_out.content_length_n += VAR_6->footer.len;
    }

    if (VAR_5->headers_out.content_length) {
        VAR_5->headers_out.content_length->hash = 0;
        VAR_5->headers_out.content_length = ((void*)0);
    }

    FUNC_0(VAR_5);

    return FUNC_3(VAR_5);
}
