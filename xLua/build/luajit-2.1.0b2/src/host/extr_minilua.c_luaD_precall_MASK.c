
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef int ptrdiff_t ;
struct TYPE_25__ {scalar_t__ top; int base; int savedpc; TYPE_1__* ci; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_28__ {int func; int base; int top; int nresults; scalar_t__ tailcalls; } ;
struct TYPE_27__ {TYPE_4__* p; int isC; } ;
struct TYPE_26__ {int maxstacksize; scalar_t__ numparams; int code; int is_vararg; } ;
struct TYPE_24__ {int (* f ) (TYPE_3__*) ;} ;
struct TYPE_23__ {int savedpc; } ;
struct TYPE_22__ {TYPE_5__ l; } ;
struct TYPE_21__ {TYPE_2__ c; } ;
typedef scalar_t__ StkId ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ LClosure ;
typedef TYPE_6__ CallInfo ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_18__* FUNC_2 (scalar_t__) ;
 TYPE_16__* FUNC_3 (TYPE_3__*) ;
 TYPE_6__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 void* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(lua_State*VAR_0,StkId VAR_1,int VAR_2){
LClosure*VAR_3;
ptrdiff_t VAR_4;
if(!FUNC_12(VAR_1))
VAR_1=FUNC_11(VAR_0,VAR_1);
VAR_4=FUNC_8(VAR_0,VAR_1);
VAR_3=&FUNC_2(VAR_1)->l;
VAR_0->ci->savedpc=VAR_0->savedpc;
if(!VAR_3->isC){
CallInfo*VAR_5;
StkId VAR_6,VAR_7;
Proto*VAR_8=VAR_3->p;
FUNC_5(VAR_0,VAR_8->maxstacksize);
VAR_1=FUNC_7(VAR_0,VAR_4);
if(!VAR_8->is_vararg){
VAR_7=VAR_1+1;
if(VAR_0->top>VAR_7+VAR_8->numparams)
VAR_0->top=VAR_7+VAR_8->numparams;
}
else{
int VAR_9=FUNC_1(VAR_0->top-VAR_1)-1;
VAR_7=FUNC_0(VAR_0,VAR_8,VAR_9);
VAR_1=FUNC_7(VAR_0,VAR_4);
}
VAR_5=FUNC_4(VAR_0);
VAR_5->func=VAR_1;
VAR_0->base=VAR_5->base=VAR_7;
VAR_5->top=VAR_0->base+VAR_8->maxstacksize;
VAR_0->savedpc=VAR_8->code;
VAR_5->tailcalls=0;
VAR_5->nresults=VAR_2;
for(VAR_6=VAR_0->top;VAR_6<VAR_5->top;VAR_6++)
FUNC_9(VAR_6);
VAR_0->top=VAR_5->top;
return 0;
}
else{
CallInfo*VAR_10;
int VAR_11;
FUNC_5(VAR_0,20);
VAR_10=FUNC_4(VAR_0);
VAR_10->func=FUNC_7(VAR_0,VAR_4);
VAR_0->base=VAR_10->base=VAR_10->func+1;
VAR_10->top=VAR_0->top+20;
VAR_10->nresults=VAR_2;
VAR_11=(*FUNC_3(VAR_0)->c.f)(VAR_0);
if(VAR_11<0)
return 2;
else{
FUNC_6(VAR_0,VAR_0->top-VAR_11);
return 1;
}
}
}
