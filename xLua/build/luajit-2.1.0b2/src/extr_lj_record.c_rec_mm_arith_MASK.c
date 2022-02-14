
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {TYPE_10__* L; int * base; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_13__ {int mobjv; int mobj; int keyv; int tabv; int key; int tab; } ;
struct TYPE_11__ {int * base; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;
typedef scalar_t__ MMS ;
typedef int BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_10__*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static TRef FUNC_6(jit_State *VAR_6, RecordIndex *VAR_7, MMS VAR_8)
{

  BCReg VAR_9 = FUNC_5(VAR_6, VAR_8 == VAR_2 ? VAR_4 : VAR_5);
  TRef *VAR_10 = VAR_6->base + VAR_9;
  TValue *VAR_11 = VAR_6->L->base + VAR_9;
  VAR_10[1] = VAR_7->tab; VAR_10[2] = VAR_7->key;
  FUNC_0(VAR_6->L, VAR_11+1, &VAR_7->tabv);
  FUNC_0(VAR_6->L, VAR_11+2, &VAR_7->keyv);
  if (!FUNC_2(VAR_6, VAR_7, VAR_8)) {
    if (VAR_8 != VAR_3) {
      VAR_7->tab = VAR_7->key;
      FUNC_0(VAR_6->L, &VAR_7->tabv, &VAR_7->keyv);
      if (FUNC_2(VAR_6, VAR_7, VAR_8))
 goto ok;
    }
    FUNC_3(VAR_6, VAR_1);
  }
ok:
  FUNC_4(!VAR_0);
  VAR_10[0] = VAR_7->mobj;
  FUNC_0(VAR_6->L, VAR_11+0, &VAR_7->mobjv);
  FUNC_1(VAR_6, VAR_9, 2);
  return 0;
}
