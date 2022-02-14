
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int output; scalar_t__ block; } ;
typedef TYPE_2__ ngx_http_ssi_ctx_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_http_ssi_ctx_t *VAR_3,
    ngx_str_t **VAR_4)
{
    FUNC_0(VAR_0, VAR_2->connection->log, 0,
                   "ssi endblock");

    VAR_3->output = 1;
    VAR_3->block = 0;

    return VAR_1;
}
