
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int *) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(const char *VAR_0)
{
 char *VAR_1 = ((void*)0);
 char *VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = FUNC_0(VAR_0);


 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_2(VAR_0, ((void*)0));

 if (VAR_2 != ((void*)0)) {
  VAR_1 = FUNC_3(VAR_2);
  FUNC_1(VAR_2);
 }

 return (VAR_1);
}
