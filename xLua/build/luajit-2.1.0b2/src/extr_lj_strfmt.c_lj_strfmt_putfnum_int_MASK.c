
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int lua_Number ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef scalar_t__ SFormat ;
typedef int SBuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__,int ) ;
 int * FUNC_2 (int *,int ) ;

SBuf *FUNC_3(SBuf *VAR_1, SFormat VAR_2, lua_Number VAR_3)
{
  int64_t VAR_4 = (int64_t)VAR_3;
  if (FUNC_0(VAR_4) && VAR_2 == VAR_0)
    return FUNC_2(VAR_1, (int32_t)VAR_4);
  else
    return FUNC_1(VAR_1, VAR_2, (uint64_t)VAR_4);
}
