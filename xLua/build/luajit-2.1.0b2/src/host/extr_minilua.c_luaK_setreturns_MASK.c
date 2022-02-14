
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ k; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_9__ {int freereg; } ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(FuncState*VAR_2,expdesc*VAR_3,int VAR_4){
if(VAR_3->k==VAR_0){
FUNC_2(FUNC_3(VAR_2,VAR_3),VAR_4+1);
}
else if(VAR_3->k==VAR_1){
FUNC_1(FUNC_3(VAR_2,VAR_3),VAR_4+1);
FUNC_0(FUNC_3(VAR_2,VAR_3),VAR_2->freereg);
FUNC_4(VAR_2,1);
}
}
