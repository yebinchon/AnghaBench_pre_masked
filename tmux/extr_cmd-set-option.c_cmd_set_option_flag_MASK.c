
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int name; } ;
struct options {int dummy; } ;
struct cmdq_item {int dummy; } ;


 int FUNC_0 (struct cmdq_item*,char*,char const*) ;
 int FUNC_1 (struct options*,int ) ;
 int FUNC_2 (struct options*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(struct cmdq_item *VAR_0,
    const struct options_table_entry *VAR_1, struct options *VAR_2,
    const char *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  VAR_4 = !FUNC_1(VAR_2, VAR_1->name);
 else if (FUNC_4(VAR_3, "1") == 0 ||
     FUNC_3(VAR_3, "on") == 0 ||
     FUNC_3(VAR_3, "yes") == 0)
  VAR_4 = 1;
 else if (FUNC_4(VAR_3, "0") == 0 ||
     FUNC_3(VAR_3, "off") == 0 ||
     FUNC_3(VAR_3, "no") == 0)
  VAR_4 = 0;
 else {
  FUNC_0(VAR_0, "bad value: %s", VAR_3);
  return (-1);
 }
 FUNC_2(VAR_2, VAR_1->name, VAR_4);
 return (0);
}
