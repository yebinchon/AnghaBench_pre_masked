
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_1)
{
  if(!FUNC_3(VAR_1, 1))
    FUNC_0(VAR_1, "critical internal indexing error: no metatable found");

  if(!FUNC_7(VAR_1, -1))
    FUNC_0(VAR_1, "critical internal indexing error: not a metatable");


  FUNC_2(VAR_1, -1, "__index__");
  if(!FUNC_6(VAR_1, -1))
  {
    int VAR_2;

    if(!FUNC_5(VAR_1, -1))
      FUNC_0(VAR_1, "critical internal indexing error: __index__ is not a function");

    FUNC_9(VAR_1, 1);
    FUNC_9(VAR_1, 2);

    FUNC_1(VAR_1, 2, VAR_0);

    VAR_2 = FUNC_10(VAR_1, -1);
    FUNC_8(VAR_1, 1);

    if(VAR_2)
      return 1;





  }
  else
    FUNC_8(VAR_1, 1);

  FUNC_9(VAR_1, 2);
  FUNC_4(VAR_1, -2);

  return 1;
}
