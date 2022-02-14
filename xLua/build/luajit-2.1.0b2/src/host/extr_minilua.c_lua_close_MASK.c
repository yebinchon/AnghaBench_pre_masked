
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ baseCcalls; scalar_t__ nCcalls; TYPE_1__* ci; int top; int base; TYPE_1__* base_ci; scalar_t__ errfunc; int stack; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_12__ {TYPE_2__* mainthread; } ;
struct TYPE_10__ {int base; } ;


 TYPE_8__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5(lua_State*VAR_1){
VAR_1=FUNC_0(VAR_1)->mainthread;
FUNC_4(VAR_1,VAR_1->stack);
FUNC_2(VAR_1,1);
VAR_1->errfunc=0;
do{
VAR_1->ci=VAR_1->base_ci;
VAR_1->base=VAR_1->top=VAR_1->ci->base;
VAR_1->nCcalls=VAR_1->baseCcalls=0;
}while(FUNC_3(VAR_1,VAR_0,((void*)0))!=0);
FUNC_1(VAR_1);
}
