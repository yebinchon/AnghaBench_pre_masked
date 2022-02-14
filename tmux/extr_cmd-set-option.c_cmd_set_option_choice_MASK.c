
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {char** choices; int name; } ;
struct options {int dummy; } ;
struct cmdq_item {int dummy; } ;


 int FUNC_0 (struct cmdq_item*,char*,char const*) ;
 int FUNC_1 (struct options*,int ) ;
 int FUNC_2 (struct options*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(struct cmdq_item *VAR_0,
    const struct options_table_entry *VAR_1, struct options *VAR_2,
    const char *VAR_3)
{
 const char **VAR_4;
 int VAR_5, VAR_6 = -1;

 if (VAR_3 == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_2, VAR_1->name);
  if (VAR_6 < 2)
   VAR_6 = !VAR_6;
 } else {
  VAR_5 = 0;
  for (VAR_4 = VAR_1->choices; *VAR_4 != ((void*)0); VAR_4++) {
   if (FUNC_3(*VAR_4, VAR_3) == 0)
    VAR_6 = VAR_5;
   VAR_5++;
  }
  if (VAR_6 == -1) {
   FUNC_0(VAR_0, "unknown value: %s", VAR_3);
   return (-1);
  }
 }
 FUNC_2(VAR_2, VAR_1->name, VAR_6);
 return (0);
}
