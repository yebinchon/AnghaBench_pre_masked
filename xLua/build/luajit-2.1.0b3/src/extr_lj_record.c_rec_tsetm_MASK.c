
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int flags; TYPE_5__* L; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
typedef int cTValue ;
struct TYPE_20__ {int * base; } ;
struct TYPE_19__ {int asize; } ;
struct TYPE_18__ {void* val; int valv; int key; int keyv; scalar_t__ idxchain; void* tab; int tabv; } ;
typedef TYPE_2__ RecordIndex ;
typedef TYPE_3__ GCtab ;
typedef int BCReg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(jit_State *VAR_1, BCReg VAR_2, BCReg VAR_3, int32_t VAR_4)
{
  RecordIndex VAR_5;
  cTValue *VAR_6 = VAR_1->L->base;
  GCtab *VAR_7 = FUNC_9(&VAR_6[VAR_2-1]);
  FUNC_8(VAR_1->L, &VAR_5.tabv, VAR_7);
  VAR_5.tab = FUNC_1(VAR_1, VAR_2-1);
  VAR_5.idxchain = 0;
  for (; VAR_2 < VAR_3; VAR_4++, VAR_2++) {
    FUNC_6(&VAR_5.keyv, VAR_4);
    VAR_5.key = FUNC_2(VAR_1, VAR_4);
    FUNC_0(VAR_1->L, &VAR_5.valv, &VAR_6[VAR_2]);
    VAR_5.val = FUNC_1(VAR_1, VAR_2);
    FUNC_3(VAR_1, &VAR_5);
  }
}
