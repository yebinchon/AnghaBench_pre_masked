
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ idx; scalar_t__ ofs; scalar_t__ base; } ;
struct TYPE_9__ {TYPE_1__ mrm; } ;
typedef scalar_t__ Reg ;
typedef int IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_5, IRIns *VAR_6)
{
  Reg VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_2);
  FUNC_0(VAR_5, VAR_6, VAR_2);
  if (!(VAR_5->mrm.idx == VAR_1 && VAR_5->mrm.ofs == 0))
    FUNC_1(VAR_5, VAR_3, VAR_7, VAR_0);
  else if (VAR_5->mrm.base != VAR_7)
    FUNC_2(VAR_5, VAR_4, VAR_7, VAR_5->mrm.base);
}
