
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* tmudata; } ;
typedef TYPE_2__ global_State ;
struct TYPE_9__ {TYPE_3__* next; } ;
struct TYPE_11__ {TYPE_1__ gch; } ;
typedef TYPE_3__ GCObject ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(global_State*VAR_0){
GCObject*VAR_1=VAR_0->tmudata;
if(VAR_1){
do{
VAR_1=VAR_1->gch.next;
FUNC_0(VAR_0,VAR_1);
FUNC_1(VAR_0,VAR_1);
}while(VAR_1!=VAR_0->tmudata);
}
}
