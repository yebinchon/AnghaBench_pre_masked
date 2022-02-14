
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int const ngx_int_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {size_t nelts; int ** elts; } ;
struct TYPE_11__ {size_t sent; TYPE_2__ monitor_index; } ;
typedef TYPE_4__ ngx_http_reqstat_store_t ;
typedef int ngx_http_reqstat_rbnode_t ;
typedef int ngx_http_reqstat_conf_t ;
struct TYPE_8__ {size_t sent; } ;





 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (TYPE_3__*,int **,TYPE_4__**) ;
 int FUNC_1 (int *,int ,size_t) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_uint_t VAR_3, VAR_4;
    ngx_http_reqstat_conf_t *VAR_5;
    ngx_http_reqstat_store_t *VAR_6;
    ngx_http_reqstat_rbnode_t *VAR_7, **VAR_8;

    switch (FUNC_0(VAR_2, &VAR_5, &VAR_6)) {
        case 128:
            return 128;

        case 129:
        case 130:
            return VAR_1;

        default:
            break;
    }

    VAR_4 = VAR_2->connection->sent - VAR_6->sent;
    VAR_6->sent = VAR_2->connection->sent;

    VAR_8 = VAR_6->monitor_index.elts;
    for (VAR_3 = 0; VAR_3 < VAR_6->monitor_index.nelts; VAR_3++) {
        VAR_7 = VAR_8[VAR_3];
        if (VAR_7 == ((void*)0)) {
            continue;
        }

        FUNC_1(VAR_7, VAR_0, VAR_4);
    }

    return VAR_1;
}
