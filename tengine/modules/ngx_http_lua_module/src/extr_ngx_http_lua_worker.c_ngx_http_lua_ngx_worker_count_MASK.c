
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ worker_processes; } ;
typedef TYPE_1__ ngx_core_conf_t ;
typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_4__ {int conf_ctx; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_2)
{
    ngx_core_conf_t *VAR_3;

    VAR_3 = (ngx_core_conf_t *) FUNC_1(VAR_1->conf_ctx,
                                           VAR_0);

    FUNC_0(VAR_2, (lua_Integer) VAR_3->worker_processes);
    return 1;
}
