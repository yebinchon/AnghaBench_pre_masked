
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int) ;

const char* FUNC_9(lua_State *VAR_1)
{
  FUNC_1(VAR_1, "torch");
  if(FUNC_4(VAR_1, -1))
  {
    FUNC_0(VAR_1, -1, "Tensor");
    if(FUNC_4(VAR_1, -1))
    {
      if(FUNC_2(VAR_1, -1))
      {
        FUNC_6(VAR_1, "__index");
        FUNC_7(VAR_1, -2);
        if(FUNC_4(VAR_1, -1))
        {
          FUNC_7(VAR_1, VAR_0);
          if(FUNC_3(VAR_1, -1))
          {
            const char *VAR_2 = FUNC_8(VAR_1, -1);
            FUNC_5(VAR_1, 4);
            return VAR_2;
          }
        }
        else
        {
          FUNC_5(VAR_1, 4);
          return ((void*)0);
        }
      }
      else
      {
        FUNC_5(VAR_1, 2);
        return ((void*)0);
      }
    }
    else
    {
      FUNC_5(VAR_1, 2);
      return ((void*)0);
    }
  }
  else
  {
    FUNC_5(VAR_1, 1);
    return ((void*)0);
  }
  return ((void*)0);
}
