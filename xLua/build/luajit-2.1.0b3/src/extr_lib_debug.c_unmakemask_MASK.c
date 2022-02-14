
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *FUNC_0(int VAR_3, char *VAR_4)
{
  int VAR_5 = 0;
  if (VAR_3 & VAR_0) VAR_4[VAR_5++] = 'c';
  if (VAR_3 & VAR_2) VAR_4[VAR_5++] = 'r';
  if (VAR_3 & VAR_1) VAR_4[VAR_5++] = 'l';
  VAR_4[VAR_5] = '\0';
  return VAR_4;
}
