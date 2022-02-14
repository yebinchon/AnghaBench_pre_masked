
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3 = *VAR_0;
 char *VAR_4, *VAR_5;

 for (VAR_5 = VAR_4 = VAR_3; *VAR_5; VAR_5++) {
  int VAR_6 = *VAR_5;

  if (VAR_6 == '"' || VAR_6 == '\'') {
   if (VAR_2 == VAR_6) {
    VAR_2 = 0;
    if (VAR_1) {
     if (VAR_5 == VAR_3) {
      VAR_3++;
      VAR_4++;
     }
     continue;
    }

   } else if (!VAR_2) {
    VAR_2 = VAR_6;
    if (VAR_1) {
     if (VAR_5 == VAR_3) {
      VAR_3++;
      VAR_4++;
     }
     continue;
    }
   }

  } else if (VAR_2 && VAR_6 == '\\') {
   if (VAR_1) {
    if (VAR_5 == VAR_3) {
     VAR_3++;
     VAR_4++;
    }
   } else {
    *VAR_4++ = *VAR_5;
   }
   VAR_5++;
   if (!*VAR_5)
    break;
  }

  if (!VAR_2 && FUNC_0(VAR_6))
   break;

  *VAR_4++ = *VAR_5;
 }

 if (*VAR_5)
  *VAR_0 = VAR_5 + 1;
 else
  *VAR_0 = VAR_5;
 *VAR_4 = 0;
 return (!VAR_1 || !VAR_2) ? VAR_3 : ((void*)0);
}
