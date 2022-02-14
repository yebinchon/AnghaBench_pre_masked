
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tm {int dummy; } ;
struct format_tree {scalar_t__ loop; int flags; int time; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct format_tree*,char*) ;
 int FUNC_1 (struct format_tree*,char*,...) ;
 scalar_t__ FUNC_2 (struct format_tree*) ;
 char** VAR_2 ;
 int FUNC_3 (struct format_tree*,char const*,size_t,char**,size_t*,size_t*) ;
 char* FUNC_4 (char*,char*) ;
 char** VAR_3 ;
 int FUNC_5 (char*) ;
 struct tm* FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char*,int,char const*,struct tm*) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (size_t) ;
 char* FUNC_12 (char*,int,size_t) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (char const*,size_t) ;

__attribute__((used)) static char *
FUNC_15(struct format_tree *VAR_4, const char *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 const char *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 struct tm *VAR_18;
 char VAR_19[8192];

 if (VAR_5 == ((void*)0) || *VAR_5 == '\0')
  return (FUNC_13(""));

 if (VAR_4->loop == VAR_0)
  return (FUNC_13(""));
 VAR_4->loop++;

 FUNC_1(VAR_4, "expanding format: %s", VAR_5);

 if (VAR_6) {
  VAR_18 = FUNC_6(&VAR_4->time);
  if (FUNC_9(VAR_19, sizeof VAR_19, VAR_5, VAR_18) == 0) {
   FUNC_1(VAR_4, "format is too long");
   return (FUNC_13(""));
  }
  if (FUNC_2(VAR_4) && FUNC_8(VAR_19, VAR_5) != 0)
   FUNC_1(VAR_4, "after time expanded: %s", VAR_19);
  VAR_5 = VAR_19;
 }

 VAR_13 = 64;
 VAR_7 = FUNC_11(VAR_13);
 VAR_12 = 0;

 while (*VAR_5 != '\0') {
  if (*VAR_5 != '#') {
   while (VAR_13 - VAR_12 < 2) {
    VAR_7 = FUNC_12(VAR_7, 2, VAR_13);
    VAR_13 *= 2;
   }
   VAR_7[VAR_12++] = *VAR_5++;
   continue;
  }
  VAR_5++;

  VAR_16 = (u_char)*VAR_5++;
  switch (VAR_16) {
  case '(':
   VAR_17 = 1;
   for (VAR_10 = VAR_5; *VAR_10 != '\0'; VAR_10++) {
    if (*VAR_10 == '(')
     VAR_17++;
    if (*VAR_10 == ')' && --VAR_17 == 0)
     break;
   }
   if (*VAR_10 != ')' || VAR_17 != 0)
    break;
   VAR_14 = VAR_10 - VAR_5;

   VAR_9 = FUNC_14(VAR_5, VAR_14);
   FUNC_1(VAR_4, "found #(): %s", VAR_9);

   if (VAR_4->flags & VAR_1) {
    VAR_8 = FUNC_13("");
    FUNC_1(VAR_4, "#() is disabled");
   } else {
    VAR_8 = FUNC_0(VAR_4, VAR_9);
    FUNC_1(VAR_4, "#() result: %s", VAR_8);
   }
   FUNC_5(VAR_9);

   VAR_15 = FUNC_10(VAR_8);
   while (VAR_13 - VAR_12 < VAR_15 + 1) {
    VAR_7 = FUNC_12(VAR_7, 2, VAR_13);
    VAR_13 *= 2;
   }
   FUNC_7(VAR_7 + VAR_12, VAR_8, VAR_15);
   VAR_12 += VAR_15;

   FUNC_5(VAR_8);

   VAR_5 += VAR_14 + 1;
   continue;
  case '{':
   VAR_10 = FUNC_4((char *)VAR_5 - 2, "}");
   if (VAR_10 == ((void*)0))
    break;
   VAR_14 = VAR_10 - VAR_5;

   FUNC_1(VAR_4, "found #{}: %.*s", (int)VAR_14, VAR_5);
   if (FUNC_3(VAR_4, VAR_5, VAR_14, &VAR_7, &VAR_13, &VAR_12) != 0)
    break;
   VAR_5 += VAR_14 + 1;
   continue;
  case '}':
  case '#':
  case ',':
   FUNC_1(VAR_4, "found #%c", VAR_16);
   while (VAR_13 - VAR_12 < 2) {
    VAR_7 = FUNC_12(VAR_7, 2, VAR_13);
    VAR_13 *= 2;
   }
   VAR_7[VAR_12++] = VAR_16;
   continue;
  default:
   VAR_11 = ((void*)0);
   if (VAR_16 >= 'A' && VAR_16 <= 'Z')
    VAR_11 = VAR_3[VAR_16 - 'A'];
   else if (VAR_16 >= 'a' && VAR_16 <= 'z')
    VAR_11 = VAR_2[VAR_16 - 'a'];
   if (VAR_11 == ((void*)0)) {
    while (VAR_13 - VAR_12 < 3) {
     VAR_7 = FUNC_12(VAR_7, 2, VAR_13);
     VAR_13 *= 2;
    }
    VAR_7[VAR_12++] = '#';
    VAR_7[VAR_12++] = VAR_16;
    continue;
   }
   VAR_14 = FUNC_10(VAR_11);
   FUNC_1(VAR_4, "found #%c: %s", VAR_16, VAR_11);
   if (FUNC_3(VAR_4, VAR_11, VAR_14, &VAR_7, &VAR_13, &VAR_12) != 0)
    break;
   continue;
  }

  break;
 }
 VAR_7[VAR_12] = '\0';

 FUNC_1(VAR_4, "result is: %s", VAR_7);
 VAR_4->loop--;

 return (VAR_7);
}
