
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int info; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int Instruction ;
typedef int FuncState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(FuncState*VAR_0,expdesc*VAR_1){
Instruction*VAR_2=FUNC_2(VAR_0,VAR_1->u.s.info);
FUNC_1(*VAR_2,!(FUNC_0(*VAR_2)));
}
