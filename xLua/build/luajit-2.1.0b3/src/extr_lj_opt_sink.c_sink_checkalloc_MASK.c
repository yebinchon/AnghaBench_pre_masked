
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_5__ {scalar_t__ o; int op1; int op2; } ;
typedef TYPE_1__ IRIns ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static IRIns *FUNC_2(jit_State *VAR_9, IRIns *VAR_10)
{
  IRIns *VAR_11 = FUNC_0(VAR_10->op1);
  if (!FUNC_1(VAR_11->op2))
    return ((void*)0);
  if (VAR_11->o == VAR_5 || VAR_11->o == VAR_1)
    VAR_11 = FUNC_0(VAR_11->op1);
  else if (!(VAR_11->o == VAR_4 || VAR_11->o == VAR_6 ||
      VAR_11->o == VAR_3 || VAR_11->o == VAR_0))
    return ((void*)0);
  VAR_11 = FUNC_0(VAR_11->op1);
  if (!(VAR_11->o == VAR_8 || VAR_11->o == VAR_7 || VAR_11->o == VAR_2))
    return ((void*)0);
  return VAR_11;
}
