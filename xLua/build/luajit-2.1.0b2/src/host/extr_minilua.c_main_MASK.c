
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *,int) ;
 int VAR_1 ;

int FUNC_12(int VAR_2,char**VAR_3){
lua_State*VAR_4=FUNC_2();
int VAR_5;
FUNC_3(VAR_4);
FUNC_4(VAR_4,"bit",VAR_0);
if(VAR_2<2)return sizeof(void*);
FUNC_6(VAR_4,0,1);
FUNC_8(VAR_4,VAR_3[1]);
FUNC_9(VAR_4,-2,0);
FUNC_10(VAR_4,"arg");
if(FUNC_1(VAR_4,VAR_3[1]))
goto err;
for(VAR_5=2;VAR_5<VAR_2;VAR_5++)
FUNC_8(VAR_4,VAR_3[VAR_5]);
if(FUNC_7(VAR_4,VAR_2-2,0,0)){
err:
FUNC_0(VAR_1,"Error: %s\n",FUNC_11(VAR_4,-1));
return 1;
}
FUNC_5(VAR_4);
return 0;
}
