
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef void Udata ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (TYPE_1__*,size_t,int ) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static void*FUNC_5(lua_State*VAR_0,size_t VAR_1){
Udata*VAR_2;
FUNC_2(VAR_0);
VAR_2=FUNC_3(VAR_0,VAR_1,FUNC_1(VAR_0));
FUNC_4(VAR_0,VAR_0->top,VAR_2);
FUNC_0(VAR_0);
return VAR_2+1;
}
