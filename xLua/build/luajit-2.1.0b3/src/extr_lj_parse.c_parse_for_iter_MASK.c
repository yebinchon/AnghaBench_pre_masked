
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {int freereg; int pc; TYPE_1__* bcbase; } ;
struct TYPE_24__ {void* linenumber; TYPE_3__* fs; } ;
struct TYPE_23__ {void* line; } ;
typedef TYPE_2__ LexState ;
typedef int GCstr ;
typedef TYPE_3__ FuncState ;
typedef int FuncScope ;
typedef int ExpDesc ;
typedef int BCReg ;
typedef int BCPos ;
typedef void* BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,int,int ,int *) ;
 int FUNC_1 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int,int ) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,char) ;
 int * FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int ,int *) ;
 int FUNC_16 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_17(LexState *VAR_12, GCstr *VAR_13)
{
  FuncState *VAR_14 = VAR_12->fs;
  ExpDesc VAR_15;
  BCReg VAR_16 = 0;
  BCLine VAR_17;
  BCReg VAR_18 = VAR_14->freereg + 3;
  BCPos VAR_19, VAR_20, VAR_21 = VAR_14->pc;
  FuncScope VAR_22;
  int VAR_23;

  FUNC_16(VAR_12, VAR_16++, VAR_10);
  FUNC_16(VAR_12, VAR_16++, VAR_11);
  FUNC_16(VAR_12, VAR_16++, VAR_9);

  FUNC_15(VAR_12, VAR_16++, VAR_13);
  while (FUNC_10(VAR_12, ','))
    FUNC_15(VAR_12, VAR_16++, FUNC_11(VAR_12));
  FUNC_9(VAR_12, VAR_8);
  VAR_17 = VAR_12->linenumber;
  FUNC_0(VAR_12, 3, FUNC_5(VAR_12, &VAR_15), &VAR_15);

  FUNC_3(VAR_14, 3+VAR_5);
  VAR_23 = (VAR_16 <= 5 && FUNC_13(VAR_12, VAR_14, VAR_21));
  FUNC_14(VAR_12, 3);
  FUNC_9(VAR_12, VAR_7);
  VAR_19 = FUNC_2(VAR_14, VAR_23 ? VAR_0 : VAR_4, VAR_18, VAR_6);
  FUNC_6(VAR_14, &VAR_22, 0);
  FUNC_14(VAR_12, VAR_16-3);
  FUNC_4(VAR_14, VAR_16-3);
  FUNC_12(VAR_12);
  FUNC_7(VAR_14);

  FUNC_8(VAR_14, VAR_19, VAR_14->pc);
  FUNC_1(VAR_14, VAR_23 ? VAR_3 : VAR_1, VAR_18, VAR_16-3+1, 2+1);
  VAR_20 = FUNC_2(VAR_14, VAR_2, VAR_18, VAR_6);
  VAR_14->bcbase[VAR_20-1].line = VAR_17;
  VAR_14->bcbase[VAR_20].line = VAR_17;
  FUNC_8(VAR_14, VAR_20, VAR_19+1);
}
