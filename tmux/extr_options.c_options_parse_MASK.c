
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_0, int *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;

 if (*VAR_0 == '\0')
  return (((void*)0));
 VAR_2 = FUNC_4(VAR_0);
 if ((VAR_3 = FUNC_3(VAR_2, '[')) == ((void*)0)) {
  *VAR_1 = -1;
  return (VAR_2);
 }
 VAR_4 = FUNC_3(VAR_3 + 1, ']');
 if (VAR_4 == ((void*)0) || VAR_4[1] != '\0' || !FUNC_1((u_char)VAR_4[-1])) {
  FUNC_0(VAR_2);
  return (((void*)0));
 }
 if (FUNC_2(VAR_3, "[%d]", VAR_1) != 1 || *VAR_1 < 0) {
  FUNC_0(VAR_2);
  return (((void*)0));
 }
 *VAR_3 = '\0';
 return (VAR_2);
}
