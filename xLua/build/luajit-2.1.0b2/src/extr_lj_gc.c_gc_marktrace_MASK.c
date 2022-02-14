
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int gray; } ;
struct TYPE_17__ {TYPE_3__ gc; } ;
typedef TYPE_4__ global_State ;
typedef scalar_t__ TraceNo ;
struct TYPE_14__ {scalar_t__ traceno; } ;
struct TYPE_19__ {TYPE_1__ cur; } ;
struct TYPE_15__ {int gclist; } ;
struct TYPE_18__ {TYPE_2__ gch; } ;
typedef TYPE_5__ GCobj ;


 TYPE_7__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_7__*,scalar_t__) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_8(global_State *VAR_0, TraceNo VAR_1)
{
  GCobj *VAR_2 = FUNC_3(FUNC_6(FUNC_0(VAR_0), VAR_1));
  FUNC_2(VAR_1 != FUNC_0(VAR_0)->cur.traceno);
  if (FUNC_1(VAR_2)) {
    FUNC_7(VAR_2);
    FUNC_5(VAR_2->gch.gclist, VAR_0->gc.gray);
    FUNC_4(VAR_0->gc.gray, VAR_2);
  }
}
