
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * arr; } ;
struct TYPE_10__ {TYPE_2__* dyd; TYPE_1__* fs; int L; } ;
struct TYPE_9__ {TYPE_5__ label; } ;
struct TYPE_8__ {int pc; } ;
typedef int TString ;
typedef TYPE_3__ LexState ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3 (LexState *VAR_0) {
  TString *VAR_1 = FUNC_1(VAR_0->L, "break");
  int VAR_2 = FUNC_2(VAR_0, &VAR_0->dyd->label, VAR_1, 0, VAR_0->fs->pc);
  FUNC_0(VAR_0, &VAR_0->dyd->label.arr[VAR_2]);
}
