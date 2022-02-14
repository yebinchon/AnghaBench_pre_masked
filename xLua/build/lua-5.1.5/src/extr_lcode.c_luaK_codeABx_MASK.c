
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ls; } ;
struct TYPE_5__ {int lastline; } ;
typedef int OpCode ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ,int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int) ;

int FUNC_5 (FuncState *VAR_3, OpCode VAR_4, int VAR_5, unsigned int VAR_6) {
  FUNC_4(FUNC_2(VAR_4) == VAR_1 || FUNC_2(VAR_4) == VAR_2);
  FUNC_4(FUNC_1(VAR_4) == VAR_0);
  return FUNC_3(VAR_3, FUNC_0(VAR_4, VAR_5, VAR_6), VAR_3->ls->lastline);
}
