
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 char* FUNC_10 (int *,int) ;

__attribute__((used)) static const char* FUNC_11(lua_State *VAR_2, int VAR_3, const char *VAR_4)
{
  FUNC_6(VAR_2, "__cdataname");
  FUNC_8(VAR_2, VAR_0);
  if(FUNC_3(VAR_2,-1))
  {
    FUNC_5(VAR_2, 1);

    if(FUNC_0(VAR_2, VAR_1))
      FUNC_1(VAR_2, "internal error (could not load cdataname): %s", FUNC_10(VAR_2, -1));

    FUNC_6(VAR_2, "__cdataname");
    FUNC_7(VAR_2, -2);
    FUNC_9(VAR_2, VAR_0);
  }
  if(!FUNC_2(VAR_2, -1))
    FUNC_1(VAR_2, "internal error (cdataname is not a function)");

  FUNC_7(VAR_2, VAR_3);
  if(VAR_4)
    FUNC_6(VAR_2, VAR_4);
  if(FUNC_4(VAR_2, (VAR_4 ? 2 : 1), 1, 0))
    FUNC_1(VAR_2, "internal error (cdataname): %s", FUNC_10(VAR_2, -1));

  VAR_4 = FUNC_10(VAR_2, -1);
  FUNC_5(VAR_2, 1);

  return VAR_4;
}
