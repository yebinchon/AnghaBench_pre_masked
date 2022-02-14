
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mmudata; } ;
struct TYPE_7__ {TYPE_1__ gc; } ;
typedef TYPE_2__ global_State ;
typedef int GCobj ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_4(global_State *VAR_0)
{
  GCobj *VAR_1 = FUNC_2(VAR_0->gc.mmudata);
  GCobj *VAR_2 = VAR_1;
  if (VAR_2) {
    do {
      VAR_2 = FUNC_1(VAR_2);
      FUNC_3(VAR_0, VAR_2);
      FUNC_0(VAR_0, VAR_2);
    } while (VAR_2 != VAR_1);
  }
}
