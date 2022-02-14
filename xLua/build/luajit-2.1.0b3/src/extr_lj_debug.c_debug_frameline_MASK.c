
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int cTValue ;
struct TYPE_4__ {scalar_t__ sizebc; } ;
typedef TYPE_1__ GCproto ;
typedef int GCfunc ;
typedef scalar_t__ BCPos ;
typedef int BCLine ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static BCLine FUNC_4(lua_State *VAR_1, GCfunc *VAR_2, cTValue *VAR_3)
{
  BCPos VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 != VAR_0) {
    GCproto *VAR_5 = FUNC_1(VAR_2);
    FUNC_3(VAR_4 <= VAR_5->sizebc);
    return FUNC_2(VAR_5, VAR_4);
  }
  return -1;
}
