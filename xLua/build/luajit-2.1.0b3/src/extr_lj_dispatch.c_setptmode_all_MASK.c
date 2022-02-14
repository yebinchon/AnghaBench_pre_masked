
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int global_State ;
struct TYPE_10__ {int gct; } ;
struct TYPE_12__ {TYPE_1__ gch; } ;
struct TYPE_11__ {int flags; scalar_t__ sizekgc; } ;
typedef TYPE_2__ GCproto ;
typedef TYPE_3__ GCobj ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(global_State *VAR_2, GCproto *VAR_3, int VAR_4)
{
  ptrdiff_t VAR_5;
  if (!(VAR_3->flags & VAR_1)) return;
  for (VAR_5 = -(ptrdiff_t)VAR_3->sizekgc; VAR_5 < 0; VAR_5++) {
    GCobj *VAR_6 = FUNC_1(VAR_3, VAR_5);
    if (VAR_6->gch.gct == ~VAR_0) {
      FUNC_2(VAR_2, FUNC_0(VAR_6), VAR_4);
      FUNC_3(VAR_2, FUNC_0(VAR_6), VAR_4);
    }
  }
}
