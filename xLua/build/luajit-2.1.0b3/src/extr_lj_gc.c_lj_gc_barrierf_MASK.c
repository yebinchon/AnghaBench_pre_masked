
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ state; } ;
struct TYPE_18__ {TYPE_2__ gc; } ;
typedef TYPE_3__ global_State ;
struct TYPE_16__ {int gct; } ;
struct TYPE_19__ {TYPE_1__ gch; } ;
typedef TYPE_4__ GCobj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;

void FUNC_6(global_State *VAR_5, GCobj *VAR_6, GCobj *VAR_7)
{
  FUNC_4(FUNC_1(VAR_6) && FUNC_3(VAR_7) && !FUNC_2(VAR_5, VAR_7) && !FUNC_2(VAR_5, VAR_6));
  FUNC_4(VAR_5->gc.state != VAR_1 && VAR_5->gc.state != VAR_2);
  FUNC_4(VAR_6->gch.gct != ~VAR_4);

  if (VAR_5->gc.state == VAR_3 || VAR_5->gc.state == VAR_0)
    FUNC_0(VAR_5, VAR_7);
  else
    FUNC_5(VAR_5, VAR_6);
}
