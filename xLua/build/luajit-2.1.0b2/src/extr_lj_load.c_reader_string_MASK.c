
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {size_t size; char const* str; } ;
typedef TYPE_1__ StringReaderCtx ;


 int FUNC_0 (int *) ;

__attribute__((used)) static const char *FUNC_1(lua_State *VAR_0, void *VAR_1, size_t *VAR_2)
{
  StringReaderCtx *VAR_3 = (StringReaderCtx *)VAR_1;
  FUNC_0(VAR_0);
  if (VAR_3->size == 0) return ((void*)0);
  *VAR_2 = VAR_3->size;
  VAR_3->size = 0;
  return VAR_3->str;
}
