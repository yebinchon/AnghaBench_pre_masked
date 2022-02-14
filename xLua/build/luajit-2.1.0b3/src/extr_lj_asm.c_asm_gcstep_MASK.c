
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int gcsteps; scalar_t__ stopins; } ;
struct TYPE_8__ {scalar_t__ o; } ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(ASMState *VAR_5, IRIns *VAR_6)
{
  IRIns *VAR_7;
  for (VAR_7 = FUNC_0(VAR_5->stopins+1); VAR_7 < VAR_6; VAR_7++)
    if ((VAR_7->o == VAR_3 || VAR_7->o == VAR_2 ||
  (VAR_4 && (VAR_7->o == VAR_0 || VAR_7->o == VAR_1))) &&
 FUNC_2(VAR_7))
      VAR_5->gcsteps++;
  if (VAR_5->gcsteps)
    FUNC_1(VAR_5);
  VAR_5->gcsteps = 0x80000000;
}
