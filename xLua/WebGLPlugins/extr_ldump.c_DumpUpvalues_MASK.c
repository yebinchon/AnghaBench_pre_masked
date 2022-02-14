
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sizeupvalues; TYPE_1__* upvalues; } ;
struct TYPE_4__ {int idx; int instack; } ;
typedef TYPE_2__ Proto ;
typedef int DumpState ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2 (const Proto *VAR_0, DumpState *VAR_1) {
  int VAR_2, VAR_3 = VAR_0->sizeupvalues;
  FUNC_1(VAR_3, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    FUNC_0(VAR_0->upvalues[VAR_2].instack, VAR_1);
    FUNC_0(VAR_0->upvalues[VAR_2].idx, VAR_1);
  }
}
