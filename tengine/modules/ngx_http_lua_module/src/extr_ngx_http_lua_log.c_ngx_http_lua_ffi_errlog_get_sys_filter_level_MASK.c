
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int log_level; } ;
typedef TYPE_2__ ngx_log_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_2__* log; } ;
struct TYPE_6__ {TYPE_2__* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;

int
FUNC_0(ngx_http_request_t *VAR_3)
{
    ngx_log_t *VAR_4;
    int VAR_5;

    if (VAR_3 && VAR_3->connection && VAR_3->connection->log) {
        VAR_4 = VAR_3->connection->log;

    } else {
        VAR_4 = VAR_2->log;
    }

    VAR_5 = VAR_4->log_level;
    if (VAR_5 == VAR_1) {
        VAR_5 = VAR_0;
    }

    return VAR_5;
}
