
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_16__ {char* data; int len; } ;
struct TYPE_18__ {TYPE_3__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int * elts; } ;
struct TYPE_15__ {int * x_accel_expires; TYPE_8__ cache_control; } ;
struct TYPE_19__ {scalar_t__ cacheable; TYPE_2__ headers_in; TYPE_1__* conf; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_20__ {TYPE_4__* cache; int pool; TYPE_6__* upstream; } ;
typedef TYPE_7__ ngx_http_request_t ;
typedef TYPE_8__ ngx_array_t ;
struct TYPE_17__ {scalar_t__ valid_sec; scalar_t__ error_sec; scalar_t__ updating_sec; } ;
struct TYPE_14__ {int ignore_headers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int ,int,int) ;
 TYPE_5__** FUNC_1 (TYPE_8__*) ;
 char* FUNC_2 (char*,char*,char*,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3,
    ngx_table_elt_t *VAR_4, ngx_uint_t VAR_5)
{
    ngx_array_t *VAR_6;
    ngx_table_elt_t **VAR_7;
    ngx_http_upstream_t *VAR_8;

    VAR_8 = VAR_3->upstream;
    VAR_6 = &VAR_8->headers_in.cache_control;

    if (VAR_6->elts == ((void*)0)) {
        if (FUNC_0(VAR_6, VAR_3->pool, 2, sizeof(ngx_table_elt_t *)) != VAR_2)
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
