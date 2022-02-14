
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int destroyed; scalar_t__ pool; int fd; int log; TYPE_1__* ssl; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_6__ {int no_wait_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

ngx_int_t
FUNC_4(ngx_connection_t *VAR_2)
{
    FUNC_2(VAR_0, VAR_2->log, 0,
            "multi: close http upstream connection: %d", VAR_2->fd);

    if (VAR_2->pool) {
        FUNC_1(VAR_2->pool);
    }

    VAR_2->destroyed = 1;

    FUNC_0(VAR_2);

    return VAR_1;
}
