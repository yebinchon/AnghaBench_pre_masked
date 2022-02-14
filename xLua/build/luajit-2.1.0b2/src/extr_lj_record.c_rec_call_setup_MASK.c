
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_10__ {int* base; size_t maxslot; TYPE_9__* L; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_12__ {int * base; } ;
struct TYPE_11__ {int tab; int mobj; int mobjv; int tabv; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_9__*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(jit_State *VAR_4, BCReg VAR_5, ptrdiff_t VAR_6)
{
  RecordIndex VAR_7;
  TValue *VAR_8 = &VAR_4->L->base[VAR_5];
  TRef *VAR_9 = &VAR_4->base[VAR_5];
  ptrdiff_t VAR_10;
  FUNC_5(!VAR_0);
  for (VAR_10 = 0; VAR_10 <= VAR_6; VAR_10++)
    (void)FUNC_2(VAR_4, VAR_5+VAR_10);
  if (!FUNC_7(VAR_9[0])) {
    VAR_7.tab = VAR_9[0];
    FUNC_0(VAR_4->L, &VAR_7.tabv, VAR_8);
    if (!FUNC_3(VAR_4, &VAR_7, VAR_2) || !FUNC_7(VAR_7.mobj))
      FUNC_4(VAR_4, VAR_1);
    for (VAR_10 = ++VAR_6; VAR_10 > 0; VAR_10--)
      VAR_9[VAR_10] = VAR_9[VAR_10-1];
    VAR_9[0] = VAR_7.mobj;
    VAR_8 = &VAR_7.mobjv;
  }
  VAR_9[0] = VAR_3 | FUNC_6(VAR_4, FUNC_1(VAR_8), VAR_9[0]);
  VAR_4->maxslot = (BCReg)VAR_6;
}
