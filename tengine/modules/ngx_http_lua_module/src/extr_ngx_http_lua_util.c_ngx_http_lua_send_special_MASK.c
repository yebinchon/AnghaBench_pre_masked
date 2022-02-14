
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_5__ {TYPE_2__* data; } ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_0, ngx_uint_t VAR_1)
{
    ngx_int_t VAR_2;
    ngx_http_request_t *VAR_3;

    VAR_3 = VAR_0->connection->data;

    if (VAR_3 != VAR_0) {



        VAR_0->connection->data = VAR_0;
        VAR_2 = FUNC_0(VAR_0, VAR_1);
        VAR_0->connection->data = VAR_3;
        return VAR_2;
    }

    return FUNC_0(VAR_0, VAR_1);
}
