
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ total; } ;
struct TYPE_5__ {TYPE_1__ gc; int allocd; void* (* allocf ) (int ,void*,scalar_t__,scalar_t__) ;} ;
typedef TYPE_2__ global_State ;
typedef scalar_t__ GCSize ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ,void*,scalar_t__,scalar_t__) ;

void *FUNC_5(lua_State *VAR_0, void *VAR_1, GCSize VAR_2, GCSize VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_0);
  FUNC_3((VAR_2 == 0) == (VAR_1 == ((void*)0)));
  VAR_1 = VAR_4->allocf(VAR_4->allocd, VAR_1, VAR_2, VAR_3);
  if (VAR_1 == ((void*)0) && VAR_3 > 0)
    FUNC_2(VAR_0);
  FUNC_3((VAR_3 == 0) == (VAR_1 == ((void*)0)));
  FUNC_3(FUNC_1(VAR_1));
  VAR_4->gc.total = (VAR_4->gc.total - VAR_2) + VAR_3;
  return VAR_1;
}
