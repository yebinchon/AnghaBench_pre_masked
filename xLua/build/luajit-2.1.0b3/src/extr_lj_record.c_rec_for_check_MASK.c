
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ i; } ;
typedef int TRef ;
typedef scalar_t__ IRType ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(jit_State *VAR_6, IRType VAR_7, int VAR_8,
     TRef VAR_9, TRef VAR_10, int VAR_11)
{
  if (!FUNC_7(VAR_10)) {

    TRef VAR_12 = (VAR_7 == VAR_0) ? FUNC_5(VAR_6, 0) : FUNC_6(VAR_6);
    FUNC_4(FUNC_1(VAR_8 ? VAR_2 : VAR_4, VAR_7), VAR_10, VAR_12);

    if (VAR_11 && VAR_7 == VAR_0) {
      if (FUNC_7(VAR_9)) {

 int32_t VAR_13 = FUNC_0(FUNC_8(VAR_9))->i;
 if (VAR_8) {
   if (VAR_13 > 0)
     FUNC_4(FUNC_2(VAR_3), VAR_10, FUNC_5(VAR_6, (int32_t)0x7fffffff-VAR_13));
 } else {
   if (VAR_13 < 0)
     FUNC_4(FUNC_2(VAR_2), VAR_10, FUNC_5(VAR_6, (int32_t)0x80000000-VAR_13));
 }
      } else {

 TRef VAR_14 = FUNC_4(FUNC_2(VAR_1), VAR_10, VAR_9);
 FUNC_4(FUNC_3(VAR_5), VAR_14, 0);
      }
    }
  } else if (VAR_11 && VAR_7 == VAR_0 && !FUNC_7(VAR_9)) {

    int32_t VAR_15 = FUNC_0(FUNC_8(VAR_10))->i;
    VAR_15 = (int32_t)(VAR_8 ? 0x7fffffff : 0x80000000) - VAR_15;
    FUNC_4(FUNC_2(VAR_8 ? VAR_3 : VAR_2), VAR_9, FUNC_5(VAR_6, VAR_15));
  }
}
