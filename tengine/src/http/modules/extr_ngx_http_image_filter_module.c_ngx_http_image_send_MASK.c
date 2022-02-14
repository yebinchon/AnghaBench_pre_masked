
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {scalar_t__ header_only; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_8__ {scalar_t__ phase; } ;
typedef TYPE_2__ ngx_http_image_filter_ctx_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_http_image_filter_ctx_t *VAR_4,
    ngx_chain_t *VAR_5)
{
    ngx_int_t VAR_6;

    VAR_6 = FUNC_1(VAR_3);

    if (VAR_6 == VAR_0 || VAR_6 > VAR_2 || VAR_3->header_only) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_3, VAR_5);

    if (VAR_4->phase == VAR_1) {

        return (VAR_6 == VAR_2) ? VAR_0 : VAR_6;
    }

    return VAR_6;
}
