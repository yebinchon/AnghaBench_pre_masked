
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int info; int aux; } ;
struct TYPE_23__ {TYPE_1__ s; int sval; } ;
struct TYPE_27__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_26__ {int freereg; int pc; TYPE_3__* bcbase; } ;
struct TYPE_25__ {scalar_t__ linenumber; char tok; scalar_t__ lastline; int tokval; TYPE_5__* fs; } ;
struct TYPE_24__ {scalar_t__ line; } ;
typedef TYPE_4__ LexState ;
typedef TYPE_5__ FuncState ;
typedef TYPE_6__ ExpDesc ;
typedef int BCReg ;
typedef scalar_t__ BCLine ;
typedef int BCIns ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,char,char,scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(LexState *VAR_10, ExpDesc *VAR_11)
{
  FuncState *VAR_12 = VAR_10->fs;
  ExpDesc VAR_13;
  BCIns VAR_14;
  BCReg VAR_15;
  BCLine VAR_16 = VAR_10->linenumber;
  if (VAR_10->tok == '(') {

    if (VAR_16 != VAR_10->lastline)
      FUNC_3(VAR_10, VAR_2);

    FUNC_9(VAR_10);
    if (VAR_10->tok == ')') {
      VAR_13.k = VAR_9;
    } else {
      FUNC_5(VAR_10, &VAR_13);
      if (VAR_13.k == VAR_6)
 FUNC_11(FUNC_2(VAR_12, &VAR_13), 0);
    }
    FUNC_8(VAR_10, ')', '(', VAR_16);
  } else if (VAR_10->tok == '{') {
    FUNC_6(VAR_10, &VAR_13);
  } else if (VAR_10->tok == VAR_5) {
    FUNC_4(&VAR_13, VAR_7, 0);
    VAR_13.u.sval = FUNC_12(&VAR_10->tokval);
    FUNC_9(VAR_10);
  } else {
    FUNC_3(VAR_10, VAR_3);
    return;
  }
  FUNC_10(VAR_11->k == VAR_8);
  VAR_15 = VAR_11->u.s.info;
  if (VAR_13.k == VAR_6) {
    VAR_14 = FUNC_0(VAR_1, VAR_15, 2, VAR_13.u.s.aux - VAR_15 - 1 - VAR_4);
  } else {
    if (VAR_13.k != VAR_9)
      FUNC_7(VAR_12, &VAR_13);
    VAR_14 = FUNC_0(VAR_0, VAR_15, 2, VAR_12->freereg - VAR_15 - VAR_4);
  }
  FUNC_4(VAR_11, VAR_6, FUNC_1(VAR_12, VAR_14));
  VAR_11->u.s.aux = VAR_15;
  VAR_12->bcbase[VAR_12->pc - 1].line = VAR_16;
  VAR_12->freereg = VAR_15+1;
}
