
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {int numparams; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ Proto ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static StkId FUNC_2 (lua_State *VAR_0, Proto *VAR_1, int VAR_2) {
  int VAR_3;
  int VAR_4 = VAR_1->numparams;
  StkId VAR_5, VAR_6;

  VAR_6 = VAR_0->top - VAR_2;
  VAR_5 = VAR_0->top;
  for (VAR_3 = 0; VAR_3 < VAR_4 && VAR_3 < VAR_2; VAR_3++) {
    FUNC_1(VAR_0, VAR_0->top++, VAR_6 + VAR_3);
    FUNC_0(VAR_6 + VAR_3);
  }
  for (; VAR_3 < VAR_4; VAR_3++)
    FUNC_0(VAR_0->top++);
  return VAR_5;
}
