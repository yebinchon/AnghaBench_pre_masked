
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,int,int ,char*,size_t) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4(FILE *VAR_1, WINDOW *VAR_2, WINDOW *VAR_3, int VAR_4, char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_1(VAR_2, VAR_4, 0, VAR_5, VAR_6);
 int VAR_8 = VAR_7 == VAR_0 ? VAR_0 : FUNC_1(VAR_3, VAR_4, 0, VAR_5 + VAR_7 + 1, VAR_6 - VAR_7 - 1);

 if (VAR_8 == VAR_0)
  return 0;
 VAR_5[VAR_7] = '|';
 VAR_5 = FUNC_2(VAR_5);

 return FUNC_0(VAR_1, "%s\n", FUNC_2(VAR_5)) == FUNC_3(VAR_5) + 1;
}
