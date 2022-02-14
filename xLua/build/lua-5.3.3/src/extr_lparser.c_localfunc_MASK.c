
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int info; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_17__ {int startpc; } ;
struct TYPE_16__ {int pc; } ;
struct TYPE_15__ {int linenumber; TYPE_4__* fs; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ,int ) ;
 TYPE_8__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_0) {
  expdesc VAR_1;
  FuncState *VAR_2 = VAR_0->fs;
  FUNC_3(VAR_0, FUNC_4(VAR_0));
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_0, &VAR_1, 0, VAR_0->linenumber);

  FUNC_2(VAR_2, VAR_1.u.info)->startpc = VAR_2->pc;
}
