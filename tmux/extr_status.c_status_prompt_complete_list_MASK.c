
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct options_table_entry {char const* name; } ;
struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;
struct cmd_entry {char const* name; } ;
struct TYPE_2__ {char* string; } ;


 struct cmd_entry** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*) ;
 struct options_array_item* FUNC_1 (struct options_entry*) ;
 TYPE_1__* FUNC_2 (struct options_array_item*) ;
 struct options_array_item* FUNC_3 (struct options_array_item*) ;
 struct options_entry* FUNC_4 (int ,char*) ;
 struct options_table_entry* VAR_2 ;
 char* FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,size_t) ;
 char** FUNC_8 (char**,size_t,int) ;
 char* FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,size_t) ;

char **
FUNC_11(u_int *VAR_3, const char *VAR_4)
{
 char **VAR_5 = ((void*)0);
 const char **VAR_6, *VAR_7, *VAR_8;
 const struct cmd_entry **VAR_9;
 const struct options_table_entry *VAR_10;
 u_int VAR_11;
 size_t VAR_12 = FUNC_6(VAR_4), VAR_13;
 struct options_entry *VAR_14;
 struct options_array_item *VAR_15;
 const char *VAR_16[] = {
  "even-horizontal", "even-vertical", "main-horizontal",
  "main-vertical", "tiled", ((void*)0)
 };

 *VAR_3 = 0;
 for (VAR_9 = VAR_0; *VAR_9 != ((void*)0); VAR_9++) {
  if (FUNC_7((*VAR_9)->name, VAR_4, VAR_12) == 0) {
   VAR_5 = FUNC_8(VAR_5, (*VAR_3) + 1, sizeof *VAR_5);
   VAR_5[(*VAR_3)++] = FUNC_9((*VAR_9)->name);
  }
 }
 for (VAR_10 = VAR_2; VAR_10->name != ((void*)0); VAR_10++) {
  if (FUNC_7(VAR_10->name, VAR_4, VAR_12) == 0) {
   VAR_5 = FUNC_8(VAR_5, (*VAR_3) + 1, sizeof *VAR_5);
   VAR_5[(*VAR_3)++] = FUNC_9(VAR_10->name);
  }
 }
 for (VAR_6 = VAR_16; *VAR_6 != ((void*)0); VAR_6++) {
  if (FUNC_7(*VAR_6, VAR_4, VAR_12) == 0) {
   VAR_5 = FUNC_8(VAR_5, (*VAR_3) + 1, sizeof *VAR_5);
   VAR_5[(*VAR_3)++] = FUNC_9(*VAR_6);
  }
 }
 VAR_14 = FUNC_4(VAR_1, "command-alias");
 if (VAR_14 != ((void*)0)) {
  VAR_15 = FUNC_1(VAR_14);
  while (VAR_15 != ((void*)0)) {
   VAR_7 = FUNC_2(VAR_15)->string;
   if ((VAR_8 = FUNC_5(VAR_7, '=')) == ((void*)0))
    goto next;
   VAR_13 = VAR_8 - VAR_7;
   if (VAR_12 > VAR_13 || FUNC_7(VAR_7, VAR_4, VAR_12) != 0)
    goto next;

   VAR_5 = FUNC_8(VAR_5, (*VAR_3) + 1, sizeof *VAR_5);
   VAR_5[(*VAR_3)++] = FUNC_10(VAR_7, VAR_13);

  next:
   VAR_15 = FUNC_3(VAR_15);
  }
 }
 for (VAR_11 = 0; VAR_11 < (*VAR_3); VAR_11++)
  FUNC_0("complete %u: %s", VAR_11, VAR_5[VAR_11]);
 return (VAR_5);
}
