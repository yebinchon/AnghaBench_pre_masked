
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_10__ {int ofs; void* idx; int scale; void* base; } ;
struct TYPE_12__ {TYPE_1__ mrm; } ;
struct TYPE_11__ {scalar_t__ o; int i; int op2; int op1; int r; } ;
typedef int RegSet ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static void FUNC_8(ASMState *VAR_5, IRIns *VAR_6, RegSet VAR_7)
{
  IRIns *VAR_8;
  FUNC_3(VAR_6->o == VAR_1);
  VAR_5->mrm.base = (uint8_t)FUNC_5(VAR_5, FUNC_1(VAR_5, VAR_6->op1), VAR_7);
  VAR_8 = FUNC_0(VAR_6->op2);
  if (FUNC_2(VAR_6->op2)) {
    VAR_5->mrm.ofs += 8*VAR_8->i;
    VAR_5->mrm.idx = VAR_3;
  } else {
    FUNC_7(VAR_7, VAR_5->mrm.base);
    VAR_5->mrm.scale = VAR_4;



    if (!VAR_2 &&
 FUNC_4(VAR_5, VAR_6->op2) && FUNC_6(VAR_8->r) &&
 VAR_8->o == VAR_0 && FUNC_2(VAR_8->op2)) {
      VAR_5->mrm.ofs += 8*FUNC_0(VAR_8->op2)->i;
      VAR_5->mrm.idx = (uint8_t)FUNC_5(VAR_5, VAR_8->op1, VAR_7);
    } else {
      VAR_5->mrm.idx = (uint8_t)FUNC_5(VAR_5, VAR_6->op2, VAR_7);
    }
  }
}
