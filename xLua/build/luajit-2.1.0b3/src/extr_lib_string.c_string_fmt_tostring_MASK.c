
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
typedef int TValue ;
typedef int GCstr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int * FUNC_2 (TYPE_1__*,int *,int ) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static GCstr *FUNC_9(lua_State *VAR_1, int VAR_2, int VAR_3)
{
  TValue *VAR_4 = VAR_1->base+VAR_2-1;
  cTValue *VAR_5;
  FUNC_4(VAR_4 < VAR_1->top);
  if (FUNC_0(FUNC_8(VAR_4)))
    return FUNC_6(VAR_4);
  if (VAR_3 != 2 && !FUNC_7(VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0))) {
    FUNC_1(VAR_1, VAR_1->top++, VAR_5);
    FUNC_1(VAR_1, VAR_1->top++, VAR_4);
    FUNC_5(VAR_1, 1, 1);
    FUNC_1(VAR_1, VAR_1->base+VAR_2-1, --VAR_1->top);
    return ((void*)0);
  }
  return FUNC_3(VAR_1, VAR_4);
}
