
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__*,char const**) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const**,int*,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static bool
FUNC_5(void)
{
 const char *VAR_2[VAR_0];
 int VAR_3 = 0;
 char *VAR_4 = FUNC_3("grep: ");

 FUNC_4();

 if (!VAR_4 || !*VAR_4 || !FUNC_2(VAR_2, &VAR_3, VAR_4))
  return 0;
 if (VAR_1)
  FUNC_1(VAR_1);
 return FUNC_0(&VAR_1, VAR_2);
}
