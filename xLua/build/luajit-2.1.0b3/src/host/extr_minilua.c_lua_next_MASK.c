
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
int VAR_3;
VAR_2=FUNC_2(VAR_0,VAR_1);
FUNC_4(VAR_0,FUNC_5(VAR_2));
VAR_3=FUNC_3(VAR_0,FUNC_1(VAR_2),VAR_0->top-1);
if(VAR_3){
FUNC_0(VAR_0);
}
else
VAR_0->top-=1;
return VAR_3;
}
