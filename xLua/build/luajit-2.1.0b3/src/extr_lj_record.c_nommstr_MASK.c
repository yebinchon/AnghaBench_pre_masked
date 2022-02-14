
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int jit_State ;
typedef int TRef ;
typedef int GCstr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(jit_State *VAR_1, TRef VAR_2)
{
  if (FUNC_5(VAR_2)) {
    if (FUNC_4(VAR_2)) {
      GCstr *VAR_3 = FUNC_2(FUNC_0(FUNC_6(VAR_2)));
      uint32_t VAR_4;
      for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++)
 if (FUNC_3(FUNC_1(VAR_1), VAR_4) == VAR_3)
   return 0;
    } else {
      return 0;
    }
  }
  return 1;
}
