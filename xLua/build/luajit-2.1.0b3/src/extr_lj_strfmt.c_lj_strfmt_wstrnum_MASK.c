
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int n; } ;
typedef TYPE_1__ cTValue ;
struct TYPE_11__ {int len; } ;
typedef int SBuf ;
typedef int MSize ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 char const* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_6__* FUNC_6 (TYPE_1__*) ;
 char const* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

const char *FUNC_11(lua_State *VAR_1, cTValue *VAR_2, MSize *VAR_3)
{
  SBuf *VAR_4;
  if (FUNC_10(VAR_2)) {
    *VAR_3 = FUNC_6(VAR_2)->len;
    return FUNC_7(VAR_2);
  } else if (FUNC_8(VAR_2)) {
    VAR_4 = FUNC_3(FUNC_1(VAR_1), FUNC_0(VAR_2));
  } else if (FUNC_9(VAR_2)) {
    VAR_4 = FUNC_2(FUNC_1(VAR_1), VAR_0, VAR_2->n);
  } else {
    return ((void*)0);
  }
  *VAR_3 = FUNC_5(VAR_4);
  return FUNC_4(VAR_4);
}
