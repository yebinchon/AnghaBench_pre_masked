
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int *VAR_1, int *VAR_2)
{
  *VAR_1 = 0;
  *VAR_2 = 0;
  if(FUNC_0(VAR_0) == 1)
  {
    if(*VAR_0 == 'r')
    {
      *VAR_1 = 1;
      return 1;
    }
    else if(*VAR_0 == 'w')
    {
      *VAR_2 = 1;
      return 1;
    }
  }
  else if(FUNC_0(VAR_0) == 2)
  {
    if(VAR_0[0] == 'r' && VAR_0[1] == 'w')
    {
      *VAR_1 = 1;
      *VAR_2 = 1;
      return 1;
    }
  }
  return 0;
}
