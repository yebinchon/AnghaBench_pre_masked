
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int memerrmsg; int ** strcache; } ;
typedef TYPE_1__ global_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1 (global_State *VAR_2) {
  int VAR_3, VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if (FUNC_0(VAR_2->strcache[VAR_3][VAR_4]))
      VAR_2->strcache[VAR_3][VAR_4] = VAR_2->memerrmsg;
    }
}
