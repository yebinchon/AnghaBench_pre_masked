
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int lua_State ;
typedef scalar_t__ int64_t ;
typedef int buf ;
typedef int GCstr ;


 int * FUNC_0 (int *,char*,size_t) ;

GCstr *FUNC_1(lua_State *VAR_0, uint64_t VAR_1, int VAR_2)
{
  char VAR_3[1+20+3];
  char *VAR_4 = VAR_3+sizeof(VAR_3);
  int VAR_5 = 0;
  *--VAR_4 = 'L'; *--VAR_4 = 'L';
  if (VAR_2) {
    *--VAR_4 = 'U';
  } else if ((int64_t)VAR_1 < 0) {
    VAR_1 = (uint64_t)-(int64_t)VAR_1;
    VAR_5 = 1;
  }
  do { *--VAR_4 = (char)('0' + VAR_1 % 10); } while (VAR_1 /= 10);
  if (VAR_5) *--VAR_4 = '-';
  return FUNC_0(VAR_0, VAR_4, (size_t)(VAR_3+sizeof(VAR_3)-VAR_4));
}
