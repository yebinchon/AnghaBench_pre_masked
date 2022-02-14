
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char**,int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1[VAR_0], int *VAR_2, char *VAR_3, bool VAR_4)
{
 while (*VAR_3 && *VAR_2 < VAR_0) {
  char *VAR_5 = FUNC_0(&VAR_3, VAR_4);

  if (!VAR_5)
   break;
  VAR_1[(*VAR_2)++] = VAR_5;
  VAR_3 = FUNC_1(VAR_3);
 }

 if (*VAR_2 < VAR_0)
  VAR_1[*VAR_2] = ((void*)0);
 return *VAR_2 < VAR_0;
}
