
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_6__ {int i; } ;
struct TYPE_5__ {scalar_t__ tp; } ;
typedef int TRef ;
typedef int MSize ;
typedef int CTSize ;
typedef TYPE_1__ CRecMemList ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(jit_State *VAR_12, TRef VAR_13, TRef VAR_14, TRef VAR_15,
        CTSize VAR_16)
{
  if (FUNC_11(VAR_14)) {
    CRecMemList VAR_17[VAR_0];
    MSize VAR_18;
    CTSize VAR_19 = (CTSize)FUNC_0(FUNC_12(VAR_14))->i;
    if (VAR_19 == 0) return;
    if (VAR_11 || VAR_16 >= VAR_1)
      VAR_16 = VAR_1;
    if (VAR_16 * VAR_0 < VAR_19) goto fallback;
    VAR_18 = FUNC_5(VAR_17, VAR_19, VAR_16);
    if (!VAR_18) goto fallback;
    if (FUNC_11(VAR_15) || VAR_17[0].tp != VAR_8)
      VAR_15 = FUNC_6(VAR_15, VAR_3, VAR_8, 0);
    if (VAR_17[0].tp != VAR_8) {
      if (VAR_1 == 8 && VAR_17[0].tp == VAR_7) {
 if (FUNC_11(VAR_15))
   VAR_15 = FUNC_6(VAR_15, VAR_7, VAR_6, 0);
 VAR_15 = FUNC_7(FUNC_1(VAR_9, VAR_7), VAR_15,
   FUNC_10(VAR_12, FUNC_3(01010101,01010101)));
      } else {
 VAR_15 = FUNC_7(FUNC_2(VAR_9), VAR_15,
     FUNC_9(VAR_12, VAR_17[0].tp == VAR_5 ? 0x0101 : 0x01010101));
      }
    }
    FUNC_4(VAR_12, VAR_17, VAR_18, VAR_13, VAR_15);
  } else {
fallback:

    FUNC_8(VAR_12, VAR_2, VAR_13, VAR_15, VAR_14);
  }
  FUNC_7(FUNC_1(VAR_10, VAR_4), 0, 0);
}
