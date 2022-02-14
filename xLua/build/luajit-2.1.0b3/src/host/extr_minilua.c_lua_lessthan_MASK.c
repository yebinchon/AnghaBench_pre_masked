
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * StkId ;


 int * FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(lua_State*VAR_1,int VAR_2,int VAR_3){
StkId VAR_4,VAR_5;
int VAR_6;
VAR_4=FUNC_0(VAR_1,VAR_2);
VAR_5=FUNC_0(VAR_1,VAR_3);
VAR_6=(VAR_4==(&VAR_0)||VAR_5==(&VAR_0))?0
:FUNC_1(VAR_1,VAR_4,VAR_5);
return VAR_6;
}
