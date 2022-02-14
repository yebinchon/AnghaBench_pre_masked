
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int int32_t ;
typedef int TValue ;
typedef int CTState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int32_t FUNC_5(lua_State *VAR_2, int VAR_3)
{
  CTState *VAR_4 = FUNC_1(VAR_2);
  TValue *VAR_5 = VAR_2->base + VAR_3-1;
  int32_t VAR_6;
  if (VAR_5 >= VAR_2->top)
    FUNC_4(VAR_2, VAR_3, VAR_1);
  FUNC_3(VAR_4, FUNC_2(VAR_4, VAR_0), (uint8_t *)&VAR_6, VAR_5,
   FUNC_0(VAR_3));
  return VAR_6;
}
