
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

void
FUNC_3(int VAR_0, char **VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 (void) FUNC_2(VAR_2, FUNC_0(VAR_1[0]), VAR_3);
 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  (void) FUNC_1(VAR_2, " ", VAR_3);
  (void) FUNC_1(VAR_2, VAR_1[VAR_4], VAR_3);
 }
}
