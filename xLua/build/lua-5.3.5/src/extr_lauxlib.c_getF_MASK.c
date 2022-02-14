
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {size_t n; char const* buff; int f; } ;
typedef TYPE_1__ LoadF ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (char const*,int,int,int ) ;

__attribute__((used)) static const char *FUNC_2 (lua_State *VAR_0, void *VAR_1, size_t *VAR_2) {
  LoadF *VAR_3 = (LoadF *)VAR_1;
  (void)VAR_0;
  if (VAR_3->n > 0) {
    *VAR_2 = VAR_3->n;
    VAR_3->n = 0;
  }
  else {



    if (FUNC_0(VAR_3->f)) return ((void*)0);
    *VAR_2 = FUNC_1(VAR_3->buff, 1, sizeof(VAR_3->buff), VAR_3->f);
  }
  return VAR_3->buff;
}
