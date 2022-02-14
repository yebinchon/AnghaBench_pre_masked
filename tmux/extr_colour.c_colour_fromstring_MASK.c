
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char const*,int ,int,char const**) ;

int
FUNC_8(const char *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;
 int VAR_4;
 u_char VAR_5, VAR_6, VAR_7;

 if (*VAR_1 == '#' && FUNC_5(VAR_1) == 7) {
  for (VAR_3 = VAR_1 + 1; FUNC_1((u_char) *VAR_3); VAR_3++)
   ;
  if (*VAR_3 != '\0')
   return (-1);
  VAR_4 = FUNC_2(VAR_1 + 1, "%2hhx%2hhx%2hhx", &VAR_5, &VAR_6, &VAR_7);
  if (VAR_4 != 3)
   return (-1);
  return (FUNC_0(VAR_5, VAR_6, VAR_7));
 }

 if (FUNC_6(VAR_1, "colour", (sizeof "colour") - 1) == 0) {
  VAR_4 = FUNC_7(VAR_1 + (sizeof "colour") - 1, 0, 255, &VAR_2);
  if (VAR_2 != ((void*)0))
   return (-1);
  return (VAR_4 | VAR_0);
 }

 if (FUNC_3(VAR_1, "default") == 0)
  return (8);
 if (FUNC_3(VAR_1, "terminal") == 0)
  return (9);

 if (FUNC_3(VAR_1, "black") == 0 || FUNC_4(VAR_1, "0") == 0)
  return (0);
 if (FUNC_3(VAR_1, "red") == 0 || FUNC_4(VAR_1, "1") == 0)
  return (1);
 if (FUNC_3(VAR_1, "green") == 0 || FUNC_4(VAR_1, "2") == 0)
  return (2);
 if (FUNC_3(VAR_1, "yellow") == 0 || FUNC_4(VAR_1, "3") == 0)
  return (3);
 if (FUNC_3(VAR_1, "blue") == 0 || FUNC_4(VAR_1, "4") == 0)
  return (4);
 if (FUNC_3(VAR_1, "magenta") == 0 || FUNC_4(VAR_1, "5") == 0)
  return (5);
 if (FUNC_3(VAR_1, "cyan") == 0 || FUNC_4(VAR_1, "6") == 0)
  return (6);
 if (FUNC_3(VAR_1, "white") == 0 || FUNC_4(VAR_1, "7") == 0)
  return (7);
 if (FUNC_3(VAR_1, "brightblack") == 0 || FUNC_4(VAR_1, "90") == 0)
  return (90);
 if (FUNC_3(VAR_1, "brightred") == 0 || FUNC_4(VAR_1, "91") == 0)
  return (91);
 if (FUNC_3(VAR_1, "brightgreen") == 0 || FUNC_4(VAR_1, "92") == 0)
  return (92);
 if (FUNC_3(VAR_1, "brightyellow") == 0 || FUNC_4(VAR_1, "93") == 0)
  return (93);
 if (FUNC_3(VAR_1, "brightblue") == 0 || FUNC_4(VAR_1, "94") == 0)
  return (94);
 if (FUNC_3(VAR_1, "brightmagenta") == 0 || FUNC_4(VAR_1, "95") == 0)
  return (95);
 if (FUNC_3(VAR_1, "brightcyan") == 0 || FUNC_4(VAR_1, "96") == 0)
  return (96);
 if (FUNC_3(VAR_1, "brightwhite") == 0 || FUNC_4(VAR_1, "97") == 0)
  return (97);
 return (-1);
}
