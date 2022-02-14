
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int jit_State ;
struct TYPE_18__ {scalar_t__ u64; } ;
struct TYPE_17__ {int irt; } ;
struct TYPE_16__ {scalar_t__ o; TYPE_2__ t; scalar_t__ i; int op1; int op2; } ;
typedef TYPE_1__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 TYPE_8__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__) ;
 scalar_t__ FUNC_6 (TYPE_2__,TYPE_2__) ;
 int FUNC_7 (TYPE_2__) ;
 scalar_t__ FUNC_8 (TYPE_2__,int,int ) ;

__attribute__((used)) static AliasRet FUNC_9(jit_State *VAR_9, IRIns *VAR_10, IRIns *VAR_11, IRIns *VAR_12)
{
  ptrdiff_t VAR_13 = 0, VAR_14 = 0;
  IRIns *VAR_15 = FUNC_0(VAR_12->op1);
  IRIns *VAR_16 = VAR_10, *VAR_17 = VAR_15;
  if (VAR_10 == VAR_15 && FUNC_6(VAR_11->t, VAR_12->t))
    return VAR_1;

  if (VAR_10->o == VAR_5 && FUNC_4(VAR_10->op2)) {
    IRIns *VAR_18 = FUNC_0(VAR_10->op2);
    VAR_16 = FUNC_0(VAR_10->op1);
    VAR_13 = (VAR_8 && VAR_18->o == VAR_6) ? (ptrdiff_t)FUNC_2(VAR_18)->u64 :
         (ptrdiff_t)VAR_18->i;
  }
  if (VAR_15->o == VAR_5 && FUNC_4(VAR_15->op2)) {
    IRIns *VAR_19 = FUNC_0(VAR_15->op2);
    VAR_17 = FUNC_0(VAR_15->op1);
    VAR_14 = (VAR_8 && VAR_19->o == VAR_6) ? (ptrdiff_t)FUNC_2(VAR_19)->u64 :
         (ptrdiff_t)VAR_19->i;
  }

  if (VAR_16->o == VAR_7 && VAR_17->o == VAR_7) {
    VAR_14 += (char *)FUNC_3(VAR_17) - (char *)FUNC_3(VAR_16);
    VAR_17 = VAR_16;
  }




  if (VAR_16 == VAR_17) {
    ptrdiff_t VAR_20 = FUNC_7(VAR_11->t), VAR_21 = FUNC_7(VAR_12->t);
    if (VAR_13 == VAR_14) {
      if (VAR_20 == VAR_21 && FUNC_5(VAR_11->t) == FUNC_5(VAR_12->t))
 return VAR_1;
    } else if (VAR_13 + VAR_20 <= VAR_14 || VAR_14 + VAR_21 <= VAR_13) {
      return VAR_2;
    }

    return VAR_0;
  }
  if (!FUNC_6(VAR_11->t, VAR_12->t) &&
      !(FUNC_8(VAR_11->t, VAR_3, VAR_4) &&
 ((VAR_11->t.irt - VAR_3) ^ (VAR_12->t.irt - VAR_3)) == 1))
    return VAR_2;

  return FUNC_1(VAR_9, VAR_16, VAR_17);
}
