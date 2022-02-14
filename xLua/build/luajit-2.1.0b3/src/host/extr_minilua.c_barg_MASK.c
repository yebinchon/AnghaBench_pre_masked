
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef double lua_Number ;
typedef int UB ;
typedef int U64 ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 double FUNC_2 (int *,int) ;

__attribute__((used)) static UB FUNC_3(lua_State*VAR_0,int VAR_1){
union{lua_Number n;U64 b;}VAR_2;
VAR_2.n=FUNC_2(VAR_0,VAR_1)+6755399441055744.0;
if(VAR_2.n==0.0&&!FUNC_1(VAR_0,VAR_1))FUNC_0(VAR_0,VAR_1,"number");
return(UB)VAR_2.b;
}
