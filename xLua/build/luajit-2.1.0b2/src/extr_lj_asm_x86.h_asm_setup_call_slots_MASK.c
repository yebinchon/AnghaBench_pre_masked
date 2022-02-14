
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int evenspill; } ;
struct TYPE_8__ {int t; } ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*,int *) ;
 int FUNC_2 (TYPE_2__*,int const*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static Reg FUNC_4(ASMState *VAR_4, IRIns *VAR_5, const CCallInfo *VAR_6)
{
  IRRef VAR_7[VAR_0*2];
  int VAR_8;
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);
  if (VAR_8 > VAR_4->evenspill)
    VAR_4->evenspill = VAR_8;



  return FUNC_3(VAR_5->t) ? VAR_1 : FUNC_0(VAR_3);

}
