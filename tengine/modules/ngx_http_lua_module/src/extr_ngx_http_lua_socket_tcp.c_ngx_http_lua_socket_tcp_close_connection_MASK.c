
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pool; TYPE_1__* ssl; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_6__ {int no_wait_shutdown; int no_send_shutdown; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(ngx_connection_t *VAR_0)
{
    if (VAR_0->pool) {
        FUNC_1(VAR_0->pool);
        VAR_0->pool = ((void*)0);
    }

    FUNC_0(VAR_0);
}
