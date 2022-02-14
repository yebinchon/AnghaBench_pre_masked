
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; int op1; int r; } ;
typedef int RegSet ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int * VAR_10 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(ASMState *VAR_11, IRIns *VAR_12)
{

  const CCallInfo *VAR_13 = &VAR_10[VAR_2];
  IRRef VAR_14[2];
  RegSet VAR_15 = VAR_7;
  if ((VAR_15 & VAR_6) != VAR_6 && FUNC_5(VAR_12->r))
    FUNC_7(VAR_15, VAR_12->r);
  FUNC_4(VAR_11, VAR_15);
  FUNC_1(VAR_11, VAR_1);
  FUNC_3(VAR_11, VAR_9, VAR_5, VAR_5);
  VAR_14[0] = VAR_12->op1;
  VAR_14[1] = VAR_0;
  FUNC_0(VAR_11, VAR_13, VAR_14);

  FUNC_2(VAR_11, VAR_8, FUNC_6(VAR_11, VAR_0)|VAR_3,
     VAR_4, FUNC_8(VAR_12->s));
}
