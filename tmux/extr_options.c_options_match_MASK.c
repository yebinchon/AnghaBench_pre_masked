
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int * name; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int*) ;
 struct options_table_entry* VAR_0 ;
 scalar_t__ FUNC_2 (int *,char*) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char*,size_t) ;
 char* FUNC_5 (int *) ;

char *
FUNC_6(const char *VAR_1, int *VAR_2, int *VAR_3)
{
 const struct options_table_entry *VAR_4, *VAR_5;
 char *VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_7 = FUNC_3(VAR_6);

 if (*VAR_6 == '@') {
  *VAR_3 = 0;
  return (VAR_6);
 }

 VAR_5 = ((void*)0);
 for (VAR_4 = VAR_0; VAR_4->name != ((void*)0); VAR_4++) {
  if (FUNC_2(VAR_4->name, VAR_6) == 0) {
   VAR_5 = VAR_4;
   break;
  }
  if (FUNC_4(VAR_4->name, VAR_6, VAR_7) == 0) {
   if (VAR_5 != ((void*)0)) {
    *VAR_3 = 1;
    FUNC_0(VAR_6);
    return (((void*)0));
   }
   VAR_5 = VAR_4;
  }
 }
 FUNC_0(VAR_6);
 if (VAR_5 == ((void*)0)) {
  *VAR_3 = 0;
  return (((void*)0));
 }
 return (FUNC_5(VAR_5->name));
}
