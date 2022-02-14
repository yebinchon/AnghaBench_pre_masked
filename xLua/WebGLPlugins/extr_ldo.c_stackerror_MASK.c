
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nCcalls; } ;
typedef TYPE_1__ lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_2) {
  if (VAR_2->nCcalls == VAR_0)
    FUNC_1(VAR_2, "C stack overflow");
  else if (VAR_2->nCcalls >= (VAR_0 + (VAR_0>>3)))
    FUNC_0(VAR_2, VAR_1);
}
