
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ k; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_22__ {int nactvar; int freereg; } ;
struct TYPE_19__ {char token; } ;
struct TYPE_21__ {TYPE_1__ t; TYPE_4__* fs; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_4__*,int,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,char) ;

__attribute__((used)) static void FUNC_12 (LexState *VAR_3) {

  FuncState *VAR_4 = VAR_3->fs;
  expdesc VAR_5;
  int VAR_6, VAR_7;
  if (FUNC_2(VAR_3, 1) || VAR_3->t.token == ';')
    VAR_6 = VAR_7 = 0;
  else {
    VAR_7 = FUNC_3(VAR_3, &VAR_5);
    if (FUNC_5(VAR_5.k)) {
      FUNC_9(VAR_4, &VAR_5);
      if (VAR_5.k == VAR_2 && VAR_7 == 1) {
        FUNC_1(FUNC_4(VAR_4,&VAR_5), VAR_1);
        FUNC_10(FUNC_0(FUNC_4(VAR_4,&VAR_5)) == VAR_4->nactvar);
      }
      VAR_6 = VAR_4->nactvar;
      VAR_7 = VAR_0;
    }
    else {
      if (VAR_7 == 1)
        VAR_6 = FUNC_6(VAR_4, &VAR_5);
      else {
        FUNC_7(VAR_4, &VAR_5);
        VAR_6 = VAR_4->nactvar;
        FUNC_10(VAR_7 == VAR_4->freereg - VAR_6);
      }
    }
  }
  FUNC_8(VAR_4, VAR_6, VAR_7);
  FUNC_11(VAR_3, ';');
}
