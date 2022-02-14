
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_27__ {size_t aux; int info; } ;
struct TYPE_28__ {TYPE_3__ s; } ;
struct TYPE_30__ {scalar_t__ k; TYPE_4__ u; } ;
struct TYPE_29__ {int nactvar; TYPE_2__* ls; } ;
struct TYPE_26__ {TYPE_1__* vstack; } ;
struct TYPE_25__ {int info; } ;
typedef TYPE_5__ FuncState ;
typedef TYPE_6__ ExpDesc ;
typedef int BCReg ;
typedef int BCIns ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(FuncState *VAR_18, ExpDesc *VAR_19, ExpDesc *VAR_20)
{
  BCIns VAR_21;
  if (VAR_19->k == VAR_14) {
    VAR_18->ls->vstack[VAR_19->u.s.aux].info |= VAR_16;
    FUNC_7(VAR_18, VAR_20);
    FUNC_9(VAR_18, VAR_20, VAR_19->u.s.info);
    return;
  } else if (VAR_19->k == VAR_17) {
    VAR_18->ls->vstack[VAR_19->u.s.aux].info |= VAR_16;
    FUNC_10(VAR_18, VAR_20);
    if (VAR_20->k <= VAR_13)
      VAR_21 = FUNC_1(VAR_6, VAR_19->u.s.info, FUNC_5(VAR_20));
    else if (VAR_20->k == VAR_12)
      VAR_21 = FUNC_1(VAR_7, VAR_19->u.s.info, FUNC_6(VAR_18, VAR_20));
    else if (VAR_20->k == VAR_11)
      VAR_21 = FUNC_1(VAR_5, VAR_19->u.s.info, FUNC_4(VAR_18, VAR_20));
    else
      VAR_21 = FUNC_1(VAR_8, VAR_19->u.s.info, FUNC_8(VAR_18, VAR_20));
  } else if (VAR_19->k == VAR_9) {
    BCReg VAR_22 = FUNC_8(VAR_18, VAR_20);
    VAR_21 = FUNC_1(VAR_1, VAR_22, FUNC_6(VAR_18, VAR_19));
  } else {
    BCReg VAR_23, VAR_24;
    FUNC_11(VAR_19->k == VAR_10);
    VAR_23 = FUNC_8(VAR_18, VAR_20);
    VAR_24 = VAR_19->u.s.aux;
    if ((int32_t)VAR_24 < 0) {
      VAR_21 = FUNC_0(VAR_3, VAR_23, VAR_19->u.s.info, ~VAR_24);
    } else if (VAR_24 > VAR_0) {
      VAR_21 = FUNC_0(VAR_2, VAR_23, VAR_19->u.s.info, VAR_24-(VAR_0+1));
    } else {


      FUNC_11(VAR_20->k != VAR_15 || VAR_23 < VAR_18->nactvar ||
   VAR_24 < VAR_23 || (FUNC_3(VAR_18, VAR_24),1));
      VAR_21 = FUNC_0(VAR_4, VAR_23, VAR_19->u.s.info, VAR_24);
    }
  }
  FUNC_2(VAR_18, VAR_21);
  FUNC_7(VAR_18, VAR_20);
}
