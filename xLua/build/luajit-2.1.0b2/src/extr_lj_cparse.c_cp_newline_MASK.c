
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ c; int linenumber; int p; } ;
typedef TYPE_1__ CPState ;
typedef scalar_t__ CPChar ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(CPState *VAR_0)
{
  CPChar VAR_1 = FUNC_1(VAR_0);
  if (FUNC_0(VAR_1) && VAR_1 != VAR_0->c) VAR_0->p++;
  VAR_0->linenumber++;
}
