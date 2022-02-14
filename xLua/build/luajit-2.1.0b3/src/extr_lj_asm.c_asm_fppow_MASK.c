
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IRRef ;
typedef int IRIns ;
typedef int CCallInfo ;
typedef int ASMState ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int *,int const*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_2, IRIns *VAR_3, IRRef VAR_4, IRRef VAR_5)
{
  const CCallInfo *VAR_6 = &VAR_1[VAR_0];
  IRRef VAR_7[2];
  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_5;
  FUNC_1(VAR_2, VAR_3, VAR_6);
  FUNC_0(VAR_2, VAR_6, VAR_7);
}
