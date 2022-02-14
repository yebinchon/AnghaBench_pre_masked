
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ephemeron; } ;
typedef TYPE_1__ global_State ;
struct TYPE_8__ {int * gclist; } ;
typedef int GCObject ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3 (global_State *VAR_0) {
  int VAR_1;
  do {
    GCObject *VAR_2;
    GCObject *VAR_3 = VAR_0->ephemeron;
    VAR_0->ephemeron = ((void*)0);
    VAR_1 = 0;
    while ((VAR_2 = VAR_3) != ((void*)0)) {
      VAR_3 = FUNC_0(VAR_2)->gclist;
      if (FUNC_2(VAR_0, FUNC_0(VAR_2))) {
        FUNC_1(VAR_0);
        VAR_1 = 1;
      }
    }
  } while (VAR_1);
}
