
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int resource_count; scalar_t__ wait_count; int wait_queue; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

int
FUNC_3(ngx_http_lua_sema_t **VAR_4,
    int VAR_5, char **VAR_6)
{
    ngx_http_lua_sema_t *VAR_7;

    VAR_7 = FUNC_0();
    if (VAR_7 == ((void*)0)) {
        *VAR_6 = "no memory";
        return VAR_0;
    }

    FUNC_2(&VAR_7->wait_queue);

    VAR_7->resource_count = VAR_5;
    VAR_7->wait_count = 0;
    *VAR_4 = VAR_7;

    FUNC_1(VAR_1, VAR_3->log, 0,
                   "http lua semaphore new: %p, resources: %d",
                   VAR_7, VAR_7->resource_count);

    return VAR_2;
}
