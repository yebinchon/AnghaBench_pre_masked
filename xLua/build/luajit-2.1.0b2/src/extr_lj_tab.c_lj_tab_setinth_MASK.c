
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_13__ {int n; } ;
struct TYPE_11__ {int n; } ;
struct TYPE_12__ {TYPE_1__ val; TYPE_3__ key; } ;
typedef TYPE_1__ TValue ;
typedef TYPE_2__ Node ;
typedef int GCtab ;


 TYPE_2__* FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

TValue *FUNC_4(lua_State *VAR_0, GCtab *VAR_1, int32_t VAR_2)
{
  TValue VAR_3;
  Node *VAR_4;
  VAR_3.n = (lua_Number)VAR_2;
  VAR_4 = FUNC_0(VAR_1, &VAR_3);
  do {
    if (FUNC_3(&VAR_4->key) && VAR_4->key.n == VAR_3.n)
      return &VAR_4->val;
  } while ((VAR_4 = FUNC_2(VAR_4)));
  return FUNC_1(VAR_0, VAR_1, &VAR_3);
}
