
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_7__ {int destroyed; int * pool; TYPE_1__* ssl; int fd; int log; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_6__ {void (* handler ) (TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;

void
FUNC_5(ngx_connection_t *VAR_3)
{
    ngx_pool_t *VAR_4;

    FUNC_3(VAR_1, VAR_3->log, 0,
                   "close http connection: %d", VAR_3->fd);
    VAR_3->destroyed = 1;

    VAR_4 = VAR_3->pool;

    FUNC_1(VAR_3);

    FUNC_2(VAR_4);
}
