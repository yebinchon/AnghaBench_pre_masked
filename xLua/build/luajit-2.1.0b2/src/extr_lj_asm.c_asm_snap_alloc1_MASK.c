
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ snapref; scalar_t__ curins; int freeset; } ;
struct TYPE_16__ {scalar_t__ r; scalar_t__ o; scalar_t__ op2; scalar_t__ op1; int s; int t; } ;
typedef int RegSet ;
typedef int Reg ;
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
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_13(ASMState *VAR_17, IRRef VAR_18)
{
  IRIns *VAR_19 = FUNC_0(VAR_18);
  if (!FUNC_5(VAR_18) && (!(FUNC_11(VAR_19) || VAR_19->r == VAR_14))) {
    if (VAR_19->r == VAR_13) {
      VAR_19->r = VAR_14;







      {
 IRIns *VAR_20;
 FUNC_8(VAR_19->o == VAR_9 || VAR_19->o == VAR_8 || VAR_19->o == VAR_2);
 for (VAR_20 = FUNC_0(VAR_17->snapref-1); VAR_20 > VAR_19; VAR_20--)
   if (VAR_20->r == VAR_13 && FUNC_3(VAR_17, VAR_19, VAR_20)) {
     FUNC_8(VAR_20->o == VAR_1 || VAR_20->o == VAR_7 ||
         VAR_20->o == VAR_5 || VAR_20->o == VAR_10);
     FUNC_13(VAR_17, VAR_20->op2);
     if (VAR_11 && (VAR_20+1)->o == VAR_6)
       FUNC_13(VAR_17, (VAR_20+1)->op2);
   }
      }
    } else {
      RegSet VAR_21;
      if (VAR_19->o == VAR_4 && VAR_19->op2 == VAR_0) {
 IRIns *VAR_22;
 for (VAR_22 = FUNC_0(VAR_17->curins); VAR_22 > VAR_19; VAR_22--)
   if ((VAR_22->op1 == VAR_18 || VAR_22->op2 == VAR_18) &&
       !(VAR_22->r == VAR_13 || VAR_22->r == VAR_14))
     goto nosink;
 FUNC_13(VAR_17, VAR_19->op1);
 return;
      }
    nosink:
      VAR_21 = (!VAR_12 && FUNC_6(VAR_19->t)) ? VAR_15 : VAR_16;
      if ((VAR_17->freeset & VAR_21) ||
        (VAR_21 == VAR_15 && FUNC_2(VAR_17))) {

 Reg VAR_23 = FUNC_9(VAR_17, VAR_18, VAR_21);
 if (!FUNC_7(VAR_19->t))
   FUNC_12(VAR_17, VAR_23);
 FUNC_4(VAR_17);
 FUNC_1((VAR_17, "snapreg   $f $r", VAR_18, VAR_19->r));
      } else {
 FUNC_10(VAR_17, VAR_19);
 FUNC_1((VAR_17, "snapspill $f $s", VAR_18, VAR_19->s));
      }
    }
  }
}
