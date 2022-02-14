
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freeset; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_1__ ASMState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static Reg FUNC_2(ASMState *VAR_0, RegSet VAR_1)
{
  RegSet VAR_2 = VAR_0->freeset & VAR_1;
  if (!VAR_2)
    return FUNC_0(VAR_0, VAR_1);
  else
    return FUNC_1(VAR_2);
}
