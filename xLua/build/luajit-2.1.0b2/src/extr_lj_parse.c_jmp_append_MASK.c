
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FuncState ;
typedef scalar_t__ BCPos ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(FuncState *VAR_1, BCPos *VAR_2, BCPos VAR_3)
{
  if (VAR_3 == VAR_0) {
    return;
  } else if (*VAR_2 == VAR_0) {
    *VAR_2 = VAR_3;
  } else {
    BCPos VAR_4 = *VAR_2;
    BCPos VAR_5;
    while ((VAR_5 = FUNC_0(VAR_1, VAR_4)) != VAR_0)
      VAR_4 = VAR_5;
    FUNC_1(VAR_1, VAR_4, VAR_3);
  }
}
