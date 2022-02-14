
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_9__ {scalar_t__ base; scalar_t__ idx; int ofs; int scale; } ;
struct TYPE_11__ {TYPE_1__ mrm; } ;
struct TYPE_10__ {scalar_t__ o; int op2; int op1; scalar_t__ i; } ;
typedef int RegSet ;
typedef scalar_t__ Reg ;
typedef TYPE_2__ IRIns ;
typedef int GCstr ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_5, IRIns *VAR_6, RegSet VAR_7)
{
  IRIns *VAR_8;
  FUNC_2(VAR_6->o == VAR_1);
  VAR_5->mrm.base = VAR_5->mrm.idx = VAR_3;
  VAR_5->mrm.scale = VAR_4;
  VAR_5->mrm.ofs = sizeof(GCstr);
  if (FUNC_1(VAR_6->op1)) {
    VAR_5->mrm.ofs += FUNC_0(VAR_6->op1)->i;
  } else {
    Reg VAR_9 = FUNC_4(VAR_5, VAR_6->op1, VAR_7);
    FUNC_5(VAR_7, VAR_9);
    VAR_5->mrm.base = (uint8_t)VAR_9;
  }
  VAR_8 = FUNC_0(VAR_6->op2);
  if (FUNC_1(VAR_6->op2)) {
    VAR_5->mrm.ofs += VAR_8->i;
  } else {
    Reg VAR_10;

    if (!VAR_2 &&
 FUNC_3(VAR_5, VAR_6->op2) && VAR_8->o == VAR_0 && FUNC_1(VAR_8->op2)) {
      VAR_5->mrm.ofs += FUNC_0(VAR_8->op2)->i;
      VAR_10 = FUNC_4(VAR_5, VAR_8->op1, VAR_7);
    } else {
      VAR_10 = FUNC_4(VAR_5, VAR_6->op2, VAR_7);
    }
    if (VAR_5->mrm.base == VAR_3)
      VAR_5->mrm.base = (uint8_t)VAR_10;
    else
      VAR_5->mrm.idx = (uint8_t)VAR_10;
  }
}
