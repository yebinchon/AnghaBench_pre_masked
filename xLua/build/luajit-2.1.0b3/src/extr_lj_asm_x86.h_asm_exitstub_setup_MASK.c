
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ** exitstubgroup; } ;
struct TYPE_5__ {TYPE_2__* J; } ;
typedef int ExitNo ;
typedef TYPE_1__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_3, ExitNo VAR_4)
{
  ExitNo VAR_5;
  if (VAR_4 >= VAR_0*VAR_1)
    FUNC_1(VAR_3->J, VAR_2);
  for (VAR_5 = 0; VAR_5 < (VAR_4+VAR_0-1)/VAR_0; VAR_5++)
    if (VAR_3->J->exitstubgroup[VAR_5] == ((void*)0))
      VAR_3->J->exitstubgroup[VAR_5] = FUNC_0(VAR_3, VAR_5);
}
