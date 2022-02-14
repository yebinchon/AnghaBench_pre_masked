
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_10__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_3__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {TYPE_2__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_8__ {int connection_close; TYPE_4__* connection; } ;
struct TYPE_9__ {TYPE_1__ headers_in; } ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,scalar_t__,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1, ngx_table_elt_t *VAR_2,
    ngx_uint_t VAR_3)
{
    VAR_1->upstream->headers_in.connection = VAR_2;

    if (FUNC_0(VAR_2->value.data, VAR_2->value.data + VAR_2->value.len,
                         (u_char *) "close", 5 - 1)
        != ((void*)0))
    {
        VAR_1->upstream->headers_in.connection_close = 1;
    }

    return VAR_0;
}
