
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char const*) ;
 void* FUNC_1 (int *,void*,int,int,size_t) ;

__attribute__((used)) static void*FUNC_2(lua_State*VAR_0,void*VAR_1,int*VAR_2,size_t VAR_3,
int VAR_4,const char*VAR_5){
void*VAR_6;
int VAR_7;
if(*VAR_2>=VAR_4/2){
if(*VAR_2>=VAR_4)
FUNC_0(VAR_0,VAR_5);
VAR_7=VAR_4;
}
else{
VAR_7=(*VAR_2)*2;
if(VAR_7<4)
VAR_7=4;
}
VAR_6=FUNC_1(VAR_0,VAR_1,*VAR_2,VAR_7,VAR_3);
*VAR_2=VAR_7;
return VAR_6;
}
