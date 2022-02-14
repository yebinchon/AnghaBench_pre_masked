
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,size_t,size_t*,char*,...) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0[], char *VAR_1, size_t VAR_2, const char *VAR_3, bool VAR_4)
{
 size_t VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_0[VAR_6]; VAR_6++) {
  const char *VAR_7 = VAR_6 ? VAR_3 : "";
  const char *VAR_8 = VAR_0[VAR_6];

  if (VAR_4 && VAR_8[FUNC_0(VAR_8, " \t\"")]) {
   if (!FUNC_1(VAR_1, VAR_2, &VAR_5, "%s\"", VAR_7))
    return 0;

   while (*VAR_8) {
    int VAR_9 = FUNC_0(VAR_8, "\"");
    const char *VAR_10 = VAR_8[VAR_9] == '"' ? "\\\"" : "";

    if (!FUNC_1(VAR_1, VAR_2, &VAR_5, "%.*s%s", VAR_9, VAR_8, VAR_10))
     return 0;
    if (!VAR_8[VAR_9])
     break;
    else
     VAR_8 += VAR_9 + 1;
   }

   if (!FUNC_1(VAR_1, VAR_2, &VAR_5, "\""))
    return 0;

   continue;
  }

  if (!FUNC_1(VAR_1, VAR_2, &VAR_5, "%s%s", VAR_7, VAR_8))
   return 0;
 }

 return 1;
}
