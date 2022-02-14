
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_log_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_7__ {int * log; } ;
struct TYPE_5__ {int * log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (unsigned int,int *,int ,char*,size_t,int *) ;

int
FUNC_1(ngx_http_request_t *VAR_5, int VAR_6, u_char *VAR_7,
    size_t VAR_8)
{
    ngx_log_t *VAR_9;

    if (VAR_6 > VAR_1 || VAR_6 < VAR_2) {
        return VAR_0;
    }

    if (VAR_5 && VAR_5->connection && VAR_5->connection->log) {
        VAR_9 = VAR_5->connection->log;

    } else {
        VAR_9 = VAR_4->log;
    }

    FUNC_0((unsigned) VAR_6, VAR_9, 0, "%*s", VAR_8, VAR_7);

    return VAR_3;
}
