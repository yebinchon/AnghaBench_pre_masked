
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int * VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1)
{
  int VAR_2 = FUNC_1(VAR_1,1);
  FUNC_2(VAR_1, "torch");
  FUNC_3(VAR_1, VAR_2);
  FUNC_4(VAR_1, -2, "_heaptracking");
  if(VAR_2) {
    FUNC_0(VAR_0, VAR_1);
  } else {
    FUNC_0(((void*)0), ((void*)0));
  }
  return 0;
}
