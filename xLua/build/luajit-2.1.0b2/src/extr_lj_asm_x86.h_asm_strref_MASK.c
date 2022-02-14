
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ base; scalar_t__ idx; int ofs; } ;
struct TYPE_10__ {TYPE_1__ mrm; } ;
typedef scalar_t__ Reg ;
typedef int IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_6(ASMState *VAR_5, IRIns *VAR_6)
{
  Reg VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_2);
  FUNC_1(VAR_5, VAR_6, VAR_2);
  if (VAR_5->mrm.base == VAR_1)
    FUNC_3(VAR_5, VAR_7, VAR_5->mrm.ofs);
  else if (VAR_5->mrm.base == VAR_7 && VAR_5->mrm.idx == VAR_1)
    FUNC_2(VAR_5, FUNC_0(VAR_4), VAR_7, VAR_5->mrm.ofs);
  else
    FUNC_4(VAR_5, VAR_3, VAR_7, VAR_0);
}
