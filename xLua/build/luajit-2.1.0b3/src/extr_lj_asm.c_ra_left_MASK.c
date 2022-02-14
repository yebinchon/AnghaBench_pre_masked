
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int freeset; scalar_t__* phireg; } ;
struct TYPE_16__ {size_t r; scalar_t__ o; int t; int i; } ;
typedef size_t Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;
 int FUNC_2 (TYPE_2__*,size_t,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,size_t,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (int) ;
 size_t FUNC_9 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_12 (size_t) ;
 int FUNC_13 (TYPE_2__*,size_t) ;
 int FUNC_14 (TYPE_2__*,size_t,size_t) ;
 int FUNC_15 (size_t,size_t) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(ASMState *VAR_11, Reg VAR_12, IRRef VAR_13)
{
  IRIns *VAR_14 = FUNC_0(VAR_13);
  Reg VAR_15 = VAR_14->r;
  if (FUNC_12(VAR_15)) {
    if (FUNC_5(VAR_13)) {
      if (VAR_14->o == VAR_5) {

 if (FUNC_16(FUNC_4(VAR_14)) || !(VAR_11->freeset & VAR_9)) {
   FUNC_2(VAR_11, VAR_12, VAR_14);
   return;
 }
      } else if (VAR_14->o != VAR_6) {
 FUNC_8(VAR_14->o == VAR_1 || VAR_14->o == VAR_0 ||
     VAR_14->o == VAR_7 || VAR_14->o == VAR_3 || VAR_14->o == VAR_4);
 FUNC_1(VAR_11, VAR_12, VAR_14->i);
 return;
      }
    }
    if (!FUNC_10(VAR_15) && !FUNC_7(VAR_11, VAR_13))
      FUNC_15(VAR_14->r, VAR_12);
    VAR_15 = FUNC_9(VAR_11, VAR_13, VAR_12 < VAR_8 ? VAR_10 : VAR_9);
  }
  FUNC_13(VAR_11, VAR_15);

  if (VAR_12 != VAR_15) {

    if (FUNC_6(VAR_14->t) && VAR_11->phireg[VAR_12] == VAR_13) {
      FUNC_11(VAR_11, VAR_15);
      FUNC_14(VAR_11, VAR_15, VAR_12);
    } else {
      FUNC_3(VAR_11, VAR_14, VAR_12, VAR_15);
    }
  }
}
