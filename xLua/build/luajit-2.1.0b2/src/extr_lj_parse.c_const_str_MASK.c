
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sval; } ;
struct TYPE_6__ {scalar_t__ k; TYPE_1__ u; } ;
typedef int FuncState ;
typedef TYPE_2__ ExpDesc ;
typedef int BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BCReg FUNC_4(FuncState *VAR_2, ExpDesc *VAR_3)
{
  FUNC_2(FUNC_1(VAR_3) || VAR_3->k == VAR_1);
  return FUNC_0(VAR_2, FUNC_3(VAR_3->u.sval), VAR_0);
}
