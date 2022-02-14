
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ k; } ;
struct LHS_assign {TYPE_5__ v; struct LHS_assign* prev; } ;
typedef int expdesc ;
struct TYPE_20__ {scalar_t__ freereg; } ;
struct TYPE_18__ {TYPE_6__* fs; TYPE_1__* L; } ;
struct TYPE_17__ {scalar_t__ nCcalls; } ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int,int *) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,struct LHS_assign*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,scalar_t__,int ,char*) ;
 int FUNC_4 (TYPE_2__*,char) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,char) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12 (LexState *VAR_3, struct LHS_assign *VAR_4, int VAR_5) {
  expdesc VAR_6;
  FUNC_1(VAR_3, FUNC_11(VAR_4->v.k), "syntax error");
  if (FUNC_10(VAR_3, ',')) {
    struct LHS_assign VAR_7;
    VAR_7.prev = VAR_4;
    FUNC_9(VAR_3, &VAR_7.v);
    if (VAR_7.v.k != VAR_1)
      FUNC_2(VAR_3, VAR_4, &VAR_7.v);
    FUNC_3(VAR_3->fs, VAR_5 + VAR_3->L->nCcalls, VAR_0,
                    "C levels");
    FUNC_12(VAR_3, &VAR_7, VAR_5+1);
  }
  else {
    int VAR_8;
    FUNC_4(VAR_3, '=');
    VAR_8 = FUNC_5(VAR_3, &VAR_6);
    if (VAR_8 != VAR_5)
      FUNC_0(VAR_3, VAR_5, VAR_8, &VAR_6);
    else {
      FUNC_7(VAR_3->fs, &VAR_6);
      FUNC_8(VAR_3->fs, &VAR_4->v, &VAR_6);
      return;
    }
  }
  FUNC_6(&VAR_6, VAR_2, VAR_3->fs->freereg-1);
  FUNC_8(VAR_3->fs, &VAR_4->v, &VAR_6);
}
