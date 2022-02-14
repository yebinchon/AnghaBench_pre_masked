
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* ptrdiff_t ;
struct TYPE_12__ {unsigned short nCcalls; void* errfunc; int allowhook; TYPE_3__* ci; int savedpc; int base; } ;
typedef TYPE_1__ lua_State ;
typedef int lu_byte ;
struct TYPE_13__ {int savedpc; int base; } ;
typedef int StkId ;
typedef int Pfunc ;


 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 void* FUNC_6 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(lua_State*VAR_0,Pfunc VAR_1,void*VAR_2,
ptrdiff_t VAR_3,ptrdiff_t VAR_4){
int VAR_5;
unsigned short VAR_6=VAR_0->nCcalls;
ptrdiff_t VAR_7=FUNC_6(VAR_0,VAR_0->ci);
lu_byte VAR_8=VAR_0->allowhook;
ptrdiff_t VAR_9=VAR_0->errfunc;
VAR_0->errfunc=VAR_4;
VAR_5=FUNC_0(VAR_0,VAR_1,VAR_2);
if(VAR_5!=0){
StkId VAR_10=FUNC_5(VAR_0,VAR_3);
FUNC_2(VAR_0,VAR_10);
FUNC_1(VAR_0,VAR_5,VAR_10);
VAR_0->nCcalls=VAR_6;
VAR_0->ci=FUNC_4(VAR_0,VAR_7);
VAR_0->base=VAR_0->ci->base;
VAR_0->savedpc=VAR_0->ci->savedpc;
VAR_0->allowhook=VAR_8;
FUNC_3(VAR_0);
}
VAR_0->errfunc=VAR_9;
return VAR_5;
}
