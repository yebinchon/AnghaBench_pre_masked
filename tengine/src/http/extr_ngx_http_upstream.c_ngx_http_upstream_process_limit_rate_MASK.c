
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_11__ {int len; int data; } ;
struct TYPE_12__ {TYPE_3__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {TYPE_4__* x_accel_limit_rate; } ;
struct TYPE_13__ {TYPE_2__* conf; TYPE_1__ headers_in; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_14__ {size_t limit_rate; int limit_rate_set; TYPE_5__* upstream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_10__ {int ignore_headers; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3, ngx_table_elt_t *VAR_4,
    ngx_uint_t VAR_5)
{
    ngx_int_t VAR_6;
    ngx_http_upstream_t *VAR_7;

    VAR_7 = VAR_3->upstream;
    VAR_7->headers_in.x_accel_limit_rate = VAR_4;

    if (VAR_7->conf->ignore_headers & VAR_1) {
        return VAR_2;
    }

    VAR_6 = FUNC_0(VAR_4->value.data, VAR_4->value.len);

    if (VAR_6 != VAR_0) {
        VAR_3->limit_rate = (size_t) VAR_6;
        VAR_3->limit_rate_set = 1;
    }

    return VAR_2;
}
