
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {int info; int size; } ;
struct TYPE_12__ {TYPE_1__* stack; int attr; } ;
struct TYPE_11__ {int cts; } ;
struct TYPE_10__ {int info; int size; int next; int sib; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_2__ CPState ;
typedef int CPDeclIdx ;
typedef TYPE_3__ CPDecl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_6__* FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int,int ) ;
 int FUNC_20 (int ) ;
 TYPE_1__* FUNC_21 (int ,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int,int) ;
 int FUNC_24 (int ,TYPE_1__**) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;

__attribute__((used)) static CTypeID FUNC_27(CPState *VAR_13, CPDecl *VAR_14)
{
  CTypeID VAR_15 = 0;
  CPDeclIdx VAR_16 = 0;
  CTSize VAR_17 = VAR_9;
  CTSize VAR_18 = 0;
  do {
    CType *VAR_19 = &VAR_14->stack[VAR_16];
    CTInfo VAR_20 = VAR_19->info;
    CTInfo VAR_21 = VAR_19->size;

    VAR_16 = VAR_19->next;
    if (FUNC_16(VAR_20)) {
      FUNC_26(VAR_15 == 0);
      VAR_15 = FUNC_5(VAR_20);

      VAR_18 = FUNC_6(VAR_13->cts, VAR_15)->info;
      VAR_17 = FUNC_6(VAR_13->cts, VAR_15)->size;
      FUNC_26(FUNC_15(VAR_18) || FUNC_9(VAR_18));
    } else if (FUNC_10(VAR_20)) {
      CType *VAR_22;
      CTypeID VAR_23;
      CTypeID VAR_24;
      if (VAR_15) {
 CType *VAR_25 = FUNC_21(VAR_13->cts, VAR_15);

 if (FUNC_10(VAR_25->info) || FUNC_14(VAR_25->info))
   FUNC_3(VAR_13, VAR_12);
      }

      while (VAR_16) {
 CType *VAR_26 = &VAR_14->stack[VAR_16];
 if (!FUNC_8(VAR_26->info)) break;
 VAR_16 = VAR_26->next;
      }
      VAR_24 = VAR_19->sib;
      VAR_23 = FUNC_24(VAR_13->cts, &VAR_22);
      VAR_17 = VAR_9;
      VAR_22->info = VAR_18 = VAR_20 + VAR_15;
      VAR_22->size = VAR_21;
      VAR_22->sib = VAR_24;
      VAR_15 = VAR_23;
    } else if (FUNC_8(VAR_20)) {
      if (FUNC_19(VAR_20, VAR_2))
 VAR_18 |= VAR_21;
      else if (FUNC_19(VAR_20, VAR_1))
 FUNC_1(VAR_18, VAR_0, VAR_21);
      VAR_15 = FUNC_23(VAR_13->cts, VAR_20+VAR_15, VAR_21);

    } else {
      if (FUNC_11(VAR_20)) {
 FUNC_26(VAR_15 == 0);
 if (!(VAR_20 & VAR_4)) {
   CTSize VAR_27 = FUNC_20(VAR_14->attr);
   CTSize VAR_28 = FUNC_22(VAR_14->attr);
   if (VAR_27 && (!(VAR_20 & VAR_5) || (VAR_27 == 4 || VAR_27 == 8))) {
     CTSize VAR_29 = FUNC_25(VAR_27);
     if (VAR_29 > 4) VAR_29 = 4;
     FUNC_1(VAR_20, VAR_0, VAR_29);
     VAR_21 = VAR_27;
   }
   if (VAR_28) {
     CTSize VAR_30 = FUNC_25(VAR_21);
     if (VAR_28 >= VAR_30) {

       VAR_15 = FUNC_23(VAR_13->cts, VAR_20, VAR_21);

       VAR_21 = (1u << VAR_28);
       if (VAR_28 > 4) VAR_28 = 4;
       if (FUNC_4(VAR_20) > VAR_28) VAR_28 = FUNC_4(VAR_20);
       VAR_20 = FUNC_2(VAR_10, (VAR_20 & VAR_6) + VAR_7 +
          FUNC_0(VAR_28));
     }
   }
 }
      } else if (FUNC_12(VAR_20)) {

 if (VAR_15 && FUNC_13(FUNC_21(VAR_13->cts, VAR_15)->info))
   FUNC_3(VAR_13, VAR_12);
 if (FUNC_13(VAR_20)) {
   VAR_20 &= ~VAR_8;

   while (VAR_16) {
     CType *VAR_31 = &VAR_14->stack[VAR_16];
     if (!FUNC_8(VAR_31->info)) break;
     VAR_16 = VAR_31->next;
   }
 }
      } else if (FUNC_7(VAR_20)) {
 if (VAR_19->sib == 0) {
   if (FUNC_13(VAR_18))
     FUNC_3(VAR_13, VAR_12);

   if (FUNC_17(VAR_18) || VAR_17 == VAR_9)
     FUNC_3(VAR_13, VAR_11);

   if (VAR_21 != VAR_9) {
     uint64_t VAR_32 = (uint64_t)VAR_21 * VAR_17;
     if (VAR_32 >= 0x80000000u) FUNC_3(VAR_13, VAR_11);
     VAR_21 = (CTSize)VAR_32;
   }
 }
 if ((VAR_18 & VAR_3) > (VAR_20 & VAR_3))
   VAR_20 = (VAR_20 & ~VAR_3) | (VAR_18 & VAR_3);
 VAR_20 |= (VAR_18 & VAR_6);
      } else {
 FUNC_26(FUNC_18(VAR_20));
      }
      VAR_17 = VAR_21;
      VAR_18 = VAR_20+VAR_15;
      VAR_15 = FUNC_23(VAR_13->cts, VAR_20+VAR_15, VAR_21);
    }
  } while (VAR_16);
  return VAR_15;
}
