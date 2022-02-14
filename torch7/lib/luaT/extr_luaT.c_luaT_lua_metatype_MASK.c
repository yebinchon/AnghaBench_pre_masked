
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(lua_State *VAR_2)
{
  if( (FUNC_4(VAR_2) != 2) && (FUNC_4(VAR_2) != 3) )
    FUNC_2(VAR_2, "expecting: string table [ctype]");

  FUNC_0(VAR_2, 1);
  FUNC_1(VAR_2, 2, VAR_1);

  if(FUNC_4(VAR_2) == 3)
  {
    if(!FUNC_3(VAR_2, 3, FUNC_7(VAR_2, 1)))
      FUNC_2(VAR_2, "could not register cdata type -- missing ffi library?");
  }


  FUNC_5(VAR_2, 1);
  FUNC_5(VAR_2, 2);
  FUNC_6(VAR_2, VAR_0);


  FUNC_5(VAR_2, 2);
  FUNC_5(VAR_2, 1);
  FUNC_6(VAR_2, VAR_0);

  return 0;
}
