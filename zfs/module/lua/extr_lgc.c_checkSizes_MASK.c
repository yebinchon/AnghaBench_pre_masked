
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int size; scalar_t__ nuse; } ;
struct TYPE_5__ {scalar_t__ gckind; int buff; TYPE_1__ strt; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  if (VAR_3->gckind != VAR_0) {
    int VAR_4 = VAR_3->strt.size / 2;
    if (VAR_3->strt.nuse < FUNC_1(VAR_1, VAR_4))
      FUNC_2(VAR_2, VAR_4);
    FUNC_3(VAR_2, &VAR_3->buff);
  }
}
