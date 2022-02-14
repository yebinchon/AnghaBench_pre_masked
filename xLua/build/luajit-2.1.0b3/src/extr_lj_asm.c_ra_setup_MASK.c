
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cost; int phireg; void* phiset; void* weakset; void* modset; int freeset; } ;
typedef size_t Reg ;
typedef TYPE_1__ ASMState ;


 int FUNC_0 (unsigned int,unsigned int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_4)
{
  Reg VAR_5;

  VAR_4->freeset = VAR_3;
  VAR_4->modset = VAR_2;
  VAR_4->weakset = VAR_2;
  VAR_4->phiset = VAR_2;
  FUNC_1(VAR_4->phireg, 0, sizeof(VAR_4->phireg));
  for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++)
    VAR_4->cost[VAR_5] = FUNC_0(~0u, 0u);
}
