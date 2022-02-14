
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * f; } ;
typedef TYPE_1__ LStream ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static FILE *FUNC_4 (lua_State *VAR_0) {
  LStream *VAR_1 = FUNC_3(VAR_0);
  if (FUNC_0(VAR_1))
    FUNC_1(VAR_0, "attempt to use a closed file");
  FUNC_2(VAR_1->f);
  return VAR_1->f;
}
