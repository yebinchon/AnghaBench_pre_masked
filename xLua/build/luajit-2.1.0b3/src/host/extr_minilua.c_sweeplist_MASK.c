
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
struct TYPE_14__ {TYPE_3__* rootgc; } ;
typedef TYPE_2__ global_State ;
struct TYPE_16__ {int openupval; } ;
struct TYPE_13__ {int tt; int marked; TYPE_3__* next; } ;
struct TYPE_15__ {TYPE_1__ gch; } ;
typedef TYPE_3__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_9__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static GCObject**FUNC_7(lua_State*VAR_0,GCObject**VAR_1,lu_mem VAR_2){
GCObject*VAR_3;
global_State*VAR_4=FUNC_0(VAR_0);
int VAR_5=FUNC_5(VAR_4);
while((VAR_3=*VAR_1)!=((void*)0)&&VAR_2-->0){
if(VAR_3->gch.tt==8)
FUNC_6(VAR_0,&FUNC_3(VAR_3)->openupval);
if((VAR_3->gch.marked^FUNC_1(0,1))&VAR_5){
FUNC_4(VAR_4,VAR_3);
VAR_1=&VAR_3->gch.next;
}
else{
*VAR_1=VAR_3->gch.next;
if(VAR_3==VAR_4->rootgc)
VAR_4->rootgc=VAR_3->gch.next;
FUNC_2(VAR_0,VAR_3);
}
}
return VAR_1;
}
