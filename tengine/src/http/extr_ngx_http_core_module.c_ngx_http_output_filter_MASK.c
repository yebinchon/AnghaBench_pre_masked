
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int args; int uri; TYPE_2__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_6__ {int error; int log; } ;
typedef TYPE_2__ ngx_connection_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *) ;

ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_connection_t *VAR_5;

    VAR_5 = VAR_2->connection;

    FUNC_1(VAR_1, VAR_5->log, 0,
                   "http output filter \"%V?%V\"", &VAR_2->uri, &VAR_2->args);

    VAR_4 = FUNC_0(VAR_2, VAR_3);

    if (VAR_4 == VAR_0) {

        VAR_5->error = 1;
    }

    return VAR_4;
}
