
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* packstack; size_t curpack; int cts; } ;
struct TYPE_8__ {int info; int size; scalar_t__ sib; } ;
typedef scalar_t__ CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_2__ CPState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int,int*) ;

__attribute__((used)) static void FUNC_12(CPState *VAR_16, CTypeID VAR_17, CTInfo VAR_18)
{
  CTSize VAR_19 = 0, VAR_20 = 0;
  CTSize VAR_21 = FUNC_4(VAR_18);
  CType *VAR_22 = FUNC_7(VAR_16->cts, VAR_17);
  CTInfo VAR_23 = VAR_22->info;
  CTypeID VAR_24 = VAR_22->sib;
  while (VAR_24) {
    CType *VAR_25 = FUNC_7(VAR_16->cts, VAR_24);
    CTInfo VAR_26 = VAR_25->size;

    if (FUNC_9(VAR_25->info) ||
 (FUNC_10(VAR_25->info, VAR_0) && VAR_26)) {
      CTSize VAR_27, VAR_28;
      CTSize VAR_29;
      CTInfo VAR_30 = FUNC_11(VAR_16->cts, FUNC_6(VAR_25->info), &VAR_29);
      CTSize VAR_31, VAR_32 = 8*VAR_29;
      VAR_23 |= (VAR_30 & (VAR_5|VAR_8));


      if (VAR_29 >= 0x20000000u || VAR_19 + VAR_32 < VAR_19 || (VAR_30 & VAR_8)) {
 if (!(VAR_29 == VAR_12 && FUNC_8(VAR_30) &&
       !(VAR_23 & VAR_6)))
   FUNC_2(VAR_16, VAR_15);
 VAR_32 = VAR_29 = 0;
      }
      VAR_27 = FUNC_3(VAR_16, VAR_25, VAR_30);
      if (((VAR_26|VAR_18) & VAR_3) ||
   ((VAR_26 & VAR_2) && FUNC_4(VAR_26) > VAR_27))
 VAR_27 = FUNC_4(VAR_26);
      if (VAR_16->packstack[VAR_16->curpack] < VAR_27)
 VAR_27 = VAR_16->packstack[VAR_16->curpack];
      if (VAR_27 > VAR_21) VAR_21 = VAR_27;
      VAR_28 = (8u << VAR_27) - 1;

      VAR_31 = FUNC_5(VAR_25->info);
      if (VAR_31 == VAR_1 || !FUNC_9(VAR_25->info)) {
 VAR_31 = VAR_32;
 VAR_19 = (VAR_19 + VAR_28) & ~VAR_28;
 VAR_25->size = (VAR_19 >> 3);
      } else {
 if (VAR_31 == 0 || (VAR_26 & VAR_2) ||
     (!((VAR_26|VAR_18) & VAR_3) && (VAR_19 & VAR_28) + VAR_31 > VAR_32))
   VAR_19 = (VAR_19 + VAR_28) & ~VAR_28;


 if (VAR_31 == VAR_32 && (VAR_19 & VAR_28) == 0) {
   VAR_25->info = FUNC_1(VAR_14, FUNC_6(VAR_25->info));
   VAR_25->size = (VAR_19 >> 3);
 } else {
   VAR_25->info = FUNC_1(VAR_13,
     (VAR_30 & (VAR_5|VAR_7|VAR_4)) +
     (VAR_32 << (VAR_10-3)) + (VAR_31 << VAR_9));



   VAR_25->info += ((VAR_19 & (VAR_32-1)) << VAR_11);

   VAR_25->size = ((VAR_19 & ~(VAR_32-1)) >> 3);
 }
      }


      if ((VAR_23 & VAR_6)) {
 if (VAR_31 > VAR_20) VAR_20 = VAR_31;
      } else {
 VAR_19 += VAR_31;
      }
    }

    VAR_24 = VAR_25->sib;
  }


  VAR_22->info = VAR_23 + FUNC_0(VAR_21);
  VAR_19 = (VAR_23 & VAR_6) ? VAR_20 : VAR_19;
  VAR_21 = (8u << VAR_21) - 1;
  VAR_22->size = (((VAR_19 + VAR_21) & ~VAR_21) >> 3);
}
