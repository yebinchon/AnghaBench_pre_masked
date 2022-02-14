
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_3__ {int tp; int ofs; } ;
typedef int TRef ;
typedef size_t MSize ;
typedef TYPE_1__ CRecMemList ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_3, CRecMemList *VAR_4, MSize VAR_5,
      TRef VAR_6, TRef VAR_7)
{
  MSize VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    TRef VAR_9 = FUNC_2(VAR_3, VAR_4[VAR_8].ofs);
    TRef VAR_10 = FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_6, VAR_9);
    FUNC_1(FUNC_0(VAR_2, VAR_4[VAR_8].tp), VAR_10, VAR_7);
  }
}
