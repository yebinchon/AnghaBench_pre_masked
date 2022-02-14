
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ top; int savedpc; int base; int ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_6__ {scalar_t__ func; int nresults; int savedpc; int base; } ;
typedef scalar_t__ StkId ;
typedef TYPE_2__ CallInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(lua_State*VAR_0,StkId VAR_1){
StkId VAR_2;
int VAR_3,VAR_4;
CallInfo*VAR_5;
VAR_5=VAR_0->ci--;
VAR_2=VAR_5->func;
VAR_3=VAR_5->nresults;
VAR_0->base=(VAR_5-1)->base;
VAR_0->savedpc=(VAR_5-1)->savedpc;
for(VAR_4=VAR_3;VAR_4!=0&&VAR_1<VAR_0->top;VAR_4--)
FUNC_1(VAR_0,VAR_2++,VAR_1++);
while(VAR_4-->0)
FUNC_0(VAR_2++);
VAR_0->top=VAR_2;
return(VAR_3-(-1));
}
