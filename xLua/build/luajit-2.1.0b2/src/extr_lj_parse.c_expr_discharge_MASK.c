
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {int info; int aux; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
struct TYPE_8__ {scalar_t__ k; TYPE_2__ u; } ;
typedef int FuncState ;
typedef TYPE_3__ ExpDesc ;
typedef int BCReg ;
typedef int BCIns ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(FuncState *VAR_13, ExpDesc *VAR_14)
{
  BCIns VAR_15;
  if (VAR_14->k == VAR_12) {
    VAR_15 = FUNC_1(VAR_5, 0, VAR_14->u.s.info);
  } else if (VAR_14->k == VAR_7) {
    VAR_15 = FUNC_1(VAR_1, 0, FUNC_4(VAR_13, VAR_14));
  } else if (VAR_14->k == VAR_8) {
    BCReg VAR_16 = VAR_14->u.s.aux;
    if ((int32_t)VAR_16 < 0) {
      VAR_15 = FUNC_0(VAR_3, 0, VAR_14->u.s.info, ~VAR_16);
    } else if (VAR_16 > VAR_0) {
      VAR_15 = FUNC_0(VAR_2, 0, VAR_14->u.s.info, VAR_16-(VAR_0+1));
    } else {
      FUNC_3(VAR_13, VAR_16);
      VAR_15 = FUNC_0(VAR_4, 0, VAR_14->u.s.info, VAR_16);
    }
    FUNC_3(VAR_13, VAR_14->u.s.info);
  } else if (VAR_14->k == VAR_6) {
    VAR_14->u.s.info = VAR_14->u.s.aux;
    VAR_14->k = VAR_10;
    return;
  } else if (VAR_14->k == VAR_9) {
    VAR_14->k = VAR_10;
    return;
  } else {
    return;
  }
  VAR_14->u.s.info = FUNC_2(VAR_13, VAR_15);
  VAR_14->k = VAR_11;
}
