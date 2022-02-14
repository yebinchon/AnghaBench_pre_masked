
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int * lua_CFunction ;
struct TYPE_5__ {int pt; int sb; } ;
typedef int TValue ;
typedef TYPE_1__ BCWriteCtx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static TValue *FUNC_5(lua_State *VAR_0, lua_CFunction VAR_1, void *VAR_2)
{
  BCWriteCtx *VAR_3 = (BCWriteCtx *)VAR_2;
  FUNC_0(VAR_0); FUNC_0(VAR_1);
  FUNC_4(&VAR_3->sb, 1024);
  FUNC_2(VAR_3);
  FUNC_3(VAR_3, VAR_3->pt);
  FUNC_1(VAR_3);
  return ((void*)0);
}
