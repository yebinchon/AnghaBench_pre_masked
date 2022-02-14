
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int not_found; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_13__ {TYPE_3__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_9__ {int part; } ;
struct TYPE_10__ {TYPE_1__ headers; } ;
struct TYPE_11__ {TYPE_2__ headers_in; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    if (VAR_1->upstream == ((void*)0)) {
        VAR_2->not_found = 1;
        return VAR_0;
    }

    return FUNC_0(VAR_2, (ngx_str_t *) VAR_3,
                                         &VAR_1->upstream->headers_in.headers.part,
                                         sizeof("upstream_http_") - 1);
}
