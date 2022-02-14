
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uvhead; } ;
typedef TYPE_1__ global_State ;
typedef int GCupval ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(global_State *VAR_0)
{
  GCupval *VAR_1;
  for (VAR_1 = FUNC_4(&VAR_0->uvhead); VAR_1 != &VAR_0->uvhead; VAR_1 = FUNC_4(VAR_1)) {
    FUNC_2(FUNC_5(FUNC_4(VAR_1)) == VAR_1 && FUNC_4(FUNC_5(VAR_1)) == VAR_1);
    if (FUNC_1(FUNC_3(VAR_1)))
      FUNC_0(VAR_0, FUNC_6(VAR_1));
  }
}
