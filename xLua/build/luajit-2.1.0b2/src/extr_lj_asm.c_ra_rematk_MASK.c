
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int u64; } ;
struct TYPE_17__ {int freeset; } ;
struct TYPE_16__ {scalar_t__ o; int i; int t; int r; int s; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 TYPE_8__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int VAR_14 ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static Reg FUNC_20(ASMState *VAR_15, IRRef VAR_16)
{
  IRIns *VAR_17;
  Reg VAR_18;
  if (FUNC_14(VAR_16)) {
    VAR_18 = FUNC_16(VAR_16);
    FUNC_10(!FUNC_19(VAR_15->freeset, VAR_18));
    FUNC_11(VAR_15, VAR_18);
    FUNC_17(VAR_15, VAR_18);
    FUNC_4(VAR_15, VAR_18, FUNC_15(VAR_15, VAR_16));
    return VAR_18;
  }
  VAR_17 = FUNC_0(VAR_16);
  VAR_18 = VAR_17->r;
  FUNC_10(FUNC_12(VAR_18) && !FUNC_13(VAR_17->s));
  FUNC_11(VAR_15, VAR_18);
  FUNC_17(VAR_15, VAR_18);
  VAR_17->r = VAR_12;
  FUNC_1((VAR_15, "remat     $i $r", VAR_17, VAR_18));

  if (VAR_17->o == VAR_7) {
    FUNC_5(VAR_15, VAR_18, FUNC_8(VAR_17));
  } else

  if (FUNC_2(VAR_10) && VAR_17->o == VAR_1) {
    FUNC_18(VAR_17->r, VAR_11);
    FUNC_3(VAR_15, VAR_18, VAR_14);
  } else if (FUNC_2(VAR_0) && VAR_17->o == VAR_8) {
    FUNC_10(FUNC_9(VAR_17->t));
    FUNC_3(VAR_15, VAR_18, VAR_13);




  } else {
    FUNC_10(VAR_17->o == VAR_3 || VAR_17->o == VAR_2 ||
        VAR_17->o == VAR_9 || VAR_17->o == VAR_5 || VAR_17->o == VAR_6);
    FUNC_4(VAR_15, VAR_18, VAR_17->i);
  }
  return VAR_18;
}
