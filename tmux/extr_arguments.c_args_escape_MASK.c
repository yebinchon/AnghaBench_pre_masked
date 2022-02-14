
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,char const) ;
 size_t FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char**,char const*,int) ;
 int FUNC_4 (char**,char*,...) ;
 char* FUNC_5 (char const*) ;

char *
FUNC_6(const char *VAR_5)
{
 static const char VAR_6[] = " #\"';${}";
 char *VAR_7, *VAR_8;
 int VAR_9;

 if (*VAR_5 == '\0')
  return (FUNC_5(VAR_5));
 if (VAR_5[0] != ' ' &&
     (FUNC_1(VAR_6, VAR_5[0]) != ((void*)0) || VAR_5[0] == '~') &&
     VAR_5[1] == '\0') {
  FUNC_4(&VAR_7, "\\%c", VAR_5[0]);
  return (VAR_7);
 }

 VAR_9 = VAR_3|VAR_0|VAR_4|VAR_2;
 if (VAR_5[FUNC_2(VAR_5, VAR_6)] != '\0')
  VAR_9 |= VAR_1;
 FUNC_3(&VAR_7, VAR_5, VAR_9);

 if (VAR_9 & VAR_1) {
  if (*VAR_7 == '~')
   FUNC_4(&VAR_8, "\"\\%s\"", VAR_7);
  else
   FUNC_4(&VAR_8, "\"%s\"", VAR_7);
 } else {
  if (*VAR_7 == '~')
   FUNC_4(&VAR_8, "\\%s", VAR_7);
  else
   VAR_8 = FUNC_5(VAR_7);
 }
 FUNC_0(VAR_7);
 return (VAR_8);
}
