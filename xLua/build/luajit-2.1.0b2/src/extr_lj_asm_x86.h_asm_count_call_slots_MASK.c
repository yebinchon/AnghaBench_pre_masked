
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int t; } ;
struct TYPE_5__ {int flags; } ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ CCallInfo ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ASMState *VAR_6, const CCallInfo *VAR_7, IRRef *VAR_8)
{
  uint32_t VAR_9, VAR_10 = FUNC_0(VAR_7);
  int VAR_11 = 0;
  int VAR_12 = 0;
  if ((VAR_7->flags & VAR_1) == VAR_0)
    VAR_12 = 2;
  else if ((VAR_7->flags & VAR_1) == VAR_2)
    VAR_12 = 1;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    if (VAR_8[VAR_9] && FUNC_2(FUNC_1(VAR_8[VAR_9])->t)) {
      VAR_11 += FUNC_3(FUNC_1(VAR_8[VAR_9])->t) ? 2 : 1;
    } else {
      if (VAR_12 > 0) VAR_12--; else VAR_11++;
    }

  return VAR_11;
}
