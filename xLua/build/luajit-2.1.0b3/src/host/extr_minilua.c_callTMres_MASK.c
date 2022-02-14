
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_8__ {int const* top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int const* StkId ;


 int FUNC_0 (TYPE_1__*,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int const* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int const*,int const*) ;

__attribute__((used)) static void FUNC_5(lua_State*VAR_0,StkId VAR_1,const TValue*VAR_2,
const TValue*VAR_3,const TValue*VAR_4){
ptrdiff_t VAR_5=FUNC_3(VAR_0,VAR_1);
FUNC_4(VAR_0,VAR_0->top,VAR_2);
FUNC_4(VAR_0,VAR_0->top+1,VAR_3);
FUNC_4(VAR_0,VAR_0->top+2,VAR_4);
FUNC_1(VAR_0,3);
VAR_0->top+=3;
FUNC_0(VAR_0,VAR_0->top-3,1);
VAR_1=FUNC_2(VAR_0,VAR_5);
VAR_0->top--;
FUNC_4(VAR_0,VAR_1,VAR_0->top);
}
