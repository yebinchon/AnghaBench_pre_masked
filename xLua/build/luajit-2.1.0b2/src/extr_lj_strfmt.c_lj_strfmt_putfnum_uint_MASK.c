
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef double lua_Number ;
typedef scalar_t__ int64_t ;
typedef int SFormat ;
typedef int SBuf ;


 int * FUNC_0 (int *,int ,int ) ;

SBuf *FUNC_1(SBuf *VAR_0, SFormat VAR_1, lua_Number VAR_2)
{
  int64_t VAR_3;
  if (VAR_2 >= 9223372036854775808.0)
    VAR_3 = (int64_t)(VAR_2 - 18446744073709551616.0);
  else
    VAR_3 = (int64_t)VAR_2;
  return FUNC_0(VAR_0, VAR_1, (uint64_t)VAR_3);
}
