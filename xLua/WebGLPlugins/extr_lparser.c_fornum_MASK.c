
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int freereg; } ;
struct TYPE_13__ {TYPE_2__* fs; } ;
typedef int TString ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char) ;

__attribute__((used)) static void FUNC_9 (LexState *VAR_0, TString *VAR_1, int VAR_2) {

  FuncState *VAR_3 = VAR_0->fs;
  int VAR_4 = VAR_3->freereg;
  FUNC_7(VAR_0, "(for index)");
  FUNC_7(VAR_0, "(for limit)");
  FUNC_7(VAR_0, "(for step)");
  FUNC_6(VAR_0, VAR_1);
  FUNC_0(VAR_0, '=');
  FUNC_1(VAR_0);
  FUNC_0(VAR_0, ',');
  FUNC_1(VAR_0);
  if (FUNC_8(VAR_0, ','))
    FUNC_1(VAR_0);
  else {
    FUNC_3(VAR_3, VAR_3->freereg, FUNC_4(VAR_3, 1));
    FUNC_5(VAR_3, 1);
  }
  FUNC_2(VAR_0, VAR_4, VAR_2, 1, 1);
}
