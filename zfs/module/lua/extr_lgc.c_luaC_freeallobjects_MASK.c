
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int size; scalar_t__ nuse; int ** hash; } ;
struct TYPE_5__ {TYPE_1__ strt; int * allgc; int * finobj; int gckind; int currentwhite; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int **) ;

void FUNC_5 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  int VAR_4;
  FUNC_3(VAR_2, 1);
  FUNC_2(VAR_3->finobj == ((void*)0));
  FUNC_1(VAR_2, 0);
  VAR_3->currentwhite = VAR_1;
  VAR_3->gckind = VAR_0;
  FUNC_4(VAR_2, &VAR_3->finobj);
  FUNC_4(VAR_2, &VAR_3->allgc);
  for (VAR_4 = 0; VAR_4 < VAR_3->strt.size; VAR_4++)
    FUNC_4(VAR_2, &VAR_3->strt.hash[VAR_4]);
  FUNC_2(VAR_3->strt.nuse == 0);
}
