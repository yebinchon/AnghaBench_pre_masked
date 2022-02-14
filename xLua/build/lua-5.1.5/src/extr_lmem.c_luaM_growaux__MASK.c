
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 void* FUNC_1 (int *,void*,int,int,size_t) ;

void *FUNC_2 (lua_State *VAR_1, void *VAR_2, int *VAR_3, size_t VAR_4,
                     int VAR_5, const char *VAR_6) {
  void *VAR_7;
  int VAR_8;
  if (*VAR_3 >= VAR_5/2) {
    if (*VAR_3 >= VAR_5)
      FUNC_0(VAR_1, VAR_6);
    VAR_8 = VAR_5;
  }
  else {
    VAR_8 = (*VAR_3)*2;
    if (VAR_8 < VAR_0)
      VAR_8 = VAR_0;
  }
  VAR_7 = FUNC_1(VAR_1, VAR_2, *VAR_3, VAR_8, VAR_4);
  *VAR_3 = VAR_8;
  return VAR_7;
}
