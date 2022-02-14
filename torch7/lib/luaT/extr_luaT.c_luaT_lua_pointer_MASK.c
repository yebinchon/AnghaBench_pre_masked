
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 void* FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,int) ;
 void** FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

int FUNC_14(lua_State *VAR_0)
{
  if(FUNC_13(VAR_0, 1) == 10)
  {


    const void* VAR_1 = *((void**)FUNC_10(VAR_0, 1));
    FUNC_3(VAR_0, VAR_1);
    return 1;
  }
  else if (FUNC_2(VAR_0, 1))
  {
    void** VAR_2 = (void**)FUNC_12(VAR_0, 1);
    FUNC_3(VAR_0, VAR_2[4]);
    return 1;
  }
  else if(FUNC_9(VAR_0, 1))
  {
    void **VAR_3;
    FUNC_0(VAR_0, FUNC_4(VAR_0, 1), 1, "Torch object expected");
    VAR_3 = FUNC_12(VAR_0, 1);
    FUNC_3(VAR_0, *VAR_3);
    return 1;
  }
  else if(FUNC_7(VAR_0, 1) || FUNC_8(VAR_0, 1) || FUNC_5(VAR_0, 1))
  {
    const void* VAR_4 = FUNC_10(VAR_0, 1);
    FUNC_3(VAR_0, VAR_4);
    return 1;
  }
  else if(FUNC_6(VAR_0, 1))
  {
    const char* VAR_5 = FUNC_11(VAR_0, 1);
    FUNC_3(VAR_0, VAR_5);
    return 1;
  }
  else
    FUNC_1(VAR_0, "Torch object, table, thread, cdata or function expected");

  return 0;
}
