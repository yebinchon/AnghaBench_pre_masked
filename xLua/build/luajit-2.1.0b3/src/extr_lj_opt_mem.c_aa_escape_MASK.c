
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ir; } ;
struct TYPE_8__ {TYPE_1__ cur; } ;
typedef TYPE_2__ jit_State ;
struct TYPE_9__ {scalar_t__ op2; scalar_t__ o; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_3__ IRIns ;
typedef int AliasRet ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static AliasRet FUNC_0(jit_State *VAR_6, IRIns *VAR_7, IRIns *VAR_8)
{
  IRRef VAR_9 = (IRRef)(VAR_7 - VAR_6->cur.ir);
  for (VAR_7++; VAR_7 < VAR_8; VAR_7++)
    if (VAR_7->op2 == VAR_9 &&
 (VAR_7->o == VAR_2 || VAR_7->o == VAR_4 ||
  VAR_7->o == VAR_5 || VAR_7->o == VAR_3))
      return VAR_0;
  return VAR_1;
}
