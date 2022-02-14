
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
struct TYPE_13__ {scalar_t__ mtv; int tabv; int valv; int keyv; int tab; int val; int key; int mobjv; int mobj; int mt; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;
typedef int MMS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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

__attribute__((used)) static void FUNC_12(jit_State *VAR_7, RecordIndex *VAR_8, int VAR_9)
{
  VAR_8->tab = VAR_8->val;
  FUNC_2(VAR_7->L, &VAR_8->tabv, &VAR_8->valv);
  while (1) {
    MMS VAR_10 = (VAR_9 & 2) ? VAR_5 : VAR_6;
    if (FUNC_4(VAR_7, VAR_8, VAR_10)) {
      cTValue *VAR_11;
      TRef VAR_12 = VAR_8->mobj;
      TValue VAR_13;
      FUNC_2(VAR_7->L, &VAR_13, &VAR_8->mobjv);

      VAR_11 = &VAR_8->keyv;
      if (FUNC_9(VAR_11) && FUNC_8(FUNC_7(VAR_11)->metatable) == VAR_8->mtv) {
 TRef VAR_14 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_8->key, VAR_0);
 FUNC_3(FUNC_1(VAR_3, VAR_2), VAR_14, VAR_8->mt);
      } else if (FUNC_10(VAR_11) && FUNC_8(FUNC_11(VAR_11)->metatable) == VAR_8->mtv) {
 TRef VAR_15 = FUNC_3(FUNC_0(VAR_4, VAR_2), VAR_8->key, VAR_1);
 FUNC_3(FUNC_1(VAR_3, VAR_2), VAR_15, VAR_8->mt);
      } else {
 VAR_8->tab = VAR_8->key;
 FUNC_2(VAR_7->L, &VAR_8->tabv, VAR_11);
 if (!FUNC_4(VAR_7, VAR_8, VAR_10) ||
     FUNC_5(VAR_7, VAR_12, VAR_8->mobj, &VAR_13, &VAR_8->mobjv))
   goto nomatch;
      }
      FUNC_6(VAR_7, VAR_8, VAR_9);
      return;
    }

  nomatch:

    if (!(VAR_9 & 2)) break;
    VAR_8->tab = VAR_8->key; VAR_8->key = VAR_8->val; VAR_8->val = VAR_8->tab;
    FUNC_2(VAR_7->L, &VAR_8->tabv, &VAR_8->keyv);
    FUNC_2(VAR_7->L, &VAR_8->keyv, &VAR_8->valv);
    FUNC_2(VAR_7->L, &VAR_8->valv, &VAR_8->tabv);
    VAR_9 ^= 3;
  }
}
