
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {TYPE_4__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_14__ {int base; } ;
struct TYPE_15__ {TYPE_1__ l; } ;
struct TYPE_17__ {TYPE_2__ u; } ;
struct TYPE_13__ {int p; } ;
typedef int TValue ;
typedef TYPE_4__ CallInfo ;


 int FUNC_0 (int const*) ;
 TYPE_11__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (int ,int ,int ,char const**) ;
 char* FUNC_4 (TYPE_4__*,int const*,char const**) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int const*) ;
 char const* FUNC_7 (TYPE_3__*,char*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_8 (lua_State *VAR_0, const TValue *VAR_1) {
  const char *VAR_2 = ((void*)0);
  CallInfo *VAR_3 = VAR_0->ci;
  const char *VAR_4 = ((void*)0);
  if (FUNC_5(VAR_3)) {
    VAR_4 = FUNC_4(VAR_3, VAR_1, &VAR_2);
    if (!VAR_4 && FUNC_6(VAR_3, VAR_1))
      VAR_4 = FUNC_3(FUNC_1(VAR_3)->p, FUNC_2(VAR_3),
                        FUNC_0(VAR_1 - VAR_3->u.l.base), &VAR_2);
  }
  return (VAR_4) ? FUNC_7(VAR_0, " (%s '%s')", VAR_4, VAR_2) : "";
}
