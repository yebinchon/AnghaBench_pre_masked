
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char**) ;
 int FUNC_7 (int *,int) ;
 int VAR_3 ;
 int FUNC_8 (int *,int) ;

int FUNC_9 (int VAR_4, char **VAR_5) {
  int VAR_6, VAR_7;
  lua_State *VAR_8 = FUNC_1();
  if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_5[0], "cannot create state: not enough memory");
    return VAR_0;
  }
  FUNC_4(VAR_8, &VAR_3);
  FUNC_5(VAR_8, VAR_4);
  FUNC_6(VAR_8, VAR_5);
  VAR_6 = FUNC_3(VAR_8, 2, 1, 0);
  VAR_7 = FUNC_7(VAR_8, -1);
  FUNC_8(VAR_8, VAR_6);
  FUNC_2(VAR_8);
  return (VAR_7 && VAR_6 == VAR_2) ? VAR_1 : VAR_0;
}
