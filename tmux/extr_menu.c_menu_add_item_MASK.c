
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct menu_item {char* name; char* command; int key; } ;
struct menu {scalar_t__ count; scalar_t__ width; struct menu_item* items; } ;
struct cmdq_item {int dummy; } ;
struct cmd_find_state {int * wp; int * wl; int * s; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct cmdq_item*,char const*,struct client*,int *,int *,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct menu_item*,int ,int) ;
 int FUNC_5 (char**,char*,char*,...) ;
 struct menu_item* FUNC_6 (struct menu_item*,scalar_t__,int) ;

void
FUNC_7(struct menu *VAR_2, const struct menu_item *VAR_3,
    struct cmdq_item *VAR_4, struct client *VAR_5, struct cmd_find_state *VAR_6)
{
 struct menu_item *VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10, *VAR_11;
 u_int VAR_12;
 int VAR_13;

 VAR_13 = (VAR_3 == ((void*)0) || VAR_3->name == ((void*)0) || *VAR_3->name == '\0');
 if (VAR_13 && VAR_2->count == 0)
  return;

 VAR_2->items = FUNC_6(VAR_2->items, VAR_2->count + 1,
     sizeof *VAR_2->items);
 VAR_7 = &VAR_2->items[VAR_2->count++];
 FUNC_4(VAR_7, 0, sizeof *VAR_7);

 if (VAR_13)
  return;

 if (VAR_6 != ((void*)0))
  VAR_10 = FUNC_0(VAR_4, VAR_3->name, VAR_5, VAR_6->s, VAR_6->wl, VAR_6->wp);
 else
  VAR_10 = FUNC_0(VAR_4, VAR_3->name, VAR_5, ((void*)0), ((void*)0), ((void*)0));
 if (*VAR_10 == '\0') {
  VAR_2->count--;
  return;
 }
 if (*VAR_10 != '-' && VAR_3->key != VAR_1 && VAR_3->key != VAR_0) {
  VAR_8 = FUNC_3(VAR_3->key);
  FUNC_5(&VAR_11, "%s#[default] #[align=right](%s)", VAR_10, VAR_8);
 } else
  FUNC_5(&VAR_11, "%s", VAR_10);
 VAR_7->name = VAR_11;
 FUNC_2(VAR_10);

 VAR_9 = VAR_3->command;
 if (VAR_9 != ((void*)0)) {
  if (VAR_6 != ((void*)0))
   VAR_10 = FUNC_0(VAR_4, VAR_9, VAR_5, VAR_6->s, VAR_6->wl, VAR_6->wp);
  else
   VAR_10 = FUNC_0(VAR_4, VAR_9, VAR_5, ((void*)0), ((void*)0), ((void*)0));
 } else
  VAR_10 = ((void*)0);
 VAR_7->command = VAR_10;
 VAR_7->key = VAR_3->key;

 VAR_12 = FUNC_1(VAR_7->name);
 if (VAR_12 > VAR_2->width)
  VAR_2->width = VAR_12;
}
