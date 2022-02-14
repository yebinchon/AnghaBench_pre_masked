
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_entry {char* alias; char* name; } ;


 struct cmd_entry** VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char**,char*,char const*,...) ;

__attribute__((used)) static const struct cmd_entry *
FUNC_5(const char *VAR_1, char **VAR_2)
{
 const struct cmd_entry **VAR_3, *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 char VAR_7[8192];

 VAR_6 = 0;
 for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); VAR_3++) {
  VAR_4 = *VAR_3;
  if (VAR_4->alias != ((void*)0) && FUNC_0(VAR_4->alias, VAR_1) == 0) {
   VAR_6 = 0;
   VAR_5 = VAR_4;
   break;
  }

  if (FUNC_3(VAR_4->name, VAR_1, FUNC_2(VAR_1)) != 0)
   continue;
  if (VAR_5 != ((void*)0))
   VAR_6 = 1;
  VAR_5 = VAR_4;

  if (FUNC_0(VAR_4->name, VAR_1) == 0)
   break;
 }
 if (VAR_6)
  goto ambiguous;
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_2, "unknown command: %s", VAR_1);
  return (((void*)0));
 }
 return (VAR_5);

ambiguous:
 *VAR_7 = '\0';
 for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); VAR_3++) {
  VAR_4 = *VAR_3;
  if (FUNC_3(VAR_4->name, VAR_1, FUNC_2(VAR_1)) != 0)
   continue;
  if (FUNC_1(VAR_7, VAR_4->name, sizeof VAR_7) >= sizeof VAR_7)
   break;
  if (FUNC_1(VAR_7, ", ", sizeof VAR_7) >= sizeof VAR_7)
   break;
 }
 VAR_7[FUNC_2(VAR_7) - 2] = '\0';
 FUNC_4(VAR_2, "ambiguous command: %s, could be: %s", VAR_1, VAR_7);
 return (((void*)0));
}
