
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_3__ {scalar_t__ tp; void* trval; void* trofs; int ofs; } ;
typedef void* TRef ;
typedef size_t MSize ;
typedef TYPE_1__ CRecMemList ;


 size_t VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int ,void*,void*) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(jit_State *VAR_7, CRecMemList *VAR_8, MSize VAR_9,
      TRef VAR_10, TRef VAR_11)
{
  MSize VAR_12, VAR_13, VAR_14 = 0;
  for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_9; ) {
    TRef VAR_15 = FUNC_2(VAR_7, VAR_8[VAR_12].ofs);
    TRef VAR_16 = FUNC_1(FUNC_0(VAR_3, VAR_2), VAR_11, VAR_15);
    VAR_8[VAR_12].trval = FUNC_1(FUNC_0(VAR_4, VAR_8[VAR_12].tp), VAR_16, 0);
    VAR_8[VAR_12].trofs = VAR_15;
    VAR_12++;
    VAR_14 += (VAR_6 && VAR_8[VAR_12].tp == VAR_1) ? 2 : 1;
    if (VAR_14 >= VAR_0 || VAR_12 >= VAR_9) {
      VAR_14 = 0;
      for ( ; VAR_13 < VAR_12; VAR_13++) {
 TRef VAR_17 = FUNC_1(FUNC_0(VAR_3, VAR_2), VAR_10, VAR_8[VAR_13].trofs);
 FUNC_1(FUNC_0(VAR_5, VAR_8[VAR_13].tp), VAR_17, VAR_8[VAR_13].trval);
      }
    }
  }
}
