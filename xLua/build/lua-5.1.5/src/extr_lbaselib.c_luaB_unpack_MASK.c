
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2) {
  int VAR_3, VAR_4, VAR_5;
  FUNC_0(VAR_2, 1, VAR_0);
  VAR_3 = FUNC_4(VAR_2, 2, 1);
  VAR_4 = FUNC_3(VAR_2, VAR_1, 3, FUNC_2(VAR_2, 1));
  if (VAR_3 > VAR_4) return 0;
  VAR_5 = VAR_4 - VAR_3 + 1;
  if (VAR_5 <= 0 || !FUNC_5(VAR_2, VAR_5))
    return FUNC_1(VAR_2, "too many results to unpack");
  FUNC_6(VAR_2, 1, VAR_3);
  while (VAR_3++ < VAR_4)
    FUNC_6(VAR_2, 1, VAR_3);
  return VAR_5;
}
