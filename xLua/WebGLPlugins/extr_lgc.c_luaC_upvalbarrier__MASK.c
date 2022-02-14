
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int global_State ;
struct TYPE_4__ {int v; } ;
typedef TYPE_1__ UpVal ;
typedef int GCObject ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6 (lua_State *VAR_0, UpVal *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_0);
  GCObject *VAR_3 = FUNC_1(VAR_1->v);
  FUNC_3(!FUNC_5(VAR_1));
  if (FUNC_2(VAR_2))
    FUNC_4(VAR_2, VAR_3);
}
