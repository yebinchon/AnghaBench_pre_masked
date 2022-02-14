
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {scalar_t__ o; int r; int t; int s; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ CCallInfo ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(ASMState *VAR_20, IRIns *VAR_21, const CCallInfo *VAR_22)
{
  RegSet VAR_23 = VAR_11;
  int VAR_24 = (VAR_3 && (VAR_21+1)->o == VAR_2 && !FUNC_5((VAR_21+1)->t));
  if ((VAR_22->flags & VAR_1))
    VAR_23 &= ~VAR_10;
  if (FUNC_13(VAR_21->r))
    FUNC_16(VAR_23, VAR_21->r);
  if (VAR_24 && FUNC_13((VAR_21+1)->r))
    FUNC_16(VAR_23, (VAR_21+1)->r);
  FUNC_11(VAR_20, VAR_23);
  if (FUNC_15(VAR_21)) {
    if (FUNC_4(VAR_21->t)) {
      int32_t VAR_25 = FUNC_17(VAR_21->s);
      Reg VAR_26 = VAR_21->r;
      if (FUNC_13(VAR_26)) {
 FUNC_12(VAR_20, VAR_26);
 FUNC_14(VAR_20, VAR_26);
 FUNC_1(VAR_20, FUNC_6(VAR_21->t) ? VAR_16 : VAR_17,
    VAR_26, VAR_5, VAR_25);
      }
      if ((VAR_22->flags & VAR_0)) {
 FUNC_0(VAR_20, VAR_9, VAR_5, VAR_25);
 FUNC_0(VAR_20, VAR_8, VAR_5, VAR_25+4);
      } else {
 FUNC_1(VAR_20, FUNC_6(VAR_21->t) ? VAR_14 : VAR_13,
    FUNC_6(VAR_21->t) ? VAR_19 : VAR_18, VAR_5, VAR_25);
      }





    } else {
      FUNC_8(!FUNC_7(VAR_21->t));
      FUNC_10(VAR_20, VAR_21, VAR_7);
    }
  } else if (VAR_3 && FUNC_4(VAR_21->t) && !(VAR_22->flags & VAR_0)) {
    FUNC_3(VAR_20, VAR_12);
  }
}
