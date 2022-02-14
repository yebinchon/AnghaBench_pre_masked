
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int needsnap; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
typedef int cTValue ;
typedef scalar_t__ TRef ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(jit_State *VAR_2, TRef VAR_3, TRef VAR_4, cTValue *VAR_5)
{
  if (FUNC_6(VAR_5)) {
    if (!VAR_4) VAR_4 = FUNC_4(VAR_2, FUNC_0(VAR_5));
  } else if (FUNC_7(VAR_5)) {
    VAR_4 = FUNC_4(VAR_2, ((void*)0));
  } else {
    FUNC_5(VAR_2, VAR_1);
  }
  FUNC_2(VAR_2, VAR_0, VAR_3,
      VAR_4, FUNC_3(VAR_2, (int32_t)FUNC_1(VAR_5)));
  VAR_2->needsnap = 1;
}
