
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char*) ;

char *
FUNC_6(char *VAR_0)
{
 char *VAR_1 = FUNC_2(VAR_0);
 char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
 if (!VAR_1)
  return (((void*)0));

 if ((VAR_2 = FUNC_5(VAR_1, "-part")) && VAR_2 != VAR_1) {
  VAR_3 = VAR_2 + 5;
 } else if ((VAR_2 = FUNC_4(VAR_1, 'p')) &&
     VAR_2 > VAR_1 + 1 && FUNC_1(*(VAR_2-1))) {
  VAR_3 = VAR_2 + 1;
 } else if ((VAR_1[0] == 'h' || VAR_1[0] == 's' || VAR_1[0] == 'v') &&
     VAR_1[1] == 'd') {
  for (VAR_3 = &VAR_1[2]; FUNC_0(*VAR_3); VAR_2 = ++VAR_3) { }
 } else if (FUNC_3("xvd", VAR_1, 3) == 0) {
  for (VAR_3 = &VAR_1[3]; FUNC_0(*VAR_3); VAR_2 = ++VAR_3) { }
 }
 if (VAR_2 && VAR_3 && *VAR_3 != '\0') {
  for (; FUNC_1(*VAR_3); VAR_3++) { }
  if (*VAR_3 == '\0')
   *VAR_2 = '\0';
 }

 return (VAR_1);
}
