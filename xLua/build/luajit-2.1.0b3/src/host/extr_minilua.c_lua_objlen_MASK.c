
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {size_t len; } ;
struct TYPE_3__ {size_t len; } ;
typedef int StkId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static size_t FUNC_7(lua_State*VAR_0,int VAR_1){
StkId VAR_2=FUNC_1(VAR_0,VAR_1);
switch(FUNC_5(VAR_2)){
case 4:return FUNC_4(VAR_2)->len;
case 7:return FUNC_6(VAR_2)->len;
case 5:return FUNC_2(FUNC_0(VAR_2));
case 3:{
size_t VAR_3;
VAR_3=(FUNC_3(VAR_0,VAR_2)?FUNC_4(VAR_2)->len:0);
return VAR_3;
}
default:return 0;
}
}
