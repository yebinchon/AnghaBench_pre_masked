
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int x86Op ;
typedef int int32_t ;
typedef int cTValue ;
struct TYPE_25__ {TYPE_1__* J; } ;
struct TYPE_24__ {int op2; int t; int op1; } ;
struct TYPE_23__ {int r; } ;
struct TYPE_22__ {int * k32; int * k64; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int MCLabel ;
typedef scalar_t__ IRType ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_21__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int,int) ;
 int FUNC_8 (TYPE_3__*,int ,int,int *) ;
 int FUNC_9 (TYPE_3__*,int ,int,int) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (TYPE_3__*,int ,int ) ;
 int FUNC_23 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_24 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (TYPE_3__*,int ) ;
 int FUNC_27 (int ,int) ;
 int FUNC_28 (int ,int) ;

__attribute__((used)) static void FUNC_29(ASMState *VAR_45, IRIns *VAR_46)
{
  IRType VAR_47 = (IRType)(VAR_46->op2 & VAR_3);
  int VAR_48 = (VAR_47 == VAR_6 || VAR_47 == VAR_12 || (VAR_15 && VAR_47 == VAR_9));
  int VAR_49 = (VAR_47 == VAR_8 || VAR_47 == VAR_4);
  IRRef VAR_50 = VAR_46->op1;
  FUNC_21(FUNC_20(VAR_46->t) != VAR_47);
  FUNC_21(!(VAR_14 && (FUNC_16(VAR_46->t) || VAR_48)));
  if (FUNC_13(VAR_46->t)) {
    Reg VAR_51 = FUNC_23(VAR_45, VAR_46, VAR_22);
    if (VAR_49) {
      Reg VAR_52 = FUNC_2(VAR_45, VAR_50, VAR_22);
      FUNC_7(VAR_45, VAR_47 == VAR_8 ? VAR_27 : VAR_30, VAR_51, VAR_52);
      if (VAR_52 == VAR_51) return;
    } else if (VAR_14 && VAR_47 == VAR_11) {

      cTValue *VAR_53 = &VAR_45->J->k64[VAR_19];
      Reg VAR_54 = FUNC_26(VAR_45, FUNC_27(VAR_22, VAR_51));
      if (FUNC_12(VAR_46->t))
 FUNC_9(VAR_45, VAR_27, VAR_51, VAR_51);
      FUNC_9(VAR_45, VAR_41, VAR_51, VAR_54);
      FUNC_9(VAR_45, VAR_43, VAR_51, VAR_54);
      FUNC_8(VAR_45, VAR_35, VAR_54, VAR_53);
      FUNC_7(VAR_45, VAR_34, VAR_51, FUNC_2(VAR_45, VAR_50, VAR_23));
      return;
    } else {
      Reg VAR_55 = (VAR_15 && (VAR_47 == VAR_11 || VAR_47 == VAR_12)) ?
   FUNC_22(VAR_45, VAR_50, VAR_23) :
   FUNC_3(VAR_45, VAR_50, VAR_23, VAR_48);
      if (VAR_15 && VAR_47 == VAR_12) {
 MCLabel VAR_56 = FUNC_6(VAR_45);
 cTValue *VAR_57 = &VAR_45->J->k64[VAR_17];
 FUNC_8(VAR_45, VAR_25, VAR_51, VAR_57);
 FUNC_10(VAR_45, VAR_0, VAR_56);
 FUNC_9(VAR_45, VAR_42, VAR_55|VAR_20, VAR_55);
      }
      FUNC_7(VAR_45, FUNC_17(VAR_46->t) ? VAR_28 : VAR_29,
        VAR_51|((VAR_15 && (VAR_48 || VAR_47 == VAR_11)) ? VAR_20 : 0), VAR_55);
    }
    FUNC_9(VAR_45, VAR_43, VAR_51, VAR_51);
  } else if (VAR_49) {
    if (FUNC_14(VAR_46->t)) {

      FUNC_21(FUNC_15(VAR_46->t) && VAR_47 == VAR_8);
      FUNC_4(VAR_45, VAR_46, FUNC_22(VAR_45, VAR_50, VAR_22));
    } else {
      Reg VAR_58 = FUNC_23(VAR_45, VAR_46, VAR_23);
      x86Op VAR_59 = VAR_47 == VAR_8 ? VAR_31 : VAR_32;
      if (VAR_15 ? FUNC_19(VAR_46->t) : FUNC_18(VAR_46->t)) {


 Reg VAR_60 = FUNC_25(FUNC_0(VAR_50)->r) ? FUNC_22(VAR_45, VAR_50, VAR_22) :
       FUNC_26(VAR_45, VAR_22);
 MCLabel VAR_61 = FUNC_6(VAR_45);
 if (VAR_14)
   FUNC_5(VAR_45, FUNC_1(VAR_44), VAR_58, (int32_t)0x80000000);
 FUNC_9(VAR_45, VAR_59, VAR_58|VAR_20, VAR_60);
 if (VAR_47 == VAR_8)
   FUNC_8(VAR_45, VAR_25, VAR_60, &VAR_45->J->k64[VAR_18]);
 else
   FUNC_8(VAR_45, VAR_26, VAR_60, &VAR_45->J->k32[VAR_16]);
 FUNC_10(VAR_45, VAR_0, VAR_61);
 FUNC_9(VAR_45, VAR_42, VAR_58|VAR_20, VAR_58);
 FUNC_9(VAR_45, VAR_59, VAR_58|VAR_20, VAR_60);
 FUNC_24(VAR_45, VAR_60, VAR_50);
      } else {
 if (VAR_15 && FUNC_18(VAR_46->t))
   FUNC_9(VAR_45, VAR_33, VAR_58, VAR_58);
 FUNC_7(VAR_45, VAR_59,
   VAR_58|((VAR_15 &&
   (FUNC_11(VAR_46->t) || FUNC_18(VAR_46->t))) ? VAR_20 : 0),
   FUNC_2(VAR_45, VAR_50, VAR_22));
      }
    }
  } else if (VAR_47 >= VAR_7 && VAR_47 <= VAR_10) {
    Reg VAR_62, VAR_63 = FUNC_23(VAR_45, VAR_46, VAR_23);
    RegSet VAR_64 = VAR_23;
    x86Op VAR_65;
    FUNC_21(FUNC_15(VAR_46->t) || FUNC_18(VAR_46->t));
    if (VAR_47 == VAR_7) {
      VAR_65 = VAR_36; VAR_64 = VAR_24; VAR_63 |= VAR_1;
    } else if (VAR_47 == VAR_13) {
      VAR_65 = VAR_39; VAR_64 = VAR_24; VAR_63 |= VAR_1;
    } else if (VAR_47 == VAR_5) {
      VAR_65 = VAR_38;
    } else {
      VAR_65 = VAR_40;
    }
    VAR_62 = FUNC_2(VAR_45, VAR_50, VAR_64);

    if (!VAR_15 && VAR_62 != VAR_21 && !FUNC_28(VAR_64, VAR_62)) {
      Reg VAR_66 = FUNC_26(VAR_45, VAR_64);
      FUNC_9(VAR_45, VAR_65, VAR_63, VAR_66);
      FUNC_9(VAR_45, VAR_33, VAR_66, VAR_62);
    } else {
      FUNC_7(VAR_45, VAR_65, VAR_63, VAR_62);
    }
  } else {
    if (VAR_14) {
      Reg VAR_67 = FUNC_23(VAR_45, VAR_46, VAR_23);
      FUNC_24(VAR_45, VAR_67, VAR_50);
    } else if (FUNC_11(VAR_46->t)) {
      Reg VAR_68 = FUNC_23(VAR_45, VAR_46, VAR_23);
      if (VAR_48 || !(VAR_46->op2 & VAR_2)) {

 FUNC_24(VAR_45, VAR_68, VAR_50);
      } else {
 Reg VAR_69 = FUNC_2(VAR_45, VAR_50, VAR_23);
 FUNC_7(VAR_45, VAR_37, VAR_68|VAR_20, VAR_69);
      }
    } else {
      Reg VAR_70 = FUNC_23(VAR_45, VAR_46, VAR_23);
      if (VAR_48) {
 Reg VAR_71 = FUNC_2(VAR_45, VAR_50, VAR_23);



 FUNC_7(VAR_45, VAR_33, VAR_70, VAR_71);
      } else {
 FUNC_24(VAR_45, VAR_70, VAR_50);
      }
    }
  }
}
