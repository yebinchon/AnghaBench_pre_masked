
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int base; } ;
typedef TYPE_1__ lua_State ;
typedef int GCcdata ;
typedef int CTypeID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_1, CTypeID VAR_2, uint64_t VAR_3)
{
  GCcdata *VAR_4 = FUNC_2(VAR_1, VAR_2, 8);
  *(uint64_t *)FUNC_1(VAR_4) = VAR_3;
  FUNC_3(VAR_1, VAR_1->base-1-VAR_0, VAR_4);
  return FUNC_0(1);
}
