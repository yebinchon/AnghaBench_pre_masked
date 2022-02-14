
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,scalar_t__,int) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (int *,int,scalar_t__) ;

int
FUNC_4(char **VAR_0, const char *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(((void*)0), 4, FUNC_0(VAR_1) + 1);
 VAR_4 = FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_1), VAR_2);

 *VAR_0 = FUNC_2(VAR_3, VAR_4 + 1);
 return (VAR_4);
}
