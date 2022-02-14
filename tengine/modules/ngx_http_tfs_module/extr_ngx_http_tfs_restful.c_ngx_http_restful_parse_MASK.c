
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int version; } ;
typedef TYPE_2__ ngx_http_tfs_restful_ctx_t ;
struct TYPE_14__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_http_tfs_restful_ctx_t *VAR_4)
{
    ngx_int_t VAR_5;

    VAR_5 = FUNC_2(VAR_3, VAR_4);
    if (VAR_5 == VAR_0) {
        FUNC_3(VAR_2, VAR_3->connection->log, 0, "parse uri failed");
        return VAR_1;
    }

    if (VAR_4->version == 1) {
        VAR_5 = FUNC_1(VAR_3, VAR_4);
    }

    if (VAR_4->version == 2) {
        VAR_5 = FUNC_0(VAR_3, VAR_4);
    }

    return VAR_5;
}
