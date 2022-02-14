
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {scalar_t__ nelts; } ;
struct TYPE_16__ {int types; TYPE_1__ sheets; } ;
typedef TYPE_4__ ngx_http_xslt_filter_loc_conf_t ;
typedef int ngx_http_xslt_filter_ctx_t ;
struct TYPE_15__ {scalar_t__ status; } ;
struct TYPE_17__ {int main_filter_need_in_memory; int pool; TYPE_3__ headers_out; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int *,int ) ;
 int * FUNC_4 (TYPE_5__*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int * FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_5)
{
    ngx_http_xslt_filter_ctx_t *VAR_6;
    ngx_http_xslt_filter_loc_conf_t *VAR_7;

    FUNC_5(VAR_2, VAR_5->connection->log, 0,
                   "xslt filter header");

    if (VAR_5->headers_out.status == VAR_1) {
        return FUNC_2(VAR_5);
    }

    VAR_7 = FUNC_1(VAR_5, VAR_4);

    if (VAR_7->sheets.nelts == 0
        || FUNC_4(VAR_5, &VAR_7->types) == ((void*)0))
    {
        return FUNC_2(VAR_5);
    }

    VAR_6 = FUNC_0(VAR_5, VAR_4);

    if (VAR_6) {
        return FUNC_2(VAR_5);
    }

    VAR_6 = FUNC_6(VAR_5->pool, sizeof(ngx_http_xslt_filter_ctx_t));
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_5, VAR_6, VAR_4);

    VAR_5->main_filter_need_in_memory = 1;

    return VAR_3;
}
