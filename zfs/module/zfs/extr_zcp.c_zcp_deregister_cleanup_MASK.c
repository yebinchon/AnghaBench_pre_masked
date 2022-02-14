
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zri_cleanup_handlers; } ;
typedef TYPE_1__ zcp_run_info_t ;
typedef int zcp_cleanup_handler_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;

void
FUNC_3(lua_State *VAR_0, zcp_cleanup_handler_t *VAR_1)
{
 zcp_run_info_t *VAR_2 = FUNC_2(VAR_0);
 FUNC_1(&VAR_2->zri_cleanup_handlers, VAR_1);
 FUNC_0(VAR_1, sizeof (*VAR_1));
}
