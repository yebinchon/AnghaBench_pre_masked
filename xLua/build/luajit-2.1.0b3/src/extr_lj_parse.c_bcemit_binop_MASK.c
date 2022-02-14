
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int info; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
struct TYPE_17__ {scalar_t__ t; scalar_t__ f; scalar_t__ k; TYPE_2__ u; } ;
typedef int FuncState ;
typedef TYPE_3__ ExpDesc ;
typedef scalar_t__ BinOpr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int,int) ;
 int FUNC_3 (int *,scalar_t__,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int *,scalar_t__,TYPE_3__*,TYPE_3__*) ;
 int * FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static void FUNC_13(FuncState *VAR_13, BinOpr VAR_14, ExpDesc *VAR_15, ExpDesc *VAR_16)
{
  if (VAR_14 <= VAR_11) {
    FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
  } else if (VAR_14 == VAR_2) {
    FUNC_11(VAR_15->t == VAR_1);
    FUNC_6(VAR_13, VAR_16);
    FUNC_10(VAR_13, &VAR_16->f, VAR_15->f);
    *VAR_15 = *VAR_16;
  } else if (VAR_14 == VAR_10) {
    FUNC_11(VAR_15->f == VAR_1);
    FUNC_6(VAR_13, VAR_16);
    FUNC_10(VAR_13, &VAR_16->t, VAR_15->t);
    *VAR_15 = *VAR_16;
  } else if (VAR_14 == VAR_3) {
    FUNC_9(VAR_13, VAR_16);
    if (VAR_16->k == VAR_12 && FUNC_1(*FUNC_5(VAR_13, VAR_16)) == VAR_0) {
      FUNC_11(VAR_15->u.s.info == FUNC_0(*FUNC_5(VAR_13, VAR_16))-1);
      FUNC_7(VAR_13, VAR_15);
      FUNC_12(FUNC_5(VAR_13, VAR_16), VAR_15->u.s.info);
      VAR_15->u.s.info = VAR_16->u.s.info;
    } else {
      FUNC_8(VAR_13, VAR_16);
      FUNC_7(VAR_13, VAR_16);
      FUNC_7(VAR_13, VAR_15);
      VAR_15->u.s.info = FUNC_2(VAR_13, VAR_0, 0, VAR_15->u.s.info, VAR_16->u.s.info);
    }
    VAR_15->k = VAR_12;
  } else {
    FUNC_11(VAR_14 == VAR_9 || VAR_14 == VAR_4 ||
        VAR_14 == VAR_8 || VAR_14 == VAR_5 || VAR_14 == VAR_7 || VAR_14 == VAR_6);
    FUNC_4(VAR_13, VAR_14, VAR_15, VAR_16);
  }
}
