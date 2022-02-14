
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_12__ {int tmptv2; } ;
typedef int MMS ;
typedef int CTState ;
typedef int CDArith ;


 TYPE_9__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int ) ;

int FUNC_7(lua_State *VAR_0, MMS VAR_1)
{
  CTState *VAR_2 = FUNC_5(VAR_0);
  CDArith VAR_3;
  if (FUNC_1(VAR_0, VAR_2, &VAR_3)) {
    if (FUNC_2(VAR_0, VAR_2, &VAR_3, VAR_1) || FUNC_3(VAR_0, VAR_2, &VAR_3, VAR_1)) {
      FUNC_4(VAR_0, &FUNC_0(VAR_0)->tmptv2, VAR_0->top-1);
      return 1;
    }
  }
  return FUNC_6(VAR_0, VAR_2, &VAR_3, VAR_1);
}
