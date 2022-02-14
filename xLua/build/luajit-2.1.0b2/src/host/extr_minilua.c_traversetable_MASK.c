
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int weak; } ;
typedef TYPE_1__ global_State ;
struct TYPE_12__ {int marked; int sizearray; int * array; int gclist; scalar_t__ metatable; } ;
typedef TYPE_2__ Table ;
typedef int TValue ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (int ,char) ;
 int FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int const*) ;

__attribute__((used)) static int FUNC_15(global_State*VAR_1,Table*VAR_2){
int VAR_3;
int VAR_4=0;
int VAR_5=0;
const TValue*VAR_6;
if(VAR_2->metatable)
FUNC_6(VAR_1,VAR_2->metatable);
VAR_6=FUNC_2(VAR_1,VAR_2->metatable,VAR_0);
if(VAR_6&&FUNC_14(VAR_6)){
VAR_4=(FUNC_11(FUNC_12(VAR_6),'k')!=((void*)0));
VAR_5=(FUNC_11(FUNC_12(VAR_6),'v')!=((void*)0));
if(VAR_4||VAR_5){
VAR_2->marked&=~(FUNC_0(3)|FUNC_0(4));
VAR_2->marked|=FUNC_1((VAR_4<<3)|
(VAR_5<<4));
VAR_2->gclist=VAR_1->weak;
VAR_1->weak=FUNC_8(VAR_2);
}
}
if(VAR_4&&VAR_5)return 1;
if(!VAR_5){
VAR_3=VAR_2->sizearray;
while(VAR_3--)
FUNC_7(VAR_1,&VAR_2->array[VAR_3]);
}
VAR_3=FUNC_10(VAR_2);
while(VAR_3--){
Node*VAR_7=FUNC_4(VAR_2,VAR_3);
if(FUNC_13(FUNC_5(VAR_7)))
FUNC_9(VAR_7);
else{
if(!VAR_4)FUNC_7(VAR_1,FUNC_3(VAR_7));
if(!VAR_5)FUNC_7(VAR_1,FUNC_5(VAR_7));
}
}
return VAR_4||VAR_5;
}
