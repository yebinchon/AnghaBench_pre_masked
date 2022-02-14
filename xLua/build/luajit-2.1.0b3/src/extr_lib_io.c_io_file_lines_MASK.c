
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_3)
{
  int VAR_4 = (int)(VAR_3->top - VAR_3->base);
  if (VAR_4 > VAR_1)
    FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_2, VAR_4);
  return 1;
}
