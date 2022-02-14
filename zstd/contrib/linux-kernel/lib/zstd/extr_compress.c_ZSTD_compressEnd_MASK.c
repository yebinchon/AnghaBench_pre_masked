
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,void*,size_t,void const*,size_t,int,int) ;
 scalar_t__ FUNC_1 (size_t const) ;
 size_t FUNC_2 (int *,char*,size_t) ;

size_t FUNC_3(ZSTD_CCtx *VAR_0, void *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 size_t const VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1, 1);
 if (FUNC_1(VAR_6))
  return VAR_6;
 VAR_5 = FUNC_2(VAR_0, (char *)VAR_1 + VAR_6, VAR_2 - VAR_6);
 if (FUNC_1(VAR_5))
  return VAR_5;
 return VAR_6 + VAR_5;
}
