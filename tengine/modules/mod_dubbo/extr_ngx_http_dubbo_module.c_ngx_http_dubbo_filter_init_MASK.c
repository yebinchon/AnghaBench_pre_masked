
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {int length; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
struct TYPE_6__ {TYPE_1__* request; } ;
typedef TYPE_3__ ngx_http_dubbo_ctx_t ;
struct TYPE_4__ {TYPE_2__* upstream; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(void *VAR_1)
{
    ngx_http_dubbo_ctx_t *VAR_2 = VAR_1;

    ngx_http_upstream_t *VAR_3;

    VAR_3 = VAR_2->request->upstream;

    VAR_3->length = 1;

    return VAR_0;
}
