
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_4__ {scalar_t__ op2; scalar_t__ op1; } ;
typedef TYPE_1__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static AliasRet FUNC_1(jit_State *VAR_5, IRIns *VAR_6, IRIns *VAR_7)
{
  if (VAR_6->op2 != VAR_7->op2)
    return VAR_2;
  if (VAR_6->op1 == VAR_7->op1)
    return VAR_1;
  else if (VAR_6->op2 >= VAR_3 && VAR_6->op2 <= VAR_4)
    return FUNC_0(VAR_5, VAR_6->op1, VAR_7->op1);
  else
    return VAR_0;
}
