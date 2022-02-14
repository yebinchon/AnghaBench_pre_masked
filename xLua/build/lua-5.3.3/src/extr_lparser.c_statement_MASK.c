
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


struct TYPE_25__ {int token; } ;
struct TYPE_27__ {int linenumber; TYPE_11__* fs; TYPE_1__ t; } ;
struct TYPE_26__ {scalar_t__ maxstacksize; } ;
struct TYPE_24__ {scalar_t__ freereg; scalar_t__ nactvar; TYPE_2__* f; } ;
typedef TYPE_3__ LexState ;





 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int const,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_11__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int const) ;
 int FUNC_19 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_20 (LexState *VAR_1) {
  int VAR_2 = VAR_1->linenumber;
  FUNC_2(VAR_1);
  switch (VAR_1->t.token) {
    case ';': {
      FUNC_13(VAR_1);
      break;
    }
    case 132: {
      FUNC_7(VAR_1, VAR_2);
      break;
    }
    case 128: {
      FUNC_19(VAR_1, VAR_2);
      break;
    }
    case 136: {
      FUNC_13(VAR_1);
      FUNC_0(VAR_1);
      FUNC_1(VAR_1, VAR_0, 136, VAR_2);
      break;
    }
    case 135: {
      FUNC_4(VAR_1, VAR_2);
      break;
    }
    case 130: {
      FUNC_15(VAR_1, VAR_2);
      break;
    }
    case 134: {
      FUNC_5(VAR_1, VAR_2);
      break;
    }
    case 131: {
      FUNC_13(VAR_1);
      if (FUNC_18(VAR_1, 134))
        FUNC_10(VAR_1);
      else
        FUNC_11(VAR_1);
      break;
    }
    case 137: {
      FUNC_13(VAR_1);
      FUNC_8(VAR_1, FUNC_17(VAR_1), VAR_2);
      break;
    }
    case 129: {
      FUNC_13(VAR_1);
      FUNC_16(VAR_1);
      break;
    }
    case 138:
    case 133: {
      FUNC_6(VAR_1, FUNC_12(VAR_1->fs));
      break;
    }
    default: {
      FUNC_3(VAR_1);
      break;
    }
  }
  FUNC_14(VAR_1->fs->f->maxstacksize >= VAR_1->fs->freereg &&
             VAR_1->fs->freereg >= VAR_1->fs->nactvar);
  VAR_1->fs->freereg = VAR_1->fs->nactvar;
  FUNC_9(VAR_1);
}
