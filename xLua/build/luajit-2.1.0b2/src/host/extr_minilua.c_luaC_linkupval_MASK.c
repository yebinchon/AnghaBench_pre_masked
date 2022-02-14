
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_15__ {int gcstate; TYPE_4__* rootgc; } ;
typedef TYPE_2__ global_State ;
struct TYPE_16__ {int v; } ;
typedef TYPE_3__ UpVal ;
struct TYPE_14__ {TYPE_4__* next; } ;
struct TYPE_17__ {TYPE_1__ gch; } ;
typedef TYPE_4__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(lua_State*VAR_0,UpVal*VAR_1){
global_State*VAR_2=FUNC_0(VAR_0);
GCObject*VAR_3=FUNC_5(VAR_1);
VAR_3->gch.next=VAR_2->rootgc;
VAR_2->rootgc=VAR_3;
if(FUNC_2(VAR_3)){
if(VAR_2->gcstate==1){
FUNC_1(VAR_3);
FUNC_3(VAR_0,VAR_1,VAR_1->v);
}
else{
FUNC_4(VAR_2,VAR_3);
}
}
}
