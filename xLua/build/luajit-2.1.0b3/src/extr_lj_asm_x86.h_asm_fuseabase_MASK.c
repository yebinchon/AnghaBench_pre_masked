
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int ofs; } ;
struct TYPE_10__ {TYPE_1__ mrm; } ;
struct TYPE_9__ {scalar_t__ o; scalar_t__ op1; scalar_t__ op2; int i; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;
typedef int GCtab ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__,int ,int) ;

__attribute__((used)) static IRRef FUNC_5(ASMState *VAR_6, IRRef VAR_7)
{
  IRIns *VAR_8 = FUNC_0(VAR_7);
  VAR_6->mrm.ofs = 0;
  if (VAR_8->o == VAR_2) {
    IRIns *VAR_9 = FUNC_0(VAR_8->op1);
    FUNC_2(VAR_8->op2 == VAR_0);

    if (VAR_9->o == VAR_4 && VAR_9->op1 <= VAR_5 &&
 !FUNC_3(VAR_6) && FUNC_4(VAR_6, VAR_8->op1, VAR_3, 1)) {
      VAR_6->mrm.ofs = (int32_t)sizeof(GCtab);
      return VAR_8->op1;
    }
  } else if (VAR_8->o == VAR_1 && FUNC_1(VAR_8->op2)) {

    VAR_6->mrm.ofs = FUNC_0(VAR_8->op2)->i;
    return VAR_8->op1;
  }
  return VAR_7;
}
