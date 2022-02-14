
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_6__ {int callstatus; struct TYPE_6__* previous; } ;
typedef TYPE_2__ CallInfo ;


 int VAR_0 ;

__attribute__((used)) static CallInfo *FUNC_0 (lua_State *VAR_1) {
  CallInfo *VAR_2;
  for (VAR_2 = VAR_1->ci; VAR_2 != ((void*)0); VAR_2 = VAR_2->previous) {
    if (VAR_2->callstatus & VAR_0)
      return VAR_2;
  }
  return ((void*)0);
}
