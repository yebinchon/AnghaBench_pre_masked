
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ o; scalar_t__ op1; int op2; } ;
typedef TYPE_1__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static AliasRet FUNC_0(IRIns *VAR_3, IRIns *VAR_4)
{
  if (VAR_3->o != VAR_4->o)
    return VAR_2;
  if (VAR_3->op1 == VAR_4->op1) {
    if (VAR_3->op2 == VAR_4->op2)
      return VAR_1;
    else
      return VAR_2;
  } else {
    if (((VAR_3->op2 ^ VAR_4->op2) & 0xff))
      return VAR_2;
    else
      return VAR_0;
  }
}
