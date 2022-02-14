
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_14__ {scalar_t__ k; } ;
struct TYPE_13__ {scalar_t__ freereg; } ;
struct TYPE_12__ {TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ ExpDesc ;
typedef scalar_t__ BCReg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(LexState *VAR_2, BCReg VAR_3, BCReg VAR_4, ExpDesc *VAR_5)
{
  FuncState *VAR_6 = VAR_2->fs;
  int32_t VAR_7 = (int32_t)VAR_3 - (int32_t)VAR_4;
  if (VAR_5->k == VAR_0) {
    VAR_7++;
    if (VAR_7 < 0) VAR_7 = 0;
    FUNC_4(FUNC_1(VAR_6, VAR_5), VAR_7+1);
    if (VAR_7 > 1) FUNC_2(VAR_6, (BCReg)VAR_7-1);
  } else {
    if (VAR_5->k != VAR_1)
      FUNC_3(VAR_6, VAR_5);
    if (VAR_7 > 0) {
      BCReg VAR_8 = VAR_6->freereg;
      FUNC_2(VAR_6, (BCReg)VAR_7);
      FUNC_0(VAR_6, VAR_8, (BCReg)VAR_7);
    }
  }
}
