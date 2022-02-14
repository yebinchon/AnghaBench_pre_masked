
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_33__ {int stacksize; int size_ci; TYPE_8__* gclist; } ;
typedef TYPE_4__ lua_State ;
typedef int l_mem ;
struct TYPE_34__ {TYPE_8__* gray; TYPE_8__* grayagain; } ;
typedef TYPE_5__ global_State ;
struct TYPE_35__ {int sizearray; TYPE_8__* gclist; } ;
typedef TYPE_6__ Table ;
struct TYPE_32__ {int nupvalues; } ;
struct TYPE_31__ {int nupvalues; int isC; TYPE_8__* gclist; } ;
struct TYPE_38__ {TYPE_3__ l; TYPE_2__ c; } ;
struct TYPE_30__ {int tt; } ;
struct TYPE_37__ {TYPE_1__ gch; } ;
struct TYPE_36__ {int sizecode; int sizep; int sizek; int sizelineinfo; int sizelocvars; int sizeupvalues; TYPE_8__* gclist; } ;
typedef int TValue ;
typedef int TString ;
typedef TYPE_7__ Proto ;
typedef int Node ;
typedef int LocVar ;
typedef int Instruction ;
typedef TYPE_8__ GCObject ;
typedef TYPE_9__ Closure ;
typedef int CallInfo ;


 int FUNC_0 (TYPE_8__*) ;
 TYPE_9__* FUNC_1 (TYPE_8__*) ;
 TYPE_6__* FUNC_2 (TYPE_8__*) ;
 TYPE_7__* FUNC_3 (TYPE_8__*) ;
 TYPE_4__* FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_9__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static l_mem FUNC_13(global_State*VAR_0){
GCObject*VAR_1=VAR_0->gray;
FUNC_5(VAR_1);
switch(VAR_1->gch.tt){
case 5:{
Table*VAR_2=FUNC_2(VAR_1);
VAR_0->gray=VAR_2->gclist;
if(FUNC_12(VAR_0,VAR_2))
FUNC_0(VAR_1);
return sizeof(Table)+sizeof(TValue)*VAR_2->sizearray+
sizeof(Node)*FUNC_8(VAR_2);
}
case 6:{
Closure*VAR_3=FUNC_1(VAR_1);
VAR_0->gray=VAR_3->c.gclist;
FUNC_9(VAR_0,VAR_3);
return(VAR_3->c.isC)?FUNC_6(VAR_3->c.nupvalues):
FUNC_7(VAR_3->l.nupvalues);
}
case 8:{
lua_State*VAR_4=FUNC_4(VAR_1);
VAR_0->gray=VAR_4->gclist;
VAR_4->gclist=VAR_0->grayagain;
VAR_0->grayagain=VAR_1;
FUNC_0(VAR_1);
FUNC_11(VAR_0,VAR_4);
return sizeof(lua_State)+sizeof(TValue)*VAR_4->stacksize+
sizeof(CallInfo)*VAR_4->size_ci;
}
case(8+1):{
Proto*VAR_5=FUNC_3(VAR_1);
VAR_0->gray=VAR_5->gclist;
FUNC_10(VAR_0,VAR_5);
return sizeof(Proto)+sizeof(Instruction)*VAR_5->sizecode+
sizeof(Proto*)*VAR_5->sizep+
sizeof(TValue)*VAR_5->sizek+
sizeof(int)*VAR_5->sizelineinfo+
sizeof(LocVar)*VAR_5->sizelocvars+
sizeof(TString*)*VAR_5->sizeupvalues;
}
default:return 0;
}
}
