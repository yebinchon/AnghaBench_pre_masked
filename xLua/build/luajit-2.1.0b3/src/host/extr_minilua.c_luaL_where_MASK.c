
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ currentline; int short_src; } ;
typedef TYPE_1__ lua_Debug ;


 int FUNC_0 (int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(lua_State*VAR_0,int VAR_1){
lua_Debug VAR_2;
if(FUNC_1(VAR_0,VAR_1,&VAR_2)){
FUNC_0(VAR_0,"Sl",&VAR_2);
if(VAR_2.currentline>0){
FUNC_2(VAR_0,"%s:%d: ",VAR_2.short_src,VAR_2.currentline);
return;
}
}
FUNC_3(VAR_0,"");
}
