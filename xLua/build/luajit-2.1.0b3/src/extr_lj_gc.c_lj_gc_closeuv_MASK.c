
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ state; int root; } ;
struct TYPE_21__ {TYPE_2__ gc; } ;
typedef TYPE_3__ global_State ;
struct TYPE_19__ {int nextgc; } ;
struct TYPE_23__ {TYPE_1__ gch; } ;
struct TYPE_22__ {int closed; int tv; int v; } ;
typedef TYPE_4__ GCupval ;
typedef TYPE_5__ GCobj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 TYPE_5__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;

void FUNC_14(global_State *VAR_4, GCupval *VAR_5)
{
  GCobj *VAR_6 = FUNC_8(VAR_5);

  FUNC_0(FUNC_6(VAR_4), &VAR_5->tv, FUNC_13(VAR_5));
  FUNC_11(VAR_5->v, &VAR_5->tv);
  VAR_5->closed = 1;
  FUNC_10(VAR_6->gch.nextgc, VAR_4->gc.root);
  FUNC_9(VAR_4->gc.root, VAR_6);
  if (FUNC_3(VAR_6)) {
    if (VAR_4->gc.state == VAR_3 || VAR_4->gc.state == VAR_0) {
      FUNC_2(VAR_6);
      if (FUNC_12(&VAR_5->tv))
 FUNC_4(VAR_4, VAR_6, FUNC_1(&VAR_5->tv));
    } else {
      FUNC_7(VAR_4, VAR_6);
      FUNC_5(VAR_4->gc.state != VAR_1 && VAR_4->gc.state != VAR_2);
    }
  }
}
