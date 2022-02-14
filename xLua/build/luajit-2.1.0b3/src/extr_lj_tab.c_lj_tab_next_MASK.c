
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int lua_State ;
struct TYPE_8__ {size_t asize; size_t hmask; int node; } ;
struct TYPE_7__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ GCtab ;


 int * FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int *,int *,int *) ;
 size_t FUNC_2 (int *,TYPE_2__*,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;

int FUNC_6(lua_State *VAR_0, GCtab *VAR_1, TValue *VAR_2)
{
  uint32_t VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  for (VAR_3++; VAR_3 < VAR_1->asize; VAR_3++)
    if (!FUNC_5(FUNC_0(VAR_1, VAR_3))) {
      FUNC_4(VAR_2, VAR_3);
      FUNC_1(VAR_0, VAR_2+1, FUNC_0(VAR_1, VAR_3));
      return 1;
    }
  for (VAR_3 -= VAR_1->asize; VAR_3 <= VAR_1->hmask; VAR_3++) {
    Node *VAR_4 = &FUNC_3(VAR_1->node)[VAR_3];
    if (!FUNC_5(&VAR_4->val)) {
      FUNC_1(VAR_0, VAR_2, &VAR_4->key);
      FUNC_1(VAR_0, VAR_2+1, &VAR_4->val);
      return 1;
    }
  }
  return 0;
}
