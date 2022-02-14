
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* cleanup; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_9__ {int (* handler ) (TYPE_3__*) ;TYPE_3__* data; struct TYPE_9__* next; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_10__ {scalar_t__ fd; } ;
typedef TYPE_3__ ngx_pool_cleanup_file_t ;
typedef scalar_t__ ngx_fd_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(ngx_pool_t *VAR_0, ngx_fd_t VAR_1)
{
    ngx_pool_cleanup_t *VAR_2;
    ngx_pool_cleanup_file_t *VAR_3;

    for (VAR_2 = VAR_0->cleanup; VAR_2; VAR_2 = VAR_2->next) {
        if (VAR_2->handler == FUNC_0
            || VAR_2->handler == FUNC_1)
        {
            VAR_3 = VAR_2->data;

            if (VAR_3->fd == VAR_1) {
                VAR_2->handler(VAR_3);
                VAR_2->handler = ((void*)0);
                return;
            }
        }
    }
}
