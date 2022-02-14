
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ posted; scalar_t__ timer_set; } ;
struct TYPE_5__ {TYPE_2__ sleep; } ;
typedef TYPE_1__ ngx_http_lua_co_ctx_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
    ngx_http_lua_co_ctx_t *VAR_3 = VAR_2;

    if (VAR_3->sleep.timer_set) {
        FUNC_2(VAR_0, VAR_1->log, 0,
                       "lua clean up the timer for pending ngx.sleep");

        FUNC_0(&VAR_3->sleep);
    }
}
