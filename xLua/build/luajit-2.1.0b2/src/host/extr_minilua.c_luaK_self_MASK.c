
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int info; } ;
struct TYPE_16__ {TYPE_2__ s; } ;
struct TYPE_18__ {int k; TYPE_1__ u; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_19__ {int freereg; } ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,int,int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_5(FuncState*VAR_2,expdesc*VAR_3,expdesc*VAR_4){
int VAR_5;
FUNC_3(VAR_2,VAR_3);
FUNC_0(VAR_2,VAR_3);
VAR_5=VAR_2->freereg;
FUNC_4(VAR_2,2);
FUNC_1(VAR_2,VAR_0,VAR_5,VAR_3->u.s.info,FUNC_2(VAR_2,VAR_4));
FUNC_0(VAR_2,VAR_4);
VAR_3->u.s.info=VAR_5;
VAR_3->k=VAR_1;
}
