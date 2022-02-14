
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int metatable; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int StkId ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int const*,int const*,int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int const*,char*) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *,int ,int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;

__attribute__((used)) static void FUNC_11(lua_State*VAR_1,const TValue*VAR_2,TValue*VAR_3,StkId VAR_4){
int VAR_5;
for(VAR_5=0;VAR_5<100;VAR_5++){
const TValue*VAR_6;
if(FUNC_10(VAR_2)){
Table*VAR_7=FUNC_2(VAR_2);
const TValue*VAR_8=FUNC_5(VAR_7,VAR_3);
if(!FUNC_9(VAR_8)||
(VAR_6=FUNC_1(VAR_1,VAR_7->metatable,VAR_0))==((void*)0)){
FUNC_7(VAR_1,VAR_4,VAR_8);
return;
}
}
else if(FUNC_9(VAR_6=FUNC_6(VAR_1,VAR_2,VAR_0)))
FUNC_4(VAR_1,VAR_2,"index");
if(FUNC_8(VAR_6)){
FUNC_0(VAR_1,VAR_4,VAR_6,VAR_2,VAR_3);
return;
}
VAR_2=VAR_6;
}
FUNC_3(VAR_1,"loop in gettable");
}
