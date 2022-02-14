
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int currentline; char* namewhat; int * name; int nups; } ;
typedef TYPE_2__ lua_Debug ;
struct TYPE_9__ {int nupvalues; } ;
struct TYPE_11__ {TYPE_1__ c; } ;
typedef TYPE_3__ Closure ;
typedef int CallInfo ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(lua_State*VAR_0,const char*VAR_1,lua_Debug*VAR_2,
Closure*VAR_3,CallInfo*VAR_4){
int VAR_5=1;
if(VAR_3==((void*)0)){
FUNC_2(VAR_2);
return VAR_5;
}
for(;*VAR_1;VAR_1++){
switch(*VAR_1){
case'S':{
FUNC_1(VAR_2,VAR_3);
break;
}
case'l':{
VAR_2->currentline=(VAR_4)?FUNC_0(VAR_0,VAR_4):-1;
break;
}
case'u':{
VAR_2->nups=VAR_3->c.nupvalues;
break;
}
case'n':{
VAR_2->namewhat=(VAR_4)?((void*)0):((void*)0);
if(VAR_2->namewhat==((void*)0)){
VAR_2->namewhat="";
VAR_2->name=((void*)0);
}
break;
}
case'L':
case'f':
break;
default:VAR_5=0;
}
}
return VAR_5;
}
