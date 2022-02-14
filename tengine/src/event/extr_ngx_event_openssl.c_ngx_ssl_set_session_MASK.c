
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_ssl_session_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int log; TYPE_1__* ssl; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_4__ {int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_2(ngx_connection_t *VAR_3, ngx_ssl_session_t *VAR_4)
{
    if (VAR_4) {
        if (FUNC_0(VAR_3->ssl->connection, VAR_4) == 0) {
            FUNC_1(VAR_1, VAR_3->log, 0, "SSL_set_session() failed");
            return VAR_0;
        }
    }

    return VAR_2;
}
