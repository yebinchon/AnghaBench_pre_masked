
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int gcstate; } ;
typedef TYPE_1__ global_State ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,GCObject*VAR_1,GCObject*VAR_2){
global_State*VAR_3=FUNC_0(VAR_0);
if(VAR_3->gcstate==1)
FUNC_2(VAR_3,VAR_2);
else
FUNC_1(VAR_3,VAR_1);
}
