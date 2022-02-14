
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int CTypeID ;
typedef int CTState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void *FUNC_5(lua_State *VAR_1, int VAR_2, CTypeID VAR_3)
{
  CTState *VAR_4 = FUNC_1(VAR_1);
  TValue *VAR_5 = VAR_1->base + VAR_2-1;
  void *VAR_6;
  if (VAR_5 >= VAR_1->top)
    FUNC_4(VAR_1, VAR_2, VAR_0);
  FUNC_3(VAR_4, FUNC_2(VAR_4, VAR_3), (uint8_t *)&VAR_6, VAR_5, FUNC_0(VAR_2));
  return VAR_6;
}
