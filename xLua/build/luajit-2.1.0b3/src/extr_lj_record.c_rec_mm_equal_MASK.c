
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_15__ {int metatable; } ;
struct TYPE_14__ {int metatable; } ;
struct TYPE_13__ {scalar_t__ mtv; int mobjv; int mobj; int tabv; int key; int tab; int mt; int keyv; int valv; int val; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int *,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;
 TYPE_4__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_3__* FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(jit_State *VAR_6, RecordIndex *VAR_7, int VAR_8)
{
  VAR_7->tab = VAR_7->val;
  FUNC_2(VAR_6->L, &VAR_7->tabv, &VAR_7->valv);
  if (FUNC_4(VAR_6, VAR_7, VAR_5)) {
    cTValue *VAR_9;
    TRef VAR_10 = VAR_7->mobj;
    TValue VAR_11;
    FUNC_2(VAR_6->L, &VAR_11, &VAR_7->mobjv);

    VAR_9 = &VAR_7->keyv;
    if (FUNC_9(VAR_9) && FUNC_8(FUNC_7(VAR_9)->metatable) == VAR_7->mtv) {
      TRef VAR_12 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_7->key, VAR_0);
      FUNC_3(FUNC_1(VAR_3, VAR_2), VAR_12, VAR_7->mt);
    } else if (FUNC_10(VAR_9) && FUNC_8(FUNC_11(VAR_9)->metatable) == VAR_7->mtv) {
      TRef VAR_13 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_7->key, VAR_1);
      FUNC_3(FUNC_1(VAR_3, VAR_2), VAR_13, VAR_7->mt);
    } else {
      VAR_7->tab = VAR_7->key;
      FUNC_2(VAR_6->L, &VAR_7->tabv, VAR_9);
      if (!FUNC_4(VAR_6, VAR_7, VAR_5) ||
   FUNC_5(VAR_6, VAR_10, VAR_7->mobj, &VAR_11, &VAR_7->mobjv))
 return;
    }
    FUNC_6(VAR_6, VAR_7, VAR_8);
  }
}
