
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ins; } ;
struct TYPE_4__ {TYPE_2__* bcbase; } ;
typedef TYPE_1__ FuncState ;
typedef scalar_t__ BCReg ;
typedef int BCPos ;
typedef scalar_t__ BCOp ;
typedef TYPE_2__ BCInsLine ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(FuncState *VAR_5, BCPos VAR_6, BCReg VAR_7)
{
  BCInsLine *VAR_8 = &VAR_5->bcbase[VAR_6 >= 1 ? VAR_6-1 : VAR_6];
  BCOp VAR_9 = FUNC_3(VAR_8->ins);
  if (VAR_9 == VAR_2 || VAR_9 == VAR_0) {
    if (VAR_7 != VAR_4 && VAR_7 != FUNC_2(VAR_8->ins)) {
      FUNC_4(&VAR_8->ins, VAR_7);
    } else {
      FUNC_5(&VAR_8->ins, VAR_9+(VAR_1-VAR_2));
      FUNC_4(&VAR_8->ins, 0);
    }
  } else if (FUNC_1(VAR_8->ins) == VAR_4) {
    if (VAR_7 == VAR_4) {
      VAR_8->ins = FUNC_0(VAR_3, FUNC_1(VAR_5->bcbase[VAR_6].ins), 0);
    } else {
      FUNC_4(&VAR_8->ins, VAR_7);
      if (VAR_7 >= FUNC_1(VAR_8[1].ins))
 FUNC_4(&VAR_8[1].ins, VAR_7+1);
    }
  } else {
    return 0;
  }
  return 1;
}
