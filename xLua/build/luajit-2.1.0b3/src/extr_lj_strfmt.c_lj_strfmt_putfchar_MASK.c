
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int SFormat ;
typedef int SBuf ;
typedef int MSize ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;

SBuf *FUNC_3(SBuf *VAR_1, SFormat VAR_2, int32_t VAR_3)
{
  MSize VAR_4 = FUNC_0(VAR_2);
  char *VAR_5 = FUNC_1(VAR_1, VAR_4 > 1 ? VAR_4 : 1);
  if ((VAR_2 & VAR_0)) *VAR_5++ = (char)VAR_3;
  while (VAR_4-- > 1) *VAR_5++ = ' ';
  if (!(VAR_2 & VAR_0)) *VAR_5++ = (char)VAR_3;
  FUNC_2(VAR_1, VAR_5);
  return VAR_1;
}
