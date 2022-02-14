
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t startpc; int slot; } ;
typedef TYPE_2__ VarInfo ;
struct TYPE_13__ {TYPE_1__* bcbase; } ;
struct TYPE_12__ {TYPE_4__* fs; } ;
struct TYPE_10__ {int ins; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;
typedef size_t BCPos ;
typedef int BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (TYPE_4__*,size_t) ;
 int FUNC_3 (TYPE_4__*,size_t,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_8(LexState *VAR_3, VarInfo *VAR_4)
{
  FuncState *VAR_5 = VAR_3->fs;
  BCPos VAR_6 = VAR_4->startpc;
  BCIns *VAR_7 = &VAR_5->bcbase[VAR_6].ins;
  FUNC_4(FUNC_1(VAR_4));
  FUNC_4(FUNC_0(*VAR_7) == VAR_0 || FUNC_0(*VAR_7) == VAR_1);
  FUNC_5(VAR_7, VAR_4->slot);
  if (FUNC_0(*VAR_7) == VAR_0) {
    BCPos VAR_8 = FUNC_2(VAR_5, VAR_6);
    if (VAR_8 != VAR_2) FUNC_3(VAR_5, VAR_8, VAR_6);
    FUNC_7(VAR_7, VAR_1);
    FUNC_6(VAR_7, VAR_2);
  }
}
