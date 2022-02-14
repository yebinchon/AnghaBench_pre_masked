
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_11__ ;


struct TYPE_29__ {int aux; int info; } ;
struct TYPE_30__ {TYPE_1__ s; } ;
struct TYPE_33__ {scalar_t__ k; TYPE_2__ u; } ;
struct TYPE_27__ {scalar_t__ k; } ;
struct TYPE_32__ {TYPE_11__ v; struct TYPE_32__* prev; } ;
struct TYPE_31__ {scalar_t__ level; TYPE_15__* fs; } ;
struct TYPE_28__ {scalar_t__ freereg; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ LHSVarList ;
typedef TYPE_5__ ExpDesc ;
typedef scalar_t__ BCReg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__,TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_11__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_15__*,TYPE_11__*,TYPE_5__*) ;
 int * FUNC_4 (TYPE_15__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_15__*,scalar_t__,int ,char*) ;
 int FUNC_7 (TYPE_5__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_11__*) ;
 int FUNC_10 (TYPE_3__*,char) ;
 scalar_t__ FUNC_11 (TYPE_3__*,char) ;

__attribute__((used)) static void FUNC_12(LexState *VAR_8, LHSVarList *VAR_9, BCReg VAR_10)
{
  ExpDesc VAR_11;
  FUNC_5(VAR_8, VAR_5 <= VAR_9->v.k && VAR_9->v.k <= VAR_4, VAR_1);
  if (FUNC_11(VAR_8, ',')) {
    LHSVarList VAR_12;
    VAR_12.prev = VAR_9;
    FUNC_9(VAR_8, &VAR_12.v);
    if (VAR_12.v.k == VAR_5)
      FUNC_1(VAR_8, VAR_9, &VAR_12.v);
    FUNC_6(VAR_8->fs, VAR_8->level + VAR_10, VAR_2, "variable names");
    FUNC_12(VAR_8, &VAR_12, VAR_10+1);
  } else {
    BCReg VAR_13;
    FUNC_10(VAR_8, '=');
    VAR_13 = FUNC_8(VAR_8, &VAR_11);
    if (VAR_13 == VAR_10) {
      if (VAR_11.k == VAR_3) {
 if (FUNC_2(*FUNC_4(VAR_8->fs, &VAR_11)) == VAR_0) {
   VAR_8->fs->freereg--;
   VAR_11.k = VAR_7;
 } else {
   VAR_11.u.s.info = VAR_11.u.s.aux;
   VAR_11.k = VAR_6;
 }
      }
      FUNC_3(VAR_8->fs, &VAR_9->v, &VAR_11);
      return;
    }
    FUNC_0(VAR_8, VAR_10, VAR_13, &VAR_11);
  }

  FUNC_7(&VAR_11, VAR_6, VAR_8->fs->freereg-1);
  FUNC_3(VAR_8->fs, &VAR_9->v, &VAR_11);
}
