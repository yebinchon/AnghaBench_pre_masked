
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int p; } ;
struct TYPE_4__ {TYPE_1__ l; } ;
typedef int CallInfo ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(lua_State*VAR_0,CallInfo*VAR_1){
int VAR_2=FUNC_1(VAR_0,VAR_1);
if(VAR_2<0)
return-1;
else
return FUNC_2(FUNC_0(VAR_1)->l.p,VAR_2);
}
