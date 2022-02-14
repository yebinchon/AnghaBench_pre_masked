
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int bpropcache; } ;
typedef TYPE_1__ jit_State ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(jit_State *VAR_1)
{
  if ((VAR_1->flags & VAR_0)) {
    FUNC_0(VAR_1);
    FUNC_1(VAR_1);
    FUNC_2(VAR_1->bpropcache, 0, sizeof(VAR_1->bpropcache));
  }
}
