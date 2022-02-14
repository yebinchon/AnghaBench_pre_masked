
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char const) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3, *VAR_4;
 const char *VAR_5, *VAR_6, VAR_7[] = "\"\\$;";
 int VAR_8, VAR_9;
 size_t VAR_10;

 if (FUNC_0(VAR_0, '%') == ((void*)0))
  return (FUNC_4(VAR_0));

 VAR_4 = FUNC_2(1);
 *VAR_4 = '\0';
 VAR_10 = 0;
 VAR_8 = 0;

 VAR_5 = VAR_0;
 while (*VAR_5 != '\0') {
  switch (VAR_3 = *VAR_5++) {
  case '%':
   if (*VAR_5 < '1' || *VAR_5 > '9' || *VAR_5 - '0' != VAR_2) {
    if (*VAR_5 != '%' || VAR_8)
     break;
    VAR_8 = 1;
   }
   VAR_5++;

   VAR_9 = (*VAR_5 == '%');
   if (VAR_9)
    VAR_5++;

   VAR_4 = FUNC_3(VAR_4, VAR_10 + (FUNC_1(VAR_1) * 3) + 1);
   for (VAR_6 = VAR_1; *VAR_6 != '\0'; VAR_6++) {
    if (VAR_9 && FUNC_0(VAR_7, *VAR_6) != ((void*)0))
     VAR_4[VAR_10++] = '\\';
    VAR_4[VAR_10++] = *VAR_6;
   }
   VAR_4[VAR_10] = '\0';
   continue;
  }
  VAR_4 = FUNC_3(VAR_4, VAR_10 + 2);
  VAR_4[VAR_10++] = VAR_3;
  VAR_4[VAR_10] = '\0';
 }

 return (VAR_4);
}
