
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0, char **VAR_1)
{
  int VAR_2 = 0;
  FUNC_2(VAR_0, "bcsave");
  if (FUNC_0(VAR_0))
    return 1;
  if (VAR_1[0][2]) {
    VAR_2++;
    VAR_1[0][1] = '-';
    FUNC_3(VAR_0, VAR_1[0]+1);
  }
  for (VAR_1++; *VAR_1 != ((void*)0); VAR_2++, VAR_1++)
    FUNC_3(VAR_0, *VAR_1);
  FUNC_4(VAR_0, FUNC_1(VAR_0, VAR_2, 0, 0));
  return -1;
}
