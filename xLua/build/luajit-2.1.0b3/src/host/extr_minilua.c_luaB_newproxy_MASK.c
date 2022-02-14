
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(lua_State*VAR_0){
FUNC_11(VAR_0,1);
FUNC_4(VAR_0,0);
if(FUNC_12(VAR_0,1)==0)
return 1;
else if(FUNC_2(VAR_0,1)){
FUNC_3(VAR_0);
FUNC_7(VAR_0,-1);
FUNC_6(VAR_0,1);
FUNC_9(VAR_0,FUNC_13(1));
}
else{
int VAR_1=0;
if(FUNC_1(VAR_0,1)){
FUNC_8(VAR_0,FUNC_13(1));
VAR_1=FUNC_12(VAR_0,-1);
FUNC_5(VAR_0,1);
}
FUNC_0(VAR_0,VAR_1,1,"boolean or proxy expected");
FUNC_1(VAR_0,1);
}
FUNC_10(VAR_0,2);
return 1;
}
