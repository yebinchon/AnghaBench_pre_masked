
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_13__ {scalar_t__ percent; int value; } ;
typedef TYPE_4__ ngx_http_split_clients_part_t ;
struct TYPE_10__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_14__ {TYPE_1__ parts; int value; } ;
typedef TYPE_5__ ngx_http_split_clients_ctx_t ;
struct TYPE_15__ {TYPE_2__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_http_split_clients_ctx_t *VAR_6 = (ngx_http_split_clients_ctx_t *) VAR_5;

    uint32_t VAR_7;
    ngx_str_t VAR_8;
    ngx_uint_t VAR_9;
    ngx_http_split_clients_part_t *VAR_10;

    *VAR_4 = VAR_2;

    if (FUNC_0(VAR_3, &VAR_6->value, &VAR_8) != VAR_1) {
        return VAR_1;
    }

    VAR_7 = FUNC_2(VAR_8.data, VAR_8.len);

    VAR_10 = VAR_6->parts.elts;

    for (VAR_9 = 0; VAR_9 < VAR_6->parts.nelts; VAR_9++) {

        FUNC_1(VAR_0, VAR_3->connection->log, 0,
                       "http split: %uD %uD", VAR_7, VAR_10[VAR_9].percent);

        if (VAR_7 < VAR_10[VAR_9].percent || VAR_10[VAR_9].percent == 0) {
            *VAR_4 = VAR_10[VAR_9].value;
            return VAR_1;
        }
    }

    return VAR_1;
}
