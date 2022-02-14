
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_14__ {TYPE_4__* tmudata; TYPE_1__* mainthread; } ;
typedef TYPE_3__ global_State ;
struct TYPE_16__ {int metatable; } ;
struct TYPE_13__ {TYPE_4__* next; } ;
struct TYPE_15__ {TYPE_2__ gch; } ;
struct TYPE_12__ {TYPE_4__* next; } ;
typedef TYPE_4__ GCObject ;


 TYPE_3__* FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static size_t FUNC_7(lua_State*VAR_1,int VAR_2){
global_State*VAR_3=FUNC_0(VAR_1);
size_t VAR_4=0;
GCObject**VAR_5=&VAR_3->mainthread->next;
GCObject*VAR_6;
while((VAR_6=*VAR_5)!=((void*)0)){
if(!(FUNC_4(VAR_6)||VAR_2)||FUNC_3(FUNC_2(VAR_6)))
VAR_5=&VAR_6->gch.next;
else if(FUNC_1(VAR_1,FUNC_2(VAR_6)->metatable,VAR_0)==((void*)0)){
FUNC_5(FUNC_2(VAR_6));
VAR_5=&VAR_6->gch.next;
}
else{
VAR_4+=FUNC_6(FUNC_2(VAR_6));
FUNC_5(FUNC_2(VAR_6));
*VAR_5=VAR_6->gch.next;
if(VAR_3->tmudata==((void*)0))
VAR_3->tmudata=VAR_6->gch.next=VAR_6;
else{
VAR_6->gch.next=VAR_3->tmudata->gch.next;
VAR_3->tmudata->gch.next=VAR_6;
VAR_3->tmudata=VAR_6;
}
}
}
return VAR_4;
}
