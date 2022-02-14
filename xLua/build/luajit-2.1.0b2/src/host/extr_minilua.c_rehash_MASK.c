
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Table ;
typedef int TValue ;


 int FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (int const*,int*) ;
 int FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *,int *,int,int) ;

__attribute__((used)) static void FUNC_5(lua_State*VAR_0,Table*VAR_1,const TValue*VAR_2){
int VAR_3,VAR_4;
int VAR_5[(32-2)+1];
int VAR_6;
int VAR_7;
for(VAR_6=0;VAR_6<=(32-2);VAR_6++)VAR_5[VAR_6]=0;
VAR_3=FUNC_2(VAR_1,VAR_5);
VAR_7=VAR_3;
VAR_7+=FUNC_3(VAR_1,VAR_5,&VAR_3);
VAR_3+=FUNC_1(VAR_2,VAR_5);
VAR_7++;
VAR_4=FUNC_0(VAR_5,&VAR_3);
FUNC_4(VAR_0,VAR_1,VAR_3,VAR_7-VAR_4);
}
