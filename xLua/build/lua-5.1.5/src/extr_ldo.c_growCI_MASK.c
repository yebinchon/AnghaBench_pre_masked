
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size_ci; int * ci; } ;
typedef TYPE_1__ lua_State ;
typedef int CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static CallInfo *FUNC_3 (lua_State *VAR_2) {
  if (VAR_2->size_ci > VAR_0)
    FUNC_1(VAR_2, VAR_1);
  else {
    FUNC_0(VAR_2, 2*VAR_2->size_ci);
    if (VAR_2->size_ci > VAR_0)
      FUNC_2(VAR_2, "stack overflow");
  }
  return ++VAR_2->ci;
}
