
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {TYPE_3__* filter_ctx; int output_filter; } ;
struct TYPE_6__ {TYPE_1__ output; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
struct TYPE_7__ {TYPE_2__* upstream; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2)
{
    ngx_http_upstream_t *VAR_3;

    VAR_3 = VAR_2->upstream;

    VAR_3->output.output_filter = VAR_1;
    VAR_3->output.filter_ctx = VAR_2;

    return VAR_0;
}
