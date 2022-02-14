
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {scalar_t__ op2; scalar_t__ o; scalar_t__ op1; scalar_t__ i; int t; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static AliasRet FUNC_5(jit_State *VAR_9, IRIns *VAR_10, IRIns *VAR_11)
{
  IRRef VAR_12 = VAR_10->op2;
  IRRef VAR_13 = VAR_11->op2;
  IRIns *VAR_14, *VAR_15;
  IRRef VAR_16, VAR_17;
  if (VAR_10 == VAR_11)
    return VAR_1;
  VAR_14 = FUNC_0(VAR_12);
  if (VAR_14->o == VAR_7) { VAR_12 = VAR_14->op1; VAR_14 = FUNC_0(VAR_12); }
  VAR_15 = FUNC_0(VAR_13);
  if (VAR_15->o == VAR_7) { VAR_13 = VAR_15->op1; VAR_15 = FUNC_0(VAR_13); }
  VAR_16 = (VAR_10->o==VAR_6 || VAR_10->o==VAR_4) ? FUNC_0(VAR_10->op1)->op1 : VAR_10->op1;
  VAR_17 = (VAR_11->o==VAR_6 || VAR_11->o==VAR_4) ? FUNC_0(VAR_11->op1)->op1 : VAR_11->op1;
  if (VAR_12 == VAR_13) {

    if (VAR_16 == VAR_17)
      return VAR_1;
    else
      return FUNC_1(VAR_9, VAR_16, VAR_17);
  }
  if (FUNC_2(VAR_12) && FUNC_2(VAR_13))
    return VAR_2;
  if (VAR_10->o == VAR_4) {

    int32_t VAR_18 = 0, VAR_19 = 0;
    IRRef VAR_20 = VAR_12, VAR_21 = VAR_13;
    FUNC_4(VAR_11->o == VAR_4);

    if (VAR_14->o == VAR_3 && FUNC_2(VAR_14->op2)) {
      VAR_20 = VAR_14->op1;
      VAR_18 = FUNC_0(VAR_14->op2)->i;
      if (VAR_20 == VAR_13 && VAR_18 != 0)
 return VAR_2;
    }
    if (VAR_15->o == VAR_3 && FUNC_2(VAR_15->op2)) {
      VAR_21 = VAR_15->op1;
      VAR_19 = FUNC_0(VAR_15->op2)->i;
      if (VAR_12 == VAR_21 && VAR_19 != 0)
 return VAR_2;
    }
    if (VAR_20 == VAR_21 && VAR_18 != VAR_19)
      return VAR_2;
  } else {

    FUNC_4((VAR_10->o==VAR_5 || VAR_10->o==VAR_6 || VAR_10->o==VAR_8) &&
        (VAR_11->o==VAR_5 || VAR_11->o==VAR_6 || VAR_11->o==VAR_8));
    if (!FUNC_3(VAR_14->t, VAR_15->t))
      return VAR_2;
  }
  if (VAR_16 == VAR_17)
    return VAR_0;
  else
    return FUNC_1(VAR_9, VAR_16, VAR_17);
}
