
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int int32_t ;
struct TYPE_14__ {int ofs; void* base; void* idx; void* scale; } ;
struct TYPE_16__ {TYPE_1__ mrm; } ;
struct TYPE_15__ {scalar_t__ o; int i; scalar_t__ op2; scalar_t__ op1; int r; } ;
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
 void* VAR_8 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (intptr_t) ;
 intptr_t FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_11(ASMState *VAR_9, IRRef VAR_10, RegSet VAR_11)
{
  IRIns *VAR_12 = FUNC_0(VAR_10);
  VAR_9->mrm.idx = VAR_6;
  if (VAR_12->o == VAR_3 || VAR_12->o == VAR_2) {
    VAR_9->mrm.ofs = VAR_12->i;
    VAR_9->mrm.base = VAR_6;
  } else if (VAR_12->o == VAR_4) {
    FUNC_1(VAR_9, VAR_12, VAR_11);

  } else {
    VAR_9->mrm.ofs = 0;
    if (FUNC_3(VAR_9, VAR_12) && VAR_12->o == VAR_0 && FUNC_9(VAR_12->r)) {

      IRIns *VAR_13;
      IRRef VAR_14;
      Reg VAR_15;
      if (FUNC_2(VAR_9, VAR_12->op2, &VAR_9->mrm.ofs)) {
 VAR_10 = VAR_12->op1;
 VAR_12 = FUNC_0(VAR_10);
 if (!(VAR_12->o == VAR_0 && FUNC_3(VAR_9, VAR_12) && FUNC_9(VAR_12->r)))
   goto noadd;
      }
      VAR_9->mrm.scale = VAR_7;
      VAR_14 = VAR_12->op1;
      VAR_10 = VAR_12->op2;
      VAR_13 = FUNC_0(VAR_14);
      if (!(VAR_13->o == VAR_1 || VAR_13->o == VAR_0)) {
 VAR_14 = VAR_12->op2;
 VAR_10 = VAR_12->op1;
 VAR_13 = FUNC_0(VAR_14);
      }
      if (FUNC_3(VAR_9, VAR_13) && FUNC_9(VAR_13->r)) {
 if (VAR_13->o == VAR_1 && FUNC_7(VAR_13->op2) && FUNC_0(VAR_13->op2)->i <= 3) {

   VAR_14 = VAR_13->op1;
   VAR_9->mrm.scale = (uint8_t)(FUNC_0(VAR_13->op2)->i << 6);
 } else if (VAR_13->o == VAR_0 && VAR_13->op1 == VAR_13->op2) {

   VAR_14 = VAR_13->op1;
   VAR_9->mrm.scale = VAR_8;
 }
      }
      VAR_15 = FUNC_8(VAR_9, VAR_14, VAR_11);
      FUNC_10(VAR_11, VAR_15);
      VAR_9->mrm.idx = (uint8_t)VAR_15;
    }
  noadd:
    VAR_9->mrm.base = (uint8_t)FUNC_8(VAR_9, VAR_10, VAR_11);
  }
}
