
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mcprot; int szmcarea; int mcarea; } ;
typedef TYPE_1__ jit_State ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_0, int VAR_1)
{
  if (VAR_0->mcprot != VAR_1) {
    if (FUNC_0(FUNC_2(VAR_0->mcarea, VAR_0->szmcarea, VAR_1)))
      FUNC_1(VAR_0);
    VAR_0->mcprot = VAR_1;
  }
}
