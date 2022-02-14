
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 char** VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static uint32_t FUNC_5(char **VAR_7, int VAR_8, int VAR_9)
{
  char *VAR_10 = *VAR_7;
  if (VAR_10) {
    uint32_t VAR_11;
    char *VAR_12 = FUNC_2(VAR_10, ' ');
    if (VAR_12) *VAR_12++ = '\0';
    *VAR_7 = VAR_12;
    if (VAR_8 && !FUNC_4(VAR_10, "IRFPM_", 6)) {
      for (VAR_11 = 0; VAR_3[VAR_11]; VAR_11++)
 if (!FUNC_3(VAR_3[VAR_11], VAR_10+6))
   return VAR_11;
    } else if (VAR_8 && !FUNC_4(VAR_10, "IRFL_", 5)) {
      for (VAR_11 = 0; VAR_2[VAR_11]; VAR_11++)
 if (!FUNC_3(VAR_2[VAR_11], VAR_10+5))
   return VAR_11;
    } else if (VAR_8 && !FUNC_4(VAR_10, "IRCALL_", 7)) {
      for (VAR_11 = 0; VAR_1[VAR_11]; VAR_11++)
 if (!FUNC_3(VAR_1[VAR_11], VAR_10+7))
   return VAR_11;
    } else if (VAR_8 && !FUNC_4(VAR_10, "IRCONV_", 7)) {
      for (VAR_11 = 0; VAR_4[VAR_11]; VAR_11++) {
 const char *VAR_13 = FUNC_2(VAR_10+7, '_');
 if (VAR_13 && !FUNC_4(VAR_4[VAR_11], VAR_10+7, VAR_13-(VAR_10+7))) {
   uint32_t VAR_14;
   for (VAR_14 = 0; VAR_4[VAR_14]; VAR_14++)
     if (!FUNC_3(VAR_4[VAR_14], VAR_13+1))
       return (VAR_11 << 5) + VAR_14;
 }
      }
    } else if (VAR_8 && *VAR_10 >= '0' && *VAR_10 <= '9') {
      for (VAR_11 = 0; *VAR_10 >= '0' && *VAR_10 <= '9'; VAR_10++)
 VAR_11 = VAR_11*10 + (*VAR_10 - '0');
      if (*VAR_10 == '\0')
 return VAR_11;
    } else if (VAR_9 && !FUNC_3("any", VAR_10)) {
      return VAR_9;
    } else {
      for (VAR_11 = 0; VAR_0[VAR_11]; VAR_11++)
 if (!FUNC_3(VAR_0[VAR_11], VAR_10))
   return VAR_11;
    }
    FUNC_1(VAR_6, "Error: bad fold definition token \"%s\" at line %d\n", VAR_10, VAR_5);
    FUNC_0(1);
  }
  return 0;
}
