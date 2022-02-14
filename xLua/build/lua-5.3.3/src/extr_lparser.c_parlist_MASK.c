
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int nactvar; TYPE_2__* f; } ;
struct TYPE_13__ {char token; } ;
struct TYPE_15__ {TYPE_1__ t; TYPE_4__* fs; } ;
struct TYPE_14__ {int is_vararg; int numparams; } ;
typedef TYPE_2__ Proto ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;




 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char) ;

__attribute__((used)) static void FUNC_8 (LexState *VAR_0) {

  FuncState *VAR_1 = VAR_0->fs;
  Proto *VAR_2 = VAR_1->f;
  int VAR_3 = 0;
  VAR_2->is_vararg = 0;
  if (VAR_0->t.token != ')') {
    do {
      switch (VAR_0->t.token) {
        case 128: {
          FUNC_5(VAR_0, FUNC_6(VAR_0));
          VAR_3++;
          break;
        }
        case 129: {
          FUNC_3(VAR_0);
          VAR_2->is_vararg = 2;
          break;
        }
        default: FUNC_4(VAR_0, "<name> or '...' expected");
      }
    } while (!VAR_2->is_vararg && FUNC_7(VAR_0, ','));
  }
  FUNC_0(VAR_0, VAR_3);
  VAR_2->numparams = FUNC_1(VAR_1->nactvar);
  FUNC_2(VAR_1, VAR_1->nactvar);
}
