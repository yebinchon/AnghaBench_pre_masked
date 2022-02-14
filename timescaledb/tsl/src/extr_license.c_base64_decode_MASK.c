
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0)
{
 int VAR_1 = FUNC_4(VAR_0);
 int VAR_2 = FUNC_2(VAR_1) + 1;
 char *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3);

 if (VAR_4 < 0)
  return ((void*)0);

 FUNC_0(VAR_4 < VAR_2);
 VAR_3[VAR_4] = '\0';
 return VAR_3;
}
