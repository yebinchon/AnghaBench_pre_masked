
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int Table ;
struct TYPE_4__ {int * metatable; } ;
struct TYPE_3__ {int * metatable; } ;
typedef int TValue ;


 char const* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 char const* FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int const*) ;

const char *FUNC_11 (lua_State *VAR_0, const TValue *VAR_1) {
  Table *VAR_2;
  if ((FUNC_7(VAR_1) && (VAR_2 = FUNC_1(VAR_1)->metatable) != ((void*)0)) ||
      (FUNC_5(VAR_1) && (VAR_2 = FUNC_10(VAR_1)->metatable) != ((void*)0))) {
    const TValue *VAR_3 = FUNC_2(VAR_2, FUNC_3(VAR_0, "__name"));
    if (FUNC_6(VAR_3))
      return FUNC_0(FUNC_4(VAR_3));
  }
  return FUNC_9(FUNC_8(VAR_1));
}
