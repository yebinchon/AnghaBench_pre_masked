
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int GCtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

GCtab *FUNC_3(lua_State *VAR_1, int VAR_2)
{
  TValue *VAR_3 = VAR_1->base + VAR_2-1;
  if (!(VAR_3 < VAR_1->top && FUNC_2(VAR_3)))
    FUNC_0(VAR_1, VAR_2, VAR_0);
  return FUNC_1(VAR_3);
}
