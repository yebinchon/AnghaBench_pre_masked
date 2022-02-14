
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {size_t len; } ;
typedef int StkId ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 char const* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static const char*FUNC_6(lua_State*VAR_0,int VAR_1,size_t*VAR_2){
StkId VAR_3=FUNC_0(VAR_0,VAR_1);
if(!FUNC_5(VAR_3)){
if(!FUNC_2(VAR_0,VAR_3)){
if(VAR_2!=((void*)0))*VAR_2=0;
return ((void*)0);
}
FUNC_1(VAR_0);
VAR_3=FUNC_0(VAR_0,VAR_1);
}
if(VAR_2!=((void*)0))*VAR_2=FUNC_4(VAR_3)->len;
return FUNC_3(VAR_3);
}
