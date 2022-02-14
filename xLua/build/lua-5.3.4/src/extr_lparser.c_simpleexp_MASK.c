
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int ival; int nval; } ;
struct TYPE_26__ {TYPE_1__ u; } ;
typedef TYPE_5__ expdesc ;
struct TYPE_28__ {TYPE_4__* f; } ;
struct TYPE_23__ {int ts; int i; int r; } ;
struct TYPE_24__ {int token; TYPE_2__ seminfo; } ;
struct TYPE_27__ {int linenumber; TYPE_7__* fs; TYPE_3__ t; } ;
struct TYPE_25__ {int is_vararg; } ;
typedef TYPE_6__ LexState ;
typedef TYPE_7__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,TYPE_5__*,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_7__*,int ,int ,int,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_8 (LexState *VAR_7, expdesc *VAR_8) {


  switch (VAR_7->t.token) {
    case 133: {
      FUNC_4(VAR_8, VAR_2, 0);
      VAR_8->u.nval = VAR_7->t.seminfo.r;
      break;
    }
    case 131: {
      FUNC_4(VAR_8, VAR_3, 0);
      VAR_8->u.ival = VAR_7->t.seminfo.i;
      break;
    }
    case 129: {
      FUNC_2(VAR_7, VAR_8, VAR_7->t.seminfo.ts);
      break;
    }
    case 130: {
      FUNC_4(VAR_8, VAR_4, 0);
      break;
    }
    case 128: {
      FUNC_4(VAR_8, VAR_5, 0);
      break;
    }
    case 134: {
      FUNC_4(VAR_8, VAR_1, 0);
      break;
    }
    case 135: {
      FuncState *VAR_9 = VAR_7->fs;
      FUNC_1(VAR_7, VAR_9->f->is_vararg,
                      "cannot use '...' outside a vararg function");
      FUNC_4(VAR_8, VAR_6, FUNC_5(VAR_9, VAR_0, 0, 1, 0));
      break;
    }
    case '{': {
      FUNC_3(VAR_7, VAR_8);
      return;
    }
    case 132: {
      FUNC_6(VAR_7);
      FUNC_0(VAR_7, VAR_8, 0, VAR_7->linenumber);
      return;
    }
    default: {
      FUNC_7(VAR_7, VAR_8);
      return;
    }
  }
  FUNC_6(VAR_7);
}
