
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ errfunc; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(lua_State*VAR_0){
if(VAR_0->errfunc!=0){
StkId VAR_1=FUNC_3(VAR_0,VAR_0->errfunc);
if(!FUNC_5(VAR_1))FUNC_2(VAR_0,5);
FUNC_4(VAR_0,VAR_0->top,VAR_0->top-1);
FUNC_4(VAR_0,VAR_0->top-1,VAR_1);
FUNC_0(VAR_0);
FUNC_1(VAR_0,VAR_0->top-2,1);
}
FUNC_2(VAR_0,2);
}
