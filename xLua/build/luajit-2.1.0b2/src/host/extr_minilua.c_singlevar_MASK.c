
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int info; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_12__ {int * fs; } ;
typedef int TString ;
typedef TYPE_4__ LexState ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_3__*,int) ;
 int * FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(LexState*VAR_1,expdesc*VAR_2){
TString*VAR_3=FUNC_2(VAR_1);
FuncState*VAR_4=VAR_1->fs;
if(FUNC_1(VAR_4,VAR_3,VAR_2,1)==VAR_0)
VAR_2->u.s.info=FUNC_0(VAR_4,VAR_3);
}
