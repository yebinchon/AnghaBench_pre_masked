
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(lua_State*VAR_0,int VAR_1,int VAR_2){
StkId VAR_3;
FUNC_1(VAR_0,VAR_1+1);
FUNC_2(VAR_0,VAR_1,VAR_2);
VAR_3=VAR_0->top-(VAR_1+1);
FUNC_3(VAR_0,VAR_3,VAR_2);
FUNC_0(VAR_0,VAR_2);
}
