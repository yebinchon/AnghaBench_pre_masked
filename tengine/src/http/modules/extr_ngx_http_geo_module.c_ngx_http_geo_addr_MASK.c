
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ nelts; } ;
struct TYPE_11__ {TYPE_4__ x_forwarded_for; } ;
struct TYPE_12__ {TYPE_1__ headers_in; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {int proxy_recursive; int * proxies; } ;
typedef TYPE_3__ ngx_http_geo_ctx_t ;
typedef TYPE_4__ ngx_array_t ;
typedef int ngx_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_4__*,int *,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_http_geo_ctx_t *VAR_3,
    ngx_addr_t *VAR_4)
{
    ngx_array_t *VAR_5;

    if (FUNC_0(VAR_2, VAR_3, VAR_4) != VAR_1) {
        return VAR_0;
    }

    VAR_5 = &VAR_2->headers_in.x_forwarded_for;

    if (VAR_5->nelts > 0 && VAR_3->proxies != ((void*)0)) {
        (void) FUNC_1(VAR_2, VAR_4, VAR_5, ((void*)0),
                                           VAR_3->proxies, VAR_3->proxy_recursive);
    }

    return VAR_1;
}
