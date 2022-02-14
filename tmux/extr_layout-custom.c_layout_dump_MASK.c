
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layout_cell {int dummy; } ;


 scalar_t__ FUNC_0 (struct layout_cell*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,int ,char*) ;

char *
FUNC_3(struct layout_cell *VAR_0)
{
 char VAR_1[8192], *VAR_2;

 *VAR_1 = '\0';
 if (FUNC_0(VAR_0, VAR_1, sizeof VAR_1) != 0)
  return (((void*)0));

 FUNC_2(&VAR_2, "%04hx,%s", FUNC_1(VAR_1), VAR_1);
 return (VAR_2);
}
