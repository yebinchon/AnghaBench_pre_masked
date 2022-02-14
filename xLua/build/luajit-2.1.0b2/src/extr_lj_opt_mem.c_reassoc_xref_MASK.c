
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int jit_State ;
typedef int int32_t ;
struct TYPE_7__ {scalar_t__ u64; } ;
struct TYPE_6__ {scalar_t__ o; scalar_t__ op2; int i; scalar_t__ op1; int t; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static IRRef FUNC_7(jit_State *VAR_4, IRIns *VAR_5)
{
  ptrdiff_t VAR_6 = 0;
  if (VAR_5->o == VAR_0 && FUNC_2(VAR_5->op2)) {
    IRIns *VAR_7 = FUNC_0(VAR_5->op2);
    VAR_6 = (VAR_3 && VAR_7->o == VAR_2) ? (ptrdiff_t)FUNC_1(VAR_7)->u64 :
        (ptrdiff_t)VAR_7->i;
    VAR_5 = FUNC_0(VAR_5->op1);
  }
  if (VAR_5->o == VAR_0) {

    IRIns *VAR_8, *VAR_9 = FUNC_0(VAR_5->op1);
    int32_t VAR_10 = 0;
    IRRef VAR_11;

    if (VAR_9->o == VAR_1 && FUNC_2(VAR_9->op2))
      VAR_10 = FUNC_0(VAR_9->op2)->i;
    else if (VAR_9->o == VAR_0 && VAR_9->op1 == VAR_9->op2)
      VAR_10 = 1;
    else
      VAR_9 = VAR_5;
    VAR_8 = FUNC_0(VAR_9->op1);

    if (VAR_8->o == VAR_0 && FUNC_3(VAR_8->t) && FUNC_2(VAR_8->op2))
      VAR_6 += (ptrdiff_t)FUNC_0(VAR_8->op2)->i << VAR_10;
    else
      return 0;
    VAR_11 = VAR_8->op1;

    if (VAR_9 != VAR_5 &&
 !(VAR_11 = FUNC_5(VAR_4, VAR_9->o, VAR_11,
      VAR_9->o == VAR_1 ? VAR_9->op2 : VAR_11)))
      return 0;
    if (!(VAR_11 = FUNC_5(VAR_4, VAR_0, VAR_11, VAR_5->op2)))
      return 0;
    if (VAR_6 != 0) {
      IRRef VAR_12 = FUNC_6(FUNC_4(VAR_4, VAR_6));
      if (!(VAR_11 = FUNC_5(VAR_4, VAR_0, VAR_11, VAR_12)))
 return 0;
    }
    return VAR_11;
  }
  return 0;
}
