
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {TYPE_1__ u; int * v; } ;
typedef TYPE_2__ UpVal ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_0,UpVal*VAR_1){
if(VAR_1->v!=&VAR_1->u.value)
FUNC_1(VAR_1);
FUNC_0(VAR_0,VAR_1);
}
