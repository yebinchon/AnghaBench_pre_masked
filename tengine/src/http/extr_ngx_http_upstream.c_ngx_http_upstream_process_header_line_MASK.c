
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_4__ {int headers_in; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_1, ngx_table_elt_t *VAR_2,
    ngx_uint_t VAR_3)
{
    ngx_table_elt_t **VAR_4;

    VAR_4 = (ngx_table_elt_t **) ((char *) &VAR_1->upstream->headers_in + VAR_3);

    if (*VAR_4 == ((void*)0)) {
        *VAR_4 = VAR_2;
    }

    return VAR_0;
}
