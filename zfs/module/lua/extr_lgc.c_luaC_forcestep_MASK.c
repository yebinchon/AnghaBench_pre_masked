
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ gcstate; scalar_t__ tobefnz; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void FUNC_5 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  int VAR_4;
  if (FUNC_4(VAR_3)) FUNC_2(VAR_2);
  else FUNC_3(VAR_2);

  for (VAR_4 = 0; VAR_3->tobefnz && (VAR_4 < VAR_0 || VAR_3->gcstate == VAR_1); VAR_4++)
    FUNC_1(VAR_2, 1);
}
