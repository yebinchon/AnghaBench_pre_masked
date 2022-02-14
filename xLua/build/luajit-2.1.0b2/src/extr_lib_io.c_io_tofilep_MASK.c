
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {scalar_t__ udtype; } ;
typedef int IOFileUD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static IOFileUD *FUNC_4(lua_State *VAR_1)
{
  if (!(VAR_1->base < VAR_1->top && FUNC_1(VAR_1->base) &&
 FUNC_2(VAR_1->base)->udtype == VAR_0))
    FUNC_0(VAR_1, 1, "FILE*");
  return (IOFileUD *)FUNC_3(FUNC_2(VAR_1->base));
}
