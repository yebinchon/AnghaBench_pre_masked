
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int extraline; int * f; } ;
typedef TYPE_1__ LoadF ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int * FUNC_4 (char const*,char*,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int * VAR_2 ;
 int FUNC_13 (int,int *) ;

__attribute__((used)) static int FUNC_14(lua_State*VAR_3,const char*VAR_4){
LoadF VAR_5;
int VAR_6,VAR_7;
int VAR_8;
int VAR_9=FUNC_6(VAR_3)+1;
VAR_5.extraline=0;
if(VAR_4==((void*)0)){
FUNC_9(VAR_3,"=stdin");
VAR_5.f=VAR_2;
}
else{
FUNC_8(VAR_3,"@%s",VAR_4);
VAR_5.f=FUNC_3(VAR_4,"r");
if(VAR_5.f==((void*)0))return FUNC_0(VAR_3,"open",VAR_9);
}
VAR_8=FUNC_5(VAR_5.f);
if(VAR_8=='#'){
VAR_5.extraline=1;
while((VAR_8=FUNC_5(VAR_5.f))!=VAR_0&&VAR_8!='\n');
if(VAR_8=='\n')VAR_8=FUNC_5(VAR_5.f);
}
if(VAR_8=="\033Lua"[0]&&VAR_4){
VAR_5.f=FUNC_4(VAR_4,"rb",VAR_5.f);
if(VAR_5.f==((void*)0))return FUNC_0(VAR_3,"reopen",VAR_9);
while((VAR_8=FUNC_5(VAR_5.f))!=VAR_0&&VAR_8!="\033Lua"[0]);
VAR_5.extraline=0;
}
FUNC_13(VAR_8,VAR_5.f);
VAR_6=FUNC_7(VAR_3,VAR_1,&VAR_5,FUNC_12(VAR_3,-1));
VAR_7=FUNC_2(VAR_5.f);
if(VAR_4)FUNC_1(VAR_5.f);
if(VAR_7){
FUNC_11(VAR_3,VAR_9);
return FUNC_0(VAR_3,"read",VAR_9);
}
FUNC_10(VAR_3,VAR_9);
return VAR_6;
}
