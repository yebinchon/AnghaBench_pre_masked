
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* data; int handler; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
struct TYPE_9__ {TYPE_3__* connection; int waiting_list; int leak_list; int send_list; int data; } ;
typedef TYPE_2__ ngx_multi_connection_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

ngx_multi_connection_t*
FUNC_3(ngx_connection_t *VAR_1)
{
    ngx_multi_connection_t *VAR_2;
    ngx_pool_cleanup_t *VAR_3;


    VAR_2 = FUNC_0(VAR_1->pool, sizeof(ngx_multi_connection_t));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(&VAR_2->data);
    FUNC_2(&VAR_2->send_list);
    FUNC_2(&VAR_2->leak_list);
    FUNC_2(&VAR_2->waiting_list);

    VAR_2->connection = VAR_1;

    VAR_3 = FUNC_1(VAR_1->pool, 0);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->handler = VAR_0;
    VAR_3->data = VAR_2;

    return VAR_2;
}
