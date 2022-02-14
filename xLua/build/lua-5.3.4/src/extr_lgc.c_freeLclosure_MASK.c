
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int UpVal ;
struct TYPE_4__ {int nupvalues; int ** upvals; } ;
typedef TYPE_1__ LClosure ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_0, LClosure *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->nupvalues; VAR_2++) {
    UpVal *VAR_3 = VAR_1->upvals[VAR_2];
    if (VAR_3)
      FUNC_0(VAR_0, VAR_3);
  }
  FUNC_1(VAR_0, VAR_1, FUNC_2(VAR_1->nupvalues));
}
