
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int L; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_11__ {int keyv; int tabv; int key; int tab; int valv; int val; } ;
typedef TYPE_2__ RecordIndex ;
typedef int MMS ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(jit_State *VAR_0, RecordIndex *VAR_1, int VAR_2, MMS VAR_3)
{
  FUNC_2(VAR_0);
  if (FUNC_5(VAR_1->val)) {
    VAR_1->tab = VAR_1->val;
    FUNC_0(VAR_0->L, &VAR_1->tabv, &VAR_1->valv);
  } else {
    FUNC_3(FUNC_5(VAR_1->key));
    VAR_1->tab = VAR_1->key;
    FUNC_0(VAR_0->L, &VAR_1->tabv, &VAR_1->keyv);
  }
  FUNC_1(VAR_0, VAR_1, VAR_3);
  FUNC_4(VAR_0, VAR_1, VAR_2);
}
