
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int postproc; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_10__ {int info; } ;
typedef int TRef ;
typedef scalar_t__ MMS ;
typedef scalar_t__ IRType ;
typedef int IROp ;
typedef int CTypeID ;
typedef TYPE_2__ CType ;
typedef int CTState ;
typedef int CTSize ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__,int ) ;

__attribute__((used)) static TRef FUNC_19(jit_State *VAR_30, TRef *VAR_31, CType **VAR_32, MMS VAR_33)
{
  CTState *VAR_34 = FUNC_5(FUNC_3(VAR_30));
  CType *VAR_35 = VAR_32[0];
  if (FUNC_7(VAR_35->info) || FUNC_8(VAR_35->info)) {
    if ((VAR_33 == VAR_28 || VAR_33 == VAR_25 || VAR_33 == VAR_27 || VAR_33 == VAR_26) &&
 (FUNC_7(VAR_32[1]->info) || FUNC_8(VAR_32[1]->info))) {
      if (VAR_33 == VAR_28) {
 TRef VAR_36;
 CTSize VAR_37 = FUNC_12(VAR_34, FUNC_4(VAR_35->info));
 if (VAR_37 == 0 || (VAR_37 & (VAR_37-1)) != 0)
   return 0;
 VAR_36 = FUNC_10(FUNC_1(VAR_20, VAR_10), VAR_31[0], VAR_31[1]);
 VAR_36 = FUNC_10(FUNC_1(VAR_16, VAR_10), VAR_36, FUNC_14(VAR_30, FUNC_13(VAR_37)));



 return VAR_36;
      } else {

 IROp VAR_38 = VAR_33 == VAR_25 ? VAR_18 : VAR_33 == VAR_27 ? VAR_22 : VAR_21;
 FUNC_16(VAR_30, FUNC_2(VAR_38, VAR_12), VAR_31[0], VAR_31[1]);
 VAR_30->postproc = VAR_23;
 return VAR_29;
      }
    }
    if (!((VAR_33 == VAR_24 || VAR_33 == VAR_28) && FUNC_6(VAR_32[1]->info)))
      return 0;
  } else if (VAR_33 == VAR_24 && FUNC_6(VAR_35->info) &&
      (FUNC_7(VAR_32[1]->info) || FUNC_8(VAR_32[1]->info))) {
    TRef VAR_39 = VAR_31[0]; VAR_31[0] = VAR_31[1]; VAR_31[1] = VAR_39;
    VAR_35 = VAR_32[1];
  } else {
    return 0;
  }
  {
    TRef VAR_40 = VAR_31[1];
    IRType VAR_41 = FUNC_17(VAR_40);
    CTSize VAR_42 = FUNC_12(VAR_34, FUNC_4(VAR_35->info));
    CTypeID VAR_43;







    if (!FUNC_18(VAR_31[1], VAR_8, VAR_13)) {
      VAR_40 = FUNC_9(VAR_40, VAR_10, VAR_41,
      (VAR_41 == VAR_11 || VAR_41 == VAR_6) ? VAR_3 : 0);
    }

    VAR_40 = FUNC_10(FUNC_1(VAR_19, VAR_10), VAR_40, FUNC_15(VAR_30, VAR_42));
    VAR_40 = FUNC_10(FUNC_1(VAR_33+(int)VAR_15-(int)VAR_24, VAR_12), VAR_31[0], VAR_40);
    VAR_43 = FUNC_11(VAR_34, FUNC_0(VAR_2, VAR_0|FUNC_4(VAR_35->info)),
    VAR_1);
    return FUNC_10(FUNC_2(VAR_17, VAR_5), FUNC_14(VAR_30, VAR_43), VAR_40);
  }
}
