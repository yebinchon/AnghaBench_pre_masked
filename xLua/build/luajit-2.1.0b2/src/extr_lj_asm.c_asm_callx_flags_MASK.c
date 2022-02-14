
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int J; } ;
struct TYPE_11__ {int info; } ;
struct TYPE_9__ {int irt; } ;
struct TYPE_10__ {scalar_t__ op1; scalar_t__ o; scalar_t__ op2; TYPE_1__ t; int i; } ;
typedef TYPE_2__ IRIns ;
typedef int CTypeID ;
typedef TYPE_3__ CType ;
typedef TYPE_4__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;

__attribute__((used)) static uint32_t FUNC_5(ASMState *VAR_6, IRIns *VAR_7)
{
  uint32_t VAR_8 = 0;
  if (VAR_7->op1 != VAR_5) {
    IRIns *VAR_9 = FUNC_0(VAR_7->op1);
    VAR_8++;
    while (VAR_9->o == VAR_4) { VAR_8++; VAR_9 = FUNC_0(VAR_9->op1); }
  }
  return (VAR_8 | (VAR_7->t.irt << VAR_1));
}
