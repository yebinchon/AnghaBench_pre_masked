
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxstack; int * base; int stack; int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int global_State ;
struct TYPE_5__ {int framesize; } ;
typedef int TValue ;
typedef int MSize ;
typedef int GCfunc ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static MSize FUNC_6(global_State *VAR_1, lua_State *VAR_2)
{
  TValue *VAR_3, *VAR_4 = VAR_2->top-1, *VAR_5 = FUNC_5(VAR_2->stack);

  for (VAR_3 = VAR_2->base-1; VAR_3 > VAR_5+VAR_0; VAR_3 = FUNC_1(VAR_3)) {
    GCfunc *VAR_6 = FUNC_0(VAR_3);
    TValue *VAR_7 = VAR_3;
    if (FUNC_4(VAR_6)) VAR_7 += FUNC_2(VAR_6)->framesize;
    if (VAR_7 > VAR_4) VAR_4 = VAR_7;
    if (!VAR_0) FUNC_3(VAR_1, VAR_6);
  }
  VAR_4++;
  if (VAR_4 > FUNC_5(VAR_2->maxstack)) VAR_4 = FUNC_5(VAR_2->maxstack);
  return (MSize)(VAR_4 - VAR_5);
}
