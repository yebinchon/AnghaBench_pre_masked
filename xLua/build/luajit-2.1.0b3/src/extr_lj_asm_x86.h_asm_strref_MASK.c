
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ base; scalar_t__ idx; int ofs; } ;
struct TYPE_10__ {TYPE_1__ mrm; } ;
typedef int Reg ;
typedef int IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_6, IRIns *VAR_7)
{
  Reg VAR_8 = FUNC_5(VAR_6, VAR_7, VAR_3);
  FUNC_1(VAR_6, VAR_7, VAR_3);
  if (VAR_6->mrm.base == VAR_2)
    FUNC_3(VAR_6, VAR_8, VAR_6->mrm.ofs);
  else if (VAR_6->mrm.base == VAR_8 && VAR_6->mrm.idx == VAR_2)
    FUNC_2(VAR_6, FUNC_0(VAR_5), VAR_8|VAR_0, VAR_6->mrm.ofs);
  else
    FUNC_4(VAR_6, VAR_4, VAR_8|VAR_0, VAR_1);
}
