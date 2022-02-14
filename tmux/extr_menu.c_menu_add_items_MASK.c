
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu_item {int * name; } ;
struct menu {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd_find_state {int dummy; } ;
struct client {int dummy; } ;


 int FUNC_0 (struct menu*,struct menu_item const*,struct cmdq_item*,struct client*,struct cmd_find_state*) ;

void
FUNC_1(struct menu *VAR_0, const struct menu_item *VAR_1,
    struct cmdq_item *VAR_2, struct client *VAR_3, struct cmd_find_state *VAR_4)
{
 const struct menu_item *VAR_5;

 for (VAR_5 = VAR_1; VAR_5->name != ((void*)0); VAR_5++)
  FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3, VAR_4);
}
