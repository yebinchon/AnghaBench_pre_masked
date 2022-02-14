
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char*,char*,char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,size_t,char const*,int ) ;
 int FUNC_6 (char const*) ;

bool
FUNC_7(char *VAR_2, size_t VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 const char *VAR_7 = VAR_1;
 char VAR_8[VAR_0];
 char VAR_9[VAR_0];
 size_t VAR_10;

 if (!VAR_4 || !*VAR_4)
  return 0;

 if (FUNC_1(VAR_4, '/')) {
  if (FUNC_0(VAR_4, VAR_6))
   return 0;
  FUNC_5(VAR_2, VAR_3, VAR_4, FUNC_6(VAR_4));
  return 1;
 }

 if (VAR_5 && *VAR_5)
  VAR_7 = VAR_5;

 while (VAR_7 && *VAR_7) {
  VAR_10 = FUNC_2(VAR_7, ":");
  if (VAR_10)
   FUNC_4(VAR_9, VAR_7, VAR_10);
  else
   FUNC_4(VAR_9, ".", 1);

  VAR_7 += VAR_10;
  if (*VAR_7)
   VAR_7 += 1;

  FUNC_3(VAR_8, "%s/%s", VAR_9, VAR_4);
  if (!FUNC_0(VAR_8, VAR_6)) {
   FUNC_5(VAR_2, VAR_3, VAR_8, FUNC_6(VAR_8));
   return 1;
  }
 }
 return 0;
}
