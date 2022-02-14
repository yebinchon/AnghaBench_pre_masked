
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef int GCtab ;
typedef int GCstr ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

TValue *FUNC_6(lua_State *VAR_0, GCtab *VAR_1, GCstr *VAR_2)
{
  TValue VAR_3;
  Node *VAR_4 = FUNC_0(VAR_1, VAR_2);
  do {
    if (FUNC_5(&VAR_4->key) && FUNC_4(&VAR_4->key) == VAR_2)
      return &VAR_4->val;
  } while ((VAR_4 = FUNC_2(VAR_4)));
  FUNC_3(VAR_0, &VAR_3, VAR_2);
  return FUNC_1(VAR_0, VAR_1, &VAR_3);
}
