
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int l_mem ;
struct TYPE_5__ {int size; int * hash; } ;
struct TYPE_6__ {int gcstate; int totalbytes; int estimate; int gcdept; int tmudata; int ** sweepgc; TYPE_1__ strt; int sweepstrgc; int gray; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int ** FUNC_6 (int *,int **,int) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static l_mem FUNC_8(lua_State*VAR_0){
global_State*VAR_1=FUNC_0(VAR_0);
switch(VAR_1->gcstate){
case 0:{
FUNC_4(VAR_0);
return 0;
}
case 1:{
if(VAR_1->gray)
return FUNC_5(VAR_1);
else{
FUNC_2(VAR_0);
return 0;
}
}
case 2:{
lu_mem VAR_2=VAR_1->totalbytes;
FUNC_7(VAR_0,&VAR_1->strt.hash[VAR_1->sweepstrgc++]);
if(VAR_1->sweepstrgc>=VAR_1->strt.size)
VAR_1->gcstate=3;
VAR_1->estimate-=VAR_2-VAR_1->totalbytes;
return 10;
}
case 3:{
lu_mem VAR_3=VAR_1->totalbytes;
VAR_1->sweepgc=FUNC_6(VAR_0,VAR_1->sweepgc,40);
if(*VAR_1->sweepgc==((void*)0)){
FUNC_3(VAR_0);
VAR_1->gcstate=4;
}
VAR_1->estimate-=VAR_3-VAR_1->totalbytes;
return 40*10;
}
case 4:{
if(VAR_1->tmudata){
FUNC_1(VAR_0);
if(VAR_1->estimate>100)
VAR_1->estimate-=100;
return 100;
}
else{
VAR_1->gcstate=0;
VAR_1->gcdept=0;
return 0;
}
}
default:return 0;
}
}
