
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* func ) (int *) ;int kwargs; int pargs; int name; } ;
typedef TYPE_1__ zcp_list_info_t ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0)
{
 zcp_list_info_t *VAR_1 = FUNC_0(VAR_0, FUNC_1(1));

 FUNC_3(VAR_0, VAR_1->name, VAR_1->pargs, VAR_1->kwargs);

 return (VAR_1->func(VAR_0));
}
