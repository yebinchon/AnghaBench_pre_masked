
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int cTValue ;
typedef int TRef ;
typedef scalar_t__ IRType ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(jit_State *VAR_6, TRef VAR_7, TRef VAR_8, cTValue *VAR_9, cTValue *VAR_10)
{
  int VAR_11 = !FUNC_3(VAR_9, VAR_10);
  if (!FUNC_5(VAR_7, VAR_8)) {
    IRType VAR_12 = FUNC_4(VAR_7) ? VAR_1 : FUNC_6(VAR_7);
    IRType VAR_13 = FUNC_4(VAR_8) ? VAR_1 : FUNC_6(VAR_8);
    if (VAR_12 != VAR_13) {

      if (VAR_12 == VAR_1 && VAR_13 == VAR_2) {
 VAR_7 = FUNC_2(FUNC_1(VAR_3), VAR_7, VAR_0);
 VAR_12 = VAR_2;
      } else if (VAR_12 == VAR_2 && VAR_13 == VAR_1) {
 VAR_8 = FUNC_2(FUNC_1(VAR_3), VAR_8, VAR_0);
      } else {
 return 2;
      }
    }
    FUNC_2(FUNC_0(VAR_11 ? VAR_5 : VAR_4, VAR_12), VAR_7, VAR_8);
  }
  return VAR_11;
}
