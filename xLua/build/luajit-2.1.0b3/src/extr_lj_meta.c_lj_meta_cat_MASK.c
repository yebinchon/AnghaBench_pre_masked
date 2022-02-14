
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_20__ {int top; } ;
typedef TYPE_2__ lua_State ;
typedef int cTValue ;
struct TYPE_21__ {scalar_t__ len; } ;
struct TYPE_19__ {scalar_t__ total; scalar_t__ threshold; } ;
struct TYPE_18__ {TYPE_1__ gc; } ;
typedef int TValue ;
typedef int SBuf ;
typedef scalar_t__ MSize ;
typedef TYPE_3__ GCstr ;


 TYPE_16__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int * FUNC_8 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int * FUNC_12 (TYPE_2__*,int *,int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int *,int ) ;
 TYPE_3__* FUNC_19 (int *) ;
 int FUNC_20 (TYPE_3__*) ;
 scalar_t__ FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *) ;

TValue *FUNC_25(lua_State *VAR_8, TValue *VAR_9, int VAR_10)
{
  int VAR_11 = 0;
  if (VAR_10 < 0) { VAR_10 = -VAR_10; VAR_11 = 1; }
  do {
    if (!(FUNC_24(VAR_9) || FUNC_23(VAR_9)) ||
 !(FUNC_24(VAR_9-1) || FUNC_23(VAR_9-1))) {
      cTValue *VAR_12 = FUNC_12(VAR_8, VAR_9-1, VAR_4);
      if (FUNC_22(VAR_12)) {
 VAR_12 = FUNC_12(VAR_8, VAR_9, VAR_4);
 if (FUNC_22(VAR_12)) {
   if (FUNC_24(VAR_9-1) || FUNC_23(VAR_9-1)) VAR_9++;
   FUNC_10(VAR_8, VAR_9-1, VAR_0);
   return ((void*)0);
 }
      }
      FUNC_2(VAR_8, VAR_9+2*VAR_2+2, VAR_9);
      FUNC_2(VAR_8, VAR_9+2*VAR_2+1, VAR_9-1);
      FUNC_2(VAR_8, VAR_9+VAR_2, VAR_12);
      FUNC_16(VAR_9-1, VAR_7);
      if (VAR_2) { FUNC_17(VAR_9); FUNC_17(VAR_9+2); VAR_9 += 2; }
      return VAR_9+1;
    } else {







      TValue *VAR_13, *VAR_14 = VAR_9;
      uint64_t VAR_15 = FUNC_24(VAR_14) ? FUNC_19(VAR_14)->len : VAR_6;
      SBuf *VAR_16;
      do {
 VAR_14--; VAR_15 += FUNC_24(VAR_14) ? FUNC_19(VAR_14)->len : VAR_6;
      } while (--VAR_10 > 0 && (FUNC_24(VAR_14-1) || FUNC_23(VAR_14-1)));
      if (VAR_15 >= VAR_3) FUNC_9(VAR_8, VAR_1);
      VAR_16 = FUNC_8(VAR_8);
      FUNC_5(VAR_16, (MSize)VAR_15);
      for (VAR_13 = VAR_9, VAR_9 = VAR_14; VAR_14 <= VAR_13; VAR_14++) {
 if (FUNC_24(VAR_14)) {
   GCstr *VAR_17 = FUNC_19(VAR_14);
   MSize VAR_18 = VAR_17->len;
   FUNC_6(VAR_16, FUNC_20(VAR_17), VAR_18);
 } else if (FUNC_21(VAR_14)) {
   FUNC_14(VAR_16, FUNC_4(VAR_14));
 } else {
   FUNC_13(VAR_16, VAR_5, FUNC_15(VAR_14));
 }
      }
      FUNC_18(VAR_8, VAR_9, FUNC_7(VAR_8, VAR_16));
    }
  } while (VAR_10 >= 1);
  if (FUNC_1(FUNC_0(VAR_8)->gc.total >= FUNC_0(VAR_8)->gc.threshold)) {
    if (!VAR_11) VAR_8->top = FUNC_3(VAR_8);
    FUNC_11(VAR_8);
  }
  return ((void*)0);
}
