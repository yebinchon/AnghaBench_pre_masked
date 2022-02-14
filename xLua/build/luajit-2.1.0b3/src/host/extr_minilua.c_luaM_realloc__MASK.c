
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {size_t totalbytes; int ud; void* (* frealloc ) (int ,void*,size_t,size_t) ;} ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int ,void*,size_t,size_t) ;

__attribute__((used)) static void*FUNC_3(lua_State*VAR_0,void*VAR_1,size_t VAR_2,size_t VAR_3){
global_State*VAR_4=FUNC_0(VAR_0);
VAR_1=(*VAR_4->frealloc)(VAR_4->ud,VAR_1,VAR_2,VAR_3);
if(VAR_1==((void*)0)&&VAR_3>0)
FUNC_1(VAR_0,4);
VAR_4->totalbytes=(VAR_4->totalbytes-VAR_2)+VAR_3;
return VAR_1;
}
