
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cTValue ;
struct TYPE_5__ {int val; int key; } ;
typedef TYPE_1__ Node ;
typedef int GCtab ;
typedef int GCstr ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

cTValue *FUNC_4(GCtab *VAR_0, GCstr *VAR_1)
{
  Node *VAR_2 = FUNC_0(VAR_0, VAR_1);
  do {
    if (FUNC_3(&VAR_2->key) && FUNC_2(&VAR_2->key) == VAR_1)
      return &VAR_2->val;
  } while ((VAR_2 = FUNC_1(VAR_2)));
  return ((void*)0);
}
