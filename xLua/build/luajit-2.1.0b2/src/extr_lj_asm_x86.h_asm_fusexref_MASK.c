
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_12__ {int ofs; void* base; void* idx; void* scale; } ;
struct TYPE_14__ {TYPE_1__ mrm; } ;
struct TYPE_13__ {scalar_t__ o; int i; scalar_t__ op2; scalar_t__ op1; int r; } ;
typedef int RegSet ;
typedef scalar_t__ Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(ASMState *VAR_8, IRRef VAR_9, RegSet VAR_10)
{
  IRIns *VAR_11 = FUNC_0(VAR_9);
  VAR_8->mrm.idx = VAR_5;
  if (VAR_11->o == VAR_3 || VAR_11->o == VAR_2) {
    VAR_8->mrm.ofs = VAR_11->i;
    VAR_8->mrm.base = VAR_5;
  } else if (VAR_11->o == VAR_4) {
    FUNC_1(VAR_8, VAR_11, VAR_10);
  } else {
    VAR_8->mrm.ofs = 0;
    if (FUNC_3(VAR_8, VAR_11) && VAR_11->o == VAR_0 && FUNC_6(VAR_11->r)) {

      IRIns *VAR_12;
      IRRef VAR_13;
      Reg VAR_14;
      if (FUNC_2(VAR_8, VAR_11->op2, &VAR_8->mrm.ofs)) {
 VAR_9 = VAR_11->op1;
 VAR_11 = FUNC_0(VAR_9);
 if (!(VAR_11->o == VAR_0 && FUNC_3(VAR_8, VAR_11) && FUNC_6(VAR_11->r)))
   goto noadd;
      }
      VAR_8->mrm.scale = VAR_6;
      VAR_13 = VAR_11->op1;
      VAR_9 = VAR_11->op2;
      VAR_12 = FUNC_0(VAR_13);
      if (!(VAR_12->o == VAR_1 || VAR_12->o == VAR_0)) {
 VAR_13 = VAR_11->op2;
 VAR_9 = VAR_11->op1;
 VAR_12 = FUNC_0(VAR_13);
      }
      if (FUNC_3(VAR_8, VAR_12) && FUNC_6(VAR_12->r)) {
 if (VAR_12->o == VAR_1 && FUNC_4(VAR_12->op2) && FUNC_0(VAR_12->op2)->i <= 3) {

   VAR_13 = VAR_12->op1;
   VAR_8->mrm.scale = (uint8_t)(FUNC_0(VAR_12->op2)->i << 6);
 } else if (VAR_12->o == VAR_0 && VAR_12->op1 == VAR_12->op2) {

   VAR_13 = VAR_12->op1;
   VAR_8->mrm.scale = VAR_7;
 }
      }
      VAR_14 = FUNC_5(VAR_8, VAR_13, VAR_10);
      FUNC_7(VAR_10, VAR_14);
      VAR_8->mrm.idx = (uint8_t)VAR_14;
    }
  noadd:
    VAR_8->mrm.base = (uint8_t)FUNC_5(VAR_8, VAR_9, VAR_10);
  }
}
