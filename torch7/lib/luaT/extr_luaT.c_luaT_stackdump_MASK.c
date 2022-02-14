
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;





 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 double FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (int *,int) ;
 int FUNC_12 (char*,...) ;

void FUNC_13(lua_State *VAR_1)
{
  int VAR_2;
  const char *VAR_3 = ((void*)0);
  int VAR_4 = FUNC_1(VAR_1);
  for(VAR_2 = 1; VAR_2 <= VAR_4; VAR_2++)
  {
    int VAR_5 = FUNC_10(VAR_1, VAR_2);
    FUNC_12("%3d. ", VAR_2);
    switch(VAR_5)
    {
      case 130:
        FUNC_12("'%s'", FUNC_9(VAR_1,VAR_2));
        break;
      case 132:
        FUNC_12(FUNC_6(VAR_1, VAR_2) ? "true" : "false");
        break;
      case 131:
        FUNC_12("%g", FUNC_7(VAR_1,VAR_2));
        break;
      case 128:
        VAR_3 = FUNC_0(VAR_1, VAR_2);
        FUNC_12("userdata %p [%s]", FUNC_8(VAR_1, VAR_2), (VAR_3 ? VAR_3 : "not a Torch object"));
        break;
      case 10:
        VAR_3 = FUNC_0(VAR_1, VAR_2);
        FUNC_12("cdata %p [%s]", FUNC_8(VAR_1, VAR_2), (VAR_3 ? VAR_3 : "not a Torch object"));
        break;
      case 129:
        FUNC_4(VAR_1, VAR_2);
        FUNC_5(VAR_1, VAR_0);
        if(FUNC_2(VAR_1, -1))
          VAR_3 = FUNC_9(VAR_1, -1);
        else
          VAR_3 = ((void*)0);
        FUNC_3(VAR_1, 1);
        if(VAR_3)
          FUNC_12("metatable [%s]", VAR_3);
        else
        {
          VAR_3 = FUNC_0(VAR_1, VAR_2);
          FUNC_12("table %p [%s]", FUNC_8(VAR_1, VAR_2), (VAR_3 ? VAR_3 : "not a Torch object"));
        }
        break;
      default:
        FUNC_12("Lua object type: %s", FUNC_11(VAR_1,VAR_5));
        break;
    }
    FUNC_12("\n");
  }
  FUNC_12("---------------------------------------------\n");
}
