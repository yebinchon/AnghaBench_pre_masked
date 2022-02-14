
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ nuse; int size; } ;
struct TYPE_5__ {int buff; TYPE_1__ strt; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_3);

  if (VAR_4->strt.nuse < FUNC_1(VAR_2, VAR_4->strt.size/4) &&
      VAR_4->strt.size > VAR_1*2)
    FUNC_2(VAR_3, VAR_4->strt.size/2);

  if (FUNC_4(&VAR_4->buff) > VAR_0*2) {
    size_t VAR_5 = FUNC_4(&VAR_4->buff) / 2;
    FUNC_3(VAR_3, &VAR_4->buff, VAR_5);
  }
}
