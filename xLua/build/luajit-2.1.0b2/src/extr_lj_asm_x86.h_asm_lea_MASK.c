
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_13__ {size_t base; size_t idx; int ofs; int scale; } ;
struct TYPE_15__ {scalar_t__* phireg; TYPE_1__ mrm; } ;
struct TYPE_14__ {scalar_t__ op1; scalar_t__ op2; size_t r; scalar_t__ o; int i; int t; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,size_t,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 size_t FUNC_5 (TYPE_3__*,scalar_t__,int ) ;
 size_t FUNC_6 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_3__*,size_t) ;
 int FUNC_9 (int ,size_t) ;

__attribute__((used)) static int FUNC_10(ASMState *VAR_6, IRIns *VAR_7)
{
  IRIns *VAR_8 = FUNC_0(VAR_7->op1);
  IRIns *VAR_9 = FUNC_0(VAR_7->op2);
  RegSet VAR_10 = VAR_3;
  Reg VAR_11;
  VAR_6->mrm.base = VAR_6->mrm.idx = VAR_2;
  VAR_6->mrm.scale = VAR_4;
  VAR_6->mrm.ofs = 0;
  if (FUNC_7(VAR_8->r)) {
    FUNC_9(VAR_10, VAR_8->r);
    FUNC_8(VAR_6, VAR_8->r);
    VAR_6->mrm.base = VAR_8->r;
    if (FUNC_2(VAR_7->op2) || FUNC_7(VAR_9->r)) {

      if (FUNC_7(VAR_7->r) &&
   ((FUNC_3(VAR_8->t) && VAR_6->phireg[VAR_7->r] == VAR_7->op1) ||
    (FUNC_3(VAR_9->t) && VAR_6->phireg[VAR_7->r] == VAR_7->op2)))
 return 0;
      if (FUNC_2(VAR_7->op2)) {
 VAR_6->mrm.ofs = VAR_9->i;
      } else {
 FUNC_9(VAR_10, VAR_9->r);
 FUNC_8(VAR_6, VAR_9->r);
 VAR_6->mrm.idx = VAR_9->r;
      }
    } else if (VAR_9->o == VAR_0 && FUNC_4(VAR_6, VAR_7->op2) &&
        FUNC_2(VAR_9->op2)) {
      Reg VAR_12 = FUNC_5(VAR_6, VAR_9->op1, VAR_10);
      FUNC_9(VAR_10, VAR_12);
      VAR_6->mrm.idx = (uint8_t)VAR_12;
      VAR_6->mrm.ofs = FUNC_0(VAR_9->op2)->i;
    } else {
      return 0;
    }
  } else if (VAR_7->op1 != VAR_7->op2 && VAR_8->o == VAR_0 && FUNC_4(VAR_6, VAR_7->op1) &&
      (FUNC_2(VAR_7->op2) || FUNC_2(VAR_8->op2))) {
    Reg VAR_13, VAR_14 = FUNC_5(VAR_6, VAR_8->op1, VAR_10);
    FUNC_9(VAR_10, VAR_14);
    VAR_6->mrm.base = (uint8_t)VAR_14;
    if (FUNC_2(VAR_7->op2)) {
      VAR_6->mrm.ofs = VAR_9->i;
      VAR_13 = FUNC_5(VAR_6, VAR_8->op2, VAR_10);
    } else {
      VAR_6->mrm.ofs = FUNC_0(VAR_8->op2)->i;
      VAR_13 = FUNC_5(VAR_6, VAR_7->op2, VAR_10);
    }
    FUNC_9(VAR_10, VAR_13);
    VAR_6->mrm.idx = (uint8_t)VAR_13;
  } else {
    return 0;
  }
  VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_10);
  FUNC_1(VAR_6, VAR_5, VAR_11, VAR_1);
  return 1;
}
