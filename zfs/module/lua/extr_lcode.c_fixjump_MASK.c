
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ls; TYPE_1__* f; } ;
struct TYPE_4__ {int * code; } ;
typedef int Instruction ;
typedef TYPE_2__ FuncState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_2, int VAR_3, int VAR_4) {
  Instruction *VAR_5 = &VAR_2->f->code[VAR_3];
  int VAR_6 = VAR_4-(VAR_3+1);
  FUNC_3(VAR_4 != VAR_1);
  if (FUNC_1(VAR_6) > VAR_0)
    FUNC_2(VAR_2->ls, "control structure too long");
  FUNC_0(*VAR_5, VAR_6);
}
