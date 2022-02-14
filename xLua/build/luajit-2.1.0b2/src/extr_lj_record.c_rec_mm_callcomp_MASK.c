
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_7__* L; int * base; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_10__ {int * base; } ;
struct TYPE_9__ {int keyv; int valv; int mobjv; int key; int val; int mobj; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;
typedef int BCReg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(jit_State *VAR_3, RecordIndex *VAR_4, int VAR_5)
{
  BCReg VAR_6 = FUNC_3(VAR_3, (VAR_5&1) ? VAR_1 : VAR_2);
  TRef *VAR_7 = VAR_3->base + VAR_6;
  TValue *VAR_8 = VAR_3->L->base + VAR_6;
  FUNC_2(!VAR_0);
  VAR_7[0] = VAR_4->mobj; VAR_7[1] = VAR_4->val; VAR_7[2] = VAR_4->key;
  FUNC_0(VAR_3->L, VAR_8+0, &VAR_4->mobjv);
  FUNC_0(VAR_3->L, VAR_8+1, &VAR_4->valv);
  FUNC_0(VAR_3->L, VAR_8+2, &VAR_4->keyv);
  FUNC_1(VAR_3, VAR_6, 2);
}
