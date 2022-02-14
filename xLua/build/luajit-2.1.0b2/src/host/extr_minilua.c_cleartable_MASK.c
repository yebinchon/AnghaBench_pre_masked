
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizearray; int * gclist; int * array; int marked; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int Node ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(GCObject*VAR_0){
while(VAR_0){
Table*VAR_1=FUNC_0(VAR_0);
int VAR_2=VAR_1->sizearray;
if(FUNC_8(VAR_1->marked,4)){
while(VAR_2--){
TValue*VAR_3=&VAR_1->array[VAR_2];
if(FUNC_3(VAR_3,0))
FUNC_6(VAR_3);
}
}
VAR_2=FUNC_7(VAR_1);
while(VAR_2--){
Node*VAR_4=FUNC_1(VAR_1,VAR_2);
if(!FUNC_9(FUNC_2(VAR_4))&&
(FUNC_3(FUNC_4(VAR_4),1)||FUNC_3(FUNC_2(VAR_4),0))){
FUNC_6(FUNC_2(VAR_4));
FUNC_5(VAR_4);
}
}
VAR_0=VAR_1->gclist;
}
}
