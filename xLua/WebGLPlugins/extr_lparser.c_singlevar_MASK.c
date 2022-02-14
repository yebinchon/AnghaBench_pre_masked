
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ k; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_12__ {int * envn; int * fs; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int) ;
 int * FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_1, expdesc *VAR_2) {
  TString *VAR_3 = FUNC_4(VAR_1);
  FuncState *VAR_4 = VAR_1->fs;
  FUNC_3(VAR_4, VAR_3, VAR_2, 1);
  if (VAR_2->k == VAR_0) {
    expdesc VAR_5;
    FUNC_3(VAR_4, VAR_1->envn, VAR_2, 1);
    FUNC_2(VAR_2->k != VAR_0);
    FUNC_0(VAR_1, &VAR_5, VAR_3);
    FUNC_1(VAR_4, VAR_2, &VAR_5);
  }
}
