
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ hi; } ;
struct TYPE_5__ {TYPE_1__ u32; } ;
typedef TYPE_2__ TValue ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(lua_Number VAR_0, int32_t *VAR_1)
{
  int32_t VAR_2 = FUNC_0(VAR_0);
  if (VAR_0 == (lua_Number)VAR_2) {
    if (VAR_1) *VAR_1 = VAR_2;
    if (VAR_2 == 0) {
      TValue VAR_3;
      FUNC_1(&VAR_3, VAR_0);
      if (VAR_3.u32.hi != 0)
 return 0;
    }
    return 1;
  }
  return 0;
}
