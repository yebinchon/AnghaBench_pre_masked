
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int TValue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(const TValue*VAR_0){
if(FUNC_4(VAR_0)){
lua_Number VAR_1=FUNC_3(VAR_0);
int VAR_2;
FUNC_1(VAR_2,VAR_1);
if(FUNC_2(FUNC_0(VAR_2),VAR_1))
return VAR_2;
}
return-1;
}
