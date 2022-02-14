
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {TYPE_10__* L; int * base; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_13__ {int mobjv; int mobj; int tabv; int tab; } ;
struct TYPE_11__ {int * base; } ;
typedef int TValue ;
typedef int TRef ;
typedef TYPE_2__ RecordIndex ;
typedef int BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_10__*,int *,int *) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static TRef FUNC_8(jit_State *VAR_7, TRef VAR_8, TValue *VAR_9)
{
  RecordIndex VAR_10;
  VAR_10.tab = VAR_8;
  FUNC_0(VAR_7->L, &VAR_10.tabv, VAR_9);
  if (FUNC_3(VAR_7, &VAR_10, VAR_4)) {
    BCReg VAR_11 = FUNC_5(VAR_7, VAR_6);
    TRef *VAR_12 = VAR_7->base + VAR_11;
    TValue *VAR_13 = VAR_7->L->base + VAR_11;
    VAR_12[0] = VAR_10.mobj; FUNC_0(VAR_7->L, VAR_13+0, &VAR_10.mobjv);
    VAR_12 += VAR_2;
    VAR_13 += VAR_2;
    VAR_12[1] = VAR_8; FUNC_0(VAR_7->L, VAR_13+1, VAR_9);



    VAR_12[2] = VAR_5; FUNC_6(VAR_13+2);

    FUNC_2(VAR_7, VAR_11, 2);
  } else {
    if (VAR_1 && FUNC_7(VAR_8))
      return FUNC_1(VAR_7, VAR_0, VAR_8);
    FUNC_4(VAR_7, VAR_3);
  }
  return 0;
}
