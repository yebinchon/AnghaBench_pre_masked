
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int linenumber; TYPE_1__* dyd; int L; } ;
struct TYPE_9__ {int gt; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int,int) ;
 int * FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6 (LexState *VAR_1, int VAR_2) {
  int VAR_3 = VAR_1->linenumber;
  TString *VAR_4;
  int VAR_5;
  if (FUNC_5(VAR_1, VAR_0))
    VAR_4 = FUNC_4(VAR_1);
  else {
    FUNC_2(VAR_1);
    VAR_4 = FUNC_1(VAR_1->L, "break");
  }
  VAR_5 = FUNC_3(VAR_1, &VAR_1->dyd->gt, VAR_4, VAR_3, VAR_2);
  FUNC_0(VAR_1, VAR_5);
}
