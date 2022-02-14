
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int L; } ;
typedef TYPE_1__ jit_State ;
typedef int TValue ;
typedef int GCstr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static GCstr *FUNC_7(jit_State *VAR_1, TValue *VAR_2)
{
  if (FUNC_0(FUNC_6(VAR_2))) {
    return FUNC_4(VAR_2);
  } else {
    GCstr *VAR_3;
    if (!FUNC_5(VAR_2))
      FUNC_2(VAR_1, VAR_0);
    VAR_3 = FUNC_1(VAR_1->L, VAR_2);
    FUNC_3(VAR_1->L, VAR_2, VAR_3);
    return VAR_3;
  }
}
