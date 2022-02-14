
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {TYPE_1__* mainthread; } ;


 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(lua_State*VAR_0){
FUNC_2(VAR_0,VAR_0->top,VAR_0);
FUNC_1(VAR_0);
return(FUNC_0(VAR_0)->mainthread==VAR_0);
}
