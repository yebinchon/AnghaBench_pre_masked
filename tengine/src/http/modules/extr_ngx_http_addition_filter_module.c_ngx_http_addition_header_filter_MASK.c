
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_17__ {scalar_t__ status; } ;
struct TYPE_18__ {int preserve_body; int pool; struct TYPE_18__* main; TYPE_3__ headers_out; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_http_addition_ctx_t ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_19__ {int types; TYPE_2__ after_body; TYPE_1__ before_body; } ;
typedef TYPE_5__ ngx_http_addition_conf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;
 int * FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_3)
{
    ngx_http_addition_ctx_t *VAR_4;
    ngx_http_addition_conf_t *VAR_5;

    if (VAR_3->headers_out.status != VAR_1 || VAR_3 != VAR_3->main) {
        return FUNC_3(VAR_3);
    }

    VAR_5 = FUNC_2(VAR_3, VAR_2);

    if (VAR_5->before_body.len == 0 && VAR_5->after_body.len == 0) {
        return FUNC_3(VAR_3);
    }

    if (FUNC_5(VAR_3, &VAR_5->types) == ((void*)0)) {
        return FUNC_3(VAR_3);
    }

    VAR_4 = FUNC_7(VAR_3->pool, sizeof(ngx_http_addition_ctx_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_3, VAR_4, VAR_2);

    FUNC_1(VAR_3);
    FUNC_0(VAR_3);
    FUNC_6(VAR_3);

    VAR_3->preserve_body = 1;

    return FUNC_3(VAR_3);
}
