
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_0)
{
  if(!FUNC_4(VAR_0, 1))
    FUNC_0(VAR_0, "critical internal indexing error: no metatable found");

  if(!FUNC_7(VAR_0, -1))
    FUNC_0(VAR_0, "critical internal indexing error: not a metatable");


  FUNC_3(VAR_0, -1, "__newindex__");
  if(!FUNC_6(VAR_0, -1))
  {
    int VAR_1;

    if(!FUNC_5(VAR_0, -1))
      FUNC_0(VAR_0, "critical internal indexing error: __newindex__ is not a function");

    FUNC_9(VAR_0, 1);
    FUNC_9(VAR_0, 2);
    FUNC_9(VAR_0, 3);

    FUNC_2(VAR_0, 3, 1);

    VAR_1 = FUNC_11(VAR_0, -1);
    FUNC_8(VAR_0, 1);

    if(VAR_1)
      return 0;
  }
  else
    FUNC_8(VAR_0, 1);

  FUNC_8(VAR_0, 1);
  if(FUNC_7(VAR_0, 1))
    FUNC_10(VAR_0, 1);
  else
    FUNC_0(VAR_0, "the class %s cannot be indexed", FUNC_1(VAR_0, 1));

  return 0;
}
