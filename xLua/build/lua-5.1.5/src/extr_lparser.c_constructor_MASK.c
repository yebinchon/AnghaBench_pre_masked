
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ k; } ;
struct ConsControl {scalar_t__ na; scalar_t__ nh; scalar_t__ tostore; TYPE_4__ v; TYPE_4__* t; } ;
typedef TYPE_4__ expdesc ;
struct TYPE_26__ {TYPE_3__* f; } ;
struct TYPE_22__ {char token; } ;
struct TYPE_21__ {char token; } ;
struct TYPE_25__ {int linenumber; TYPE_2__ lookahead; TYPE_1__ t; TYPE_6__* fs; } ;
struct TYPE_23__ {int * code; } ;
typedef TYPE_5__ LexState ;
typedef TYPE_6__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__*,char,char,int) ;
 int FUNC_3 (TYPE_5__*,char) ;
 int FUNC_4 (TYPE_6__*,struct ConsControl*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_6__*,struct ConsControl*) ;
 int FUNC_7 (TYPE_5__*,struct ConsControl*) ;
 int FUNC_8 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*,struct ConsControl*) ;
 scalar_t__ FUNC_14 (TYPE_5__*,char) ;

__attribute__((used)) static void FUNC_15 (LexState *VAR_3, expdesc *VAR_4) {

  FuncState *VAR_5 = VAR_3->fs;
  int VAR_6 = VAR_3->linenumber;
  int VAR_7 = FUNC_8(VAR_5, VAR_0, 0, 0, 0);
  struct ConsControl VAR_8;
  VAR_8.na = VAR_8.nh = VAR_8.tostore = 0;
  VAR_8.t = VAR_4;
  FUNC_5(VAR_4, VAR_1, VAR_7);
  FUNC_5(&VAR_8.v, VAR_2, 0);
  FUNC_9(VAR_3->fs, VAR_4);
  FUNC_3(VAR_3, '{');
  do {
    FUNC_12(VAR_8.v.k == VAR_2 || VAR_8.tostore > 0);
    if (VAR_3->t.token == '}') break;
    FUNC_4(VAR_5, &VAR_8);
    switch(VAR_3->t.token) {
      case 128: {
        FUNC_11(VAR_3);
        if (VAR_3->lookahead.token != '=')
          FUNC_7(VAR_3, &VAR_8);
        else
          FUNC_13(VAR_3, &VAR_8);
        break;
      }
      case '[': {
        FUNC_13(VAR_3, &VAR_8);
        break;
      }
      default: {
        FUNC_7(VAR_3, &VAR_8);
        break;
      }
    }
  } while (FUNC_14(VAR_3, ',') || FUNC_14(VAR_3, ';'));
  FUNC_2(VAR_3, '}', '{', VAR_6);
  FUNC_6(VAR_5, &VAR_8);
  FUNC_0(VAR_5->f->code[VAR_7], FUNC_10(VAR_8.na));
  FUNC_1(VAR_5->f->code[VAR_7], FUNC_10(VAR_8.nh));
}
