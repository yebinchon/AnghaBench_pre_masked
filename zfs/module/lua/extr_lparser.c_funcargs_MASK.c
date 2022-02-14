
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {int info; } ;
struct TYPE_28__ {scalar_t__ k; TYPE_3__ u; } ;
typedef TYPE_4__ expdesc ;
struct TYPE_30__ {int freereg; } ;
struct TYPE_25__ {int ts; } ;
struct TYPE_26__ {int token; TYPE_1__ seminfo; } ;
struct TYPE_29__ {TYPE_2__ t; TYPE_6__* fs; } ;
typedef TYPE_5__ LexState ;
typedef TYPE_6__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*,char,char,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_6__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13 (LexState *VAR_5, expdesc *VAR_6, int VAR_7) {
  FuncState *VAR_8 = VAR_5->fs;
  expdesc VAR_9;
  int VAR_10, VAR_11;
  switch (VAR_5->t.token) {
    case '(': {
      FUNC_10(VAR_5);
      if (VAR_5->t.token == ')')
        VAR_9.k = VAR_4;
      else {
        FUNC_3(VAR_5, &VAR_9);
        FUNC_9(VAR_8, &VAR_9);
      }
      FUNC_0(VAR_5, ')', '(', VAR_7);
      break;
    }
    case '{': {
      FUNC_2(VAR_5, &VAR_9);
      break;
    }
    case 128: {
      FUNC_1(VAR_5, &VAR_9, VAR_5->t.seminfo.ts);
      FUNC_10(VAR_5);
      break;
    }
    default: {
      FUNC_11(VAR_5, "function arguments expected");
    }
  }
  FUNC_12(VAR_6->k == VAR_3);
  VAR_10 = VAR_6->u.info;
  if (FUNC_4(VAR_9.k))
    VAR_11 = VAR_0;
  else {
    if (VAR_9.k != VAR_4)
      FUNC_7(VAR_8, &VAR_9);
    VAR_11 = VAR_8->freereg - (VAR_10+1);
  }
  FUNC_5(VAR_6, VAR_2, FUNC_6(VAR_8, VAR_1, VAR_10, VAR_11+1, 2));
  FUNC_8(VAR_8, VAR_7);
  VAR_8->freereg = VAR_10+1;

}
