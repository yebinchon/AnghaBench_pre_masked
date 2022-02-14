
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_0)
{
 char *VAR_1 = FUNC_1(VAR_0);
 char *VAR_2;
 char *VAR_3;

 if (!VAR_1)
  return (((void*)0));


 VAR_2 = FUNC_4(VAR_1, '/') + 1;


 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3) {
  FUNC_0(VAR_1);
  return (((void*)0));
 }


 FUNC_2(VAR_2, VAR_3, FUNC_3(VAR_2) + 1);


 FUNC_0(VAR_3);

 return (VAR_1);
}
