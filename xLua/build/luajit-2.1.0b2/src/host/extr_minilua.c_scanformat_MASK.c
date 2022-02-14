
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (char*,char const) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const) ;

__attribute__((used)) static const char*FUNC_5(lua_State*VAR_0,const char*VAR_1,char*VAR_2){
const char*VAR_3=VAR_1;
while(*VAR_3!='\0'&&FUNC_2("-+ #0",*VAR_3)!=((void*)0))VAR_3++;
if((size_t)(VAR_3-VAR_1)>=sizeof("-+ #0"))
FUNC_1(VAR_0,"invalid format (repeated flags)");
if(FUNC_0(FUNC_4(*VAR_3)))VAR_3++;
if(FUNC_0(FUNC_4(*VAR_3)))VAR_3++;
if(*VAR_3=='.'){
VAR_3++;
if(FUNC_0(FUNC_4(*VAR_3)))VAR_3++;
if(FUNC_0(FUNC_4(*VAR_3)))VAR_3++;
}
if(FUNC_0(FUNC_4(*VAR_3)))
FUNC_1(VAR_0,"invalid format (width or precision too long)");
*(VAR_2++)='%';
FUNC_3(VAR_2,VAR_1,VAR_3-VAR_1+1);
VAR_2+=VAR_3-VAR_1+1;
*VAR_2='\0';
return VAR_3;
}
