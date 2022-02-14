
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int phiset; int freeset; int modset; int * phireg; int * cost; } ;
struct TYPE_12__ {size_t r; int t; int s; } ;
typedef int RegSet ;
typedef size_t Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,size_t,size_t) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,size_t) ;
 size_t FUNC_15 (int) ;
 size_t FUNC_16 (int) ;
 int FUNC_17 (int,size_t) ;
 int FUNC_18 (int,size_t) ;

__attribute__((used)) static void FUNC_19(ASMState *VAR_5)
{
  RegSet VAR_6;


  for (;;) {
    RegSet VAR_7 = VAR_2;
    RegSet VAR_8 = VAR_2;
    RegSet VAR_9 = VAR_5->phiset;
    while (VAR_9) {
      Reg VAR_10 = FUNC_15(VAR_9);
      IRIns *VAR_11 = FUNC_0(VAR_5->phireg[VAR_10]);
      Reg VAR_12 = VAR_11->r;
      if (VAR_10 != VAR_12) {
 if (!FUNC_18(VAR_5->freeset, VAR_10)) {
   IRRef VAR_13 = FUNC_13(VAR_5->cost[VAR_10]);

   if (!FUNC_9(VAR_13) && FUNC_5(FUNC_0(VAR_13)->t)) {
     FUNC_17(VAR_7, VAR_10);
     if (FUNC_7(VAR_12))
       FUNC_17(VAR_8, VAR_12);
     VAR_12 = VAR_1;
   } else {
     FUNC_11(VAR_5, VAR_13);
     FUNC_3(VAR_5);
   }
 }
 if (FUNC_7(VAR_12)) {
   FUNC_10(VAR_5, VAR_12, VAR_10);
   FUNC_3(VAR_5);
 }
      }
      FUNC_14(VAR_9, VAR_10);
    }
    if (!VAR_7) break;
    if (!(VAR_5->freeset & VAR_7)) {
      FUNC_2(VAR_5, VAR_7, VAR_8, VAR_4);
      if (!VAR_0) FUNC_2(VAR_5, VAR_7, VAR_8, VAR_3);
      FUNC_3(VAR_5);
    }
  }



  VAR_6 = VAR_5->modset & ~(VAR_5->freeset | VAR_5->phiset) & VAR_3;
  while (VAR_6) {
    Reg VAR_14 = FUNC_15(VAR_6);
    FUNC_11(VAR_5, FUNC_13(VAR_5->cost[VAR_14]));
    FUNC_14(VAR_6, VAR_14);
    FUNC_3(VAR_5);
  }

  VAR_6 = VAR_5->modset & ~(VAR_5->freeset | VAR_5->phiset);
  while (VAR_6) {
    Reg VAR_15 = FUNC_15(VAR_6);
    FUNC_11(VAR_5, FUNC_13(VAR_5->cost[VAR_15]));
    FUNC_14(VAR_6, VAR_15);
    FUNC_3(VAR_5);
  }


  VAR_6 = VAR_5->phiset;
  while (VAR_6) {
    Reg VAR_16 = FUNC_16(VAR_6);
    IRRef VAR_17 = VAR_5->phireg[VAR_16];
    IRIns *VAR_18 = FUNC_0(VAR_17);
    if (FUNC_8(VAR_18->s)) {
      FUNC_4(VAR_18->t);
      FUNC_6(VAR_5, VAR_17, FUNC_1(VAR_16));
      FUNC_12(VAR_5, VAR_18, VAR_16);
      FUNC_3(VAR_5);
    }
    FUNC_14(VAR_6, VAR_16);
  }
}
