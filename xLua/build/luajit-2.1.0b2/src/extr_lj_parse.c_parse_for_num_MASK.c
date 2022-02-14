
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {size_t pc; TYPE_1__* bcbase; int freereg; } ;
struct TYPE_19__ {TYPE_3__* fs; } ;
struct TYPE_18__ {int line; } ;
typedef TYPE_2__ LexState ;
typedef int GCstr ;
typedef TYPE_3__ FuncState ;
typedef int FuncScope ;
typedef int BCReg ;
typedef size_t BCPos ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int) ;
 size_t FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,size_t,size_t) ;
 int FUNC_7 (TYPE_2__*,char) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int ,int *) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_13(LexState *VAR_12, GCstr *VAR_13, BCLine VAR_14)
{
  FuncState *VAR_15 = VAR_12->fs;
  BCReg VAR_16 = VAR_15->freereg;
  FuncScope VAR_17;
  BCPos VAR_18, VAR_19;

  FUNC_12(VAR_12, VAR_4, VAR_9);
  FUNC_12(VAR_12, VAR_6, VAR_11);
  FUNC_12(VAR_12, VAR_5, VAR_10);

  FUNC_11(VAR_12, VAR_3, VAR_13);
  FUNC_7(VAR_12, '=');
  FUNC_3(VAR_12);
  FUNC_7(VAR_12, ',');
  FUNC_3(VAR_12);
  if (FUNC_8(VAR_12, ',')) {
    FUNC_3(VAR_12);
  } else {
    FUNC_0(VAR_15, VAR_2, VAR_15->freereg, 1);
    FUNC_2(VAR_15, 1);
  }
  FUNC_10(VAR_12, 3);
  FUNC_7(VAR_12, VAR_8);
  VAR_18 = FUNC_1(VAR_15, VAR_0, VAR_16, VAR_7);
  FUNC_4(VAR_15, &VAR_17, 0);
  FUNC_10(VAR_12, 1);
  FUNC_2(VAR_15, 1);
  FUNC_9(VAR_12);
  FUNC_5(VAR_15);

  VAR_19 = FUNC_1(VAR_15, VAR_1, VAR_16, VAR_7);
  VAR_15->bcbase[VAR_19].line = VAR_14;
  FUNC_6(VAR_15, VAR_19, VAR_18+1);
  FUNC_6(VAR_15, VAR_18, VAR_15->pc);
}
