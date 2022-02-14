
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ refcount; } ;
typedef TYPE_1__ UpVal ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (lua_State *VAR_0, UpVal *VAR_1) {
  FUNC_1(VAR_1->refcount > 0);
  VAR_1->refcount--;
  if (VAR_1->refcount == 0 && !FUNC_2(VAR_1))
    FUNC_0(VAR_0, VAR_1);
}
