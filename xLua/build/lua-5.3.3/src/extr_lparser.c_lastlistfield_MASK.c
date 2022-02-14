
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ k; } ;
struct ConsControl {scalar_t__ tostore; int na; TYPE_2__* t; TYPE_3__ v; } ;
struct TYPE_5__ {int info; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ,scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4 (FuncState *VAR_2, struct ConsControl *VAR_3) {
  if (VAR_3->tostore == 0) return;
  if (FUNC_0(VAR_3->v.k)) {
    FUNC_3(VAR_2, &VAR_3->v);
    FUNC_2(VAR_2, VAR_3->t->u.info, VAR_3->na, VAR_0);
    VAR_3->na--;
  }
  else {
    if (VAR_3->v.k != VAR_1)
      FUNC_1(VAR_2, &VAR_3->v);
    FUNC_2(VAR_2, VAR_3->t->u.info, VAR_3->na, VAR_3->tostore);
  }
}
