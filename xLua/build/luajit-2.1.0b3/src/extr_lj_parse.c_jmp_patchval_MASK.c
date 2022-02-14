
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FuncState ;
typedef int BCReg ;
typedef scalar_t__ BCPos ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(FuncState *VAR_1, BCPos VAR_2, BCPos VAR_3,
    BCReg VAR_4, BCPos VAR_5)
{
  while (VAR_2 != VAR_0) {
    BCPos VAR_6 = FUNC_0(VAR_1, VAR_2);
    if (FUNC_2(VAR_1, VAR_2, VAR_4))
      FUNC_1(VAR_1, VAR_2, VAR_3);
    else
      FUNC_1(VAR_1, VAR_2, VAR_5);
    VAR_2 = VAR_6;
  }
}
