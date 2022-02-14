
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_5__ {int nupvalues; int * upvals; int p; } ;
struct TYPE_6__ {int nupvalues; int * upvalue; scalar_t__ isC; int env; } ;
struct TYPE_7__ {TYPE_1__ l; TYPE_2__ c; } ;
typedef TYPE_3__ Closure ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(global_State*VAR_0,Closure*VAR_1){
FUNC_0(VAR_0,VAR_1->c.env);
if(VAR_1->c.isC){
int VAR_2;
for(VAR_2=0;VAR_2<VAR_1->c.nupvalues;VAR_2++)
FUNC_1(VAR_0,&VAR_1->c.upvalue[VAR_2]);
}
else{
int VAR_3;
FUNC_0(VAR_0,VAR_1->l.p);
for(VAR_3=0;VAR_3<VAR_1->l.nupvalues;VAR_3++)
FUNC_0(VAR_0,VAR_1->l.upvals[VAR_3]);
}
}
