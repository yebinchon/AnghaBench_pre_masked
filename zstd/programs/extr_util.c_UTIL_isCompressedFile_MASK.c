
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1[])
{
  const char* VAR_2 = FUNC_0(VAR_0);
  while(*VAR_1!=((void*)0))
  {
    const int VAR_3 = FUNC_1(VAR_2,*VAR_1);
    if(VAR_3==0)
      return 1;
    ++VAR_1;
  }
   return 0;
}
