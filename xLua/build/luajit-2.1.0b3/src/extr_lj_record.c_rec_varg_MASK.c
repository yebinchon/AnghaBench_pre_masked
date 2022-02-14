
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ptrdiff_t ;
struct TYPE_13__ {int maxslot; int* base; scalar_t__ framedepth; int bcskip; int errinfo; TYPE_2__* L; TYPE_1__* pt; } ;
typedef TYPE_3__ jit_State ;
typedef int int32_t ;
struct TYPE_12__ {int * base; } ;
struct TYPE_11__ {int numparams; } ;
typedef int TRef ;
typedef int IRType ;
typedef int BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
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
 void* VAR_23 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (TYPE_3__*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*,int,int *) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_3__*,int,int,int ) ;
 scalar_t__ FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(jit_State *VAR_24, BCReg VAR_25, ptrdiff_t VAR_26)
{
  int32_t VAR_27 = VAR_24->pt->numparams;
  ptrdiff_t VAR_28 = FUNC_6(VAR_24->L->base-1) - VAR_27 - 1 - VAR_20;
  FUNC_15(FUNC_8(VAR_24->L->base-1));
  if (VAR_20 && VAR_25 > VAR_24->maxslot)
    VAR_24->base[VAR_25-1] = 0;
  if (VAR_24->framedepth > 0) {
    ptrdiff_t VAR_29;
    if (VAR_28 < 0) VAR_28 = 0;
    if (VAR_26 == -1) {
      VAR_26 = VAR_28;
      VAR_24->maxslot = VAR_25 + (BCReg)VAR_28;
    } else if (VAR_25 + VAR_26 > VAR_24->maxslot) {
      VAR_24->maxslot = VAR_25 + (BCReg)VAR_26;
    }
    for (VAR_29 = 0; VAR_29 < VAR_26; VAR_29++)
      VAR_24->base[VAR_25+VAR_29] = VAR_29 < VAR_28 ? FUNC_9(VAR_24, VAR_29 - VAR_28 - 1 - VAR_20) : VAR_23;
  } else {
    TRef VAR_30 = FUNC_5(FUNC_3(VAR_17), VAR_20, VAR_5|VAR_4);
    int32_t VAR_31 = 8*(1+VAR_20+VAR_27)+VAR_1;
    if (VAR_26 >= 0) {
      ptrdiff_t VAR_32;
      if (VAR_28 > 0) {
 ptrdiff_t VAR_33 = VAR_28 >= VAR_26 ? VAR_26 : VAR_28;
 TRef VAR_34;
 if (VAR_28 >= VAR_26)
   FUNC_5(FUNC_2(VAR_14), VAR_30, FUNC_13(VAR_24, VAR_31+8*(int32_t)VAR_26));
 else
   FUNC_5(FUNC_2(VAR_13), VAR_30,
   FUNC_13(VAR_24, (int32_t)FUNC_7(VAR_24->L->base-1)));
 VAR_34 = FUNC_5(FUNC_0(VAR_18, VAR_6), VAR_22, VAR_30);
 VAR_34 = FUNC_5(FUNC_0(VAR_8, VAR_7), VAR_34, FUNC_13(VAR_24, VAR_31-8));
 for (VAR_32 = 0; VAR_32 < VAR_33; VAR_32++) {
   IRType VAR_35 = FUNC_11(&VAR_24->L->base[VAR_32-1-VAR_20-VAR_28]);
   TRef VAR_36 = FUNC_5(FUNC_0(VAR_9, VAR_7),
        VAR_34, FUNC_13(VAR_24, (int32_t)VAR_32));
   TRef VAR_37 = FUNC_5(FUNC_1(VAR_19, VAR_35), VAR_36, 0);
   if (FUNC_10(VAR_35)) VAR_37 = FUNC_4(VAR_35);
   VAR_24->base[VAR_25+VAR_32] = VAR_37;
 }
      } else {
 FUNC_5(FUNC_2(VAR_15), VAR_30, FUNC_13(VAR_24, VAR_31));
 VAR_28 = 0;
      }
      for (VAR_32 = VAR_28; VAR_32 < VAR_26; VAR_32++)
 VAR_24->base[VAR_25+VAR_32] = VAR_23;
      if (VAR_25 + (BCReg)VAR_26 > VAR_24->maxslot)
 VAR_24->maxslot = VAR_25 + (BCReg)VAR_26;
    } else if (FUNC_17(VAR_24)) {
      TRef VAR_38 = VAR_24->base[VAR_25-1];
      TRef VAR_39 = VAR_23;
      ptrdiff_t VAR_40 = FUNC_12(VAR_24, VAR_38, &VAR_24->L->base[VAR_25-1]);
      if (VAR_40 < 0) goto nyivarg;
      if (VAR_40 != 0 && !FUNC_19(VAR_38))
 VAR_38 = FUNC_5(FUNC_2(VAR_12), VAR_38, VAR_3|VAR_2);
      if (VAR_40 != 0 && FUNC_20(VAR_38)) {
 FUNC_5(FUNC_2(VAR_40 <= VAR_28 ? VAR_14 : VAR_16),
        VAR_30, FUNC_13(VAR_24, VAR_31+8*(int32_t)VAR_40));
 VAR_31 -= 8;
      } else if (VAR_40 <= VAR_28) {
 TRef VAR_41 = FUNC_5(FUNC_3(VAR_8), VAR_30, FUNC_13(VAR_24, -VAR_31));
 if (VAR_27)
   FUNC_5(FUNC_2(VAR_14), VAR_41, FUNC_13(VAR_24, 0));
 VAR_39 = FUNC_5(FUNC_3(VAR_11), VAR_41, FUNC_13(VAR_24, 3));
 if (VAR_40 != 0) {
   VAR_38 = FUNC_5(FUNC_3(VAR_8), VAR_38, FUNC_13(VAR_24, -1));
   FUNC_16(VAR_24, VAR_39, VAR_38, (uint32_t)VAR_28);
 }
      } else {
 TRef VAR_42 = FUNC_13(VAR_24, VAR_31);
 if (VAR_40 != 0) {
   TRef VAR_43 = FUNC_5(FUNC_3(VAR_10), VAR_38, FUNC_13(VAR_24, 3));
   VAR_42 = FUNC_5(FUNC_3(VAR_8), VAR_43, VAR_42);
 } else {
   VAR_39 = FUNC_13(VAR_24, 0);
 }
 FUNC_5(FUNC_2(VAR_16), VAR_30, VAR_42);
      }
      if (VAR_40 != 0 && VAR_40 <= VAR_28) {
 IRType VAR_44;
 TRef VAR_45, VAR_46 = FUNC_5(FUNC_0(VAR_18, VAR_6), VAR_22, VAR_30);
 VAR_46 = FUNC_5(FUNC_0(VAR_8, VAR_7), VAR_46,
         FUNC_13(VAR_24, VAR_31-(8<<VAR_20)));
 VAR_44 = FUNC_11(&VAR_24->L->base[VAR_40-2-VAR_20-VAR_28]);
 VAR_45 = FUNC_5(FUNC_0(VAR_9, VAR_7), VAR_46, VAR_38);
 VAR_39 = FUNC_5(FUNC_1(VAR_19, VAR_44), VAR_45, 0);
 if (FUNC_10(VAR_44)) VAR_39 = FUNC_4(VAR_44);
      }
      VAR_24->base[VAR_25-2-VAR_20] = VAR_39;
      VAR_24->maxslot = VAR_25-1-VAR_20;
      VAR_24->bcskip = 2;
    } else {
    nyivarg:
      FUNC_18(&VAR_24->errinfo, VAR_0);
      FUNC_14(VAR_24, VAR_21);
    }
  }
}
