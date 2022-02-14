
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int l_registry; int mainthread; int * ephemeron; int allweak; int weak; int * grayagain; int gray; } ;
typedef TYPE_1__ global_State ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4 (global_State *VAR_0) {
  VAR_0->gray = *(VAR_0->grayagain = ((void*)0));
  VAR_0->weak = VAR_0->allweak = *(VAR_0->ephemeron = ((void*)0));
  FUNC_2(VAR_0, VAR_0->mainthread);
  FUNC_3(VAR_0, &VAR_0->l_registry);
  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
}
