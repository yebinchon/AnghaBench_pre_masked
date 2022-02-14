
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ op1; scalar_t__ o; scalar_t__ op2; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ CCallInfo ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__ const*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(ASMState *VAR_5, IRIns *VAR_6,
       const CCallInfo *VAR_7, IRRef *VAR_8)
{
  uint32_t VAR_9 = FUNC_0(VAR_7);
  FUNC_2(VAR_9 <= VAR_2*2);
  if ((VAR_7->flags & VAR_1)) { *VAR_8++ = VAR_0; VAR_9--; }
  while (VAR_9-- > 1) {
    VAR_6 = FUNC_1(VAR_6->op1);
    FUNC_2(VAR_6->o == VAR_3);
    VAR_8[VAR_9] = VAR_6->op2 == VAR_4 ? 0 : VAR_6->op2;
  }
  VAR_8[0] = VAR_6->op1 == VAR_4 ? 0 : VAR_6->op1;
  FUNC_2(FUNC_1(VAR_6->op1)->o != VAR_3);
}
