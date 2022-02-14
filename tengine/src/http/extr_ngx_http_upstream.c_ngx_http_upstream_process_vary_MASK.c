
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_12__ {int len; char* data; } ;
struct TYPE_14__ {TYPE_3__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_5__* vary; } ;
struct TYPE_15__ {scalar_t__ cacheable; TYPE_1__* conf; TYPE_4__ headers_in; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_16__ {TYPE_2__* cache; TYPE_6__* upstream; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_11__ {TYPE_3__ vary; } ;
struct TYPE_10__ {int ignore_headers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_3,
    ngx_table_elt_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_http_upstream_t *VAR_6;

    VAR_6 = VAR_3->upstream;
    VAR_6->headers_in.vary = VAR_4;
    return VAR_2;
}
