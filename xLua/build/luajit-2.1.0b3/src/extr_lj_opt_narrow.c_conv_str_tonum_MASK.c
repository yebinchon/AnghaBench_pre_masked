
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jit_State ;
typedef int TValue ;
typedef int TRef ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static TRef FUNC_6(jit_State *VAR_3, TRef VAR_4, TValue *VAR_5)
{
  if (FUNC_5(VAR_4)) {
    VAR_4 = FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_4, 0);

    if (!FUNC_2(FUNC_4(VAR_5), VAR_5))
      FUNC_3(VAR_3, VAR_2);
  }
  return VAR_4;
}
