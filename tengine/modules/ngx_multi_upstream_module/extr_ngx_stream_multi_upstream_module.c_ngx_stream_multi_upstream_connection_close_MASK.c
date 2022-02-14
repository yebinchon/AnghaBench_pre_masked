
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int log; TYPE_1__* ssl; int * pool; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_7__ {int no_wait_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

ngx_int_t
FUNC_4(ngx_connection_t *VAR_2)
{
    ngx_pool_t *VAR_3 = VAR_2->pool;
    FUNC_2(VAR_0, VAR_2->log,
            0, "multi: multi connection real close %p", VAR_2);

    FUNC_0(VAR_2);

    if (VAR_3) {
        FUNC_1(VAR_3);
    }

    return VAR_1;
}
