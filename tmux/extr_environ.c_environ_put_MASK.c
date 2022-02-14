
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {int dummy; } ;


 int FUNC_0 (struct environ*,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;

void
FUNC_5(struct environ *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_3 = FUNC_2(VAR_1, '=');
 if (VAR_3 == ((void*)0))
  return;
 VAR_3++;

 VAR_2 = FUNC_4(VAR_1);
 VAR_2[FUNC_3(VAR_2, "=")] = '\0';

 FUNC_0(VAR_0, VAR_2, "%s", VAR_3);
 FUNC_1(VAR_2);
}
