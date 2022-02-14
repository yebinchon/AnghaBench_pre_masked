
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int MSize ;


 int VAR_0 ;
 void* FUNC_0 (int *,void*,int,int) ;

void *FUNC_1(lua_State *VAR_1, void *VAR_2, MSize *VAR_3, MSize VAR_4, MSize VAR_5)
{
  MSize VAR_6 = (*VAR_3) << 1;
  if (VAR_6 < VAR_0)
    VAR_6 = VAR_0;
  if (VAR_6 > VAR_4)
    VAR_6 = VAR_4;
  VAR_2 = FUNC_0(VAR_1, VAR_2, (*VAR_3)*VAR_5, VAR_6*VAR_5);
  *VAR_3 = VAR_6;
  return VAR_2;
}
