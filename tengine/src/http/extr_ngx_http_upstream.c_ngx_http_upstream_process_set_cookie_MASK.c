
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int * elts; } ;
struct TYPE_10__ {TYPE_5__ cookies; } ;
struct TYPE_11__ {scalar_t__ cacheable; TYPE_1__* conf; TYPE_2__ headers_in; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_12__ {int pool; TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef TYPE_5__ ngx_array_t ;
struct TYPE_9__ {int ignore_headers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int,int) ;
 int ** FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_table_elt_t *VAR_4,
    ngx_uint_t VAR_5)
{
    ngx_array_t *VAR_6;
    ngx_table_elt_t **VAR_7;
    ngx_http_upstream_t *VAR_8;

    VAR_8 = VAR_3->upstream;
    VAR_6 = &VAR_8->headers_in.cookies;

    if (VAR_6->elts == ((void*)0)) {
        if (FUNC_0(VAR_6, VAR_3->pool, 1, sizeof(ngx_table_elt_t *)) != VAR_2)
        {
            return VAR_0;
        }
    }

    VAR_7 = FUNC_1(VAR_6);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_4;







    return VAR_2;
}
