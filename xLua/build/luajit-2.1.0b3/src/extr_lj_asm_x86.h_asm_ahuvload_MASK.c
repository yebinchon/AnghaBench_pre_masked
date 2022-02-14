
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int ofs; } ;
struct TYPE_21__ {int flags; TYPE_1__ mrm; } ;
struct TYPE_20__ {int t; int op1; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_3__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (int ,int) ;

__attribute__((used)) static void FUNC_23(ASMState *VAR_24, IRIns *VAR_25)
{



  FUNC_17(FUNC_13(VAR_25->t) || FUNC_14(VAR_25->t) || FUNC_8(VAR_25->t) ||
      (VAR_5 && FUNC_9(VAR_25->t)));
  if (FUNC_21(VAR_25)) {
    RegSet VAR_26 = FUNC_13(VAR_25->t) ? VAR_11 : VAR_12;
    Reg VAR_27 = FUNC_18(VAR_24, VAR_25, VAR_26);
    FUNC_0(VAR_24, VAR_25->op1, VAR_12);
    FUNC_4(VAR_24, VAR_27 < VAR_8 ? VAR_17 : VAR_18, VAR_27, VAR_9);
  } else {
    RegSet VAR_28 = VAR_12;






    FUNC_0(VAR_24, VAR_25->op1, VAR_28);
  }

  VAR_24->mrm.ofs += 4;
  FUNC_1(VAR_24, FUNC_13(VAR_25->t) ? VAR_0 : VAR_1);
  if (VAR_4 && FUNC_16(VAR_25->t) >= VAR_2) {
    FUNC_17(FUNC_10(VAR_25->t) || FUNC_13(VAR_25->t));



    FUNC_7(VAR_24, VAR_6);

    FUNC_4(VAR_24, VAR_15, VAR_19, VAR_9);
  } else {
    FUNC_3(VAR_24, FUNC_15(VAR_25->t));
    FUNC_4(VAR_24, VAR_16, VAR_19, VAR_9);

  }
}
