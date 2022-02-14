
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct mouse_event {scalar_t__ x; int y; int b; } ;
struct menu_item {char* name; scalar_t__ key; int command; } ;
struct menu_data {int choice; int flags; scalar_t__ px; int py; int fs; TYPE_2__* item; int (* cb ) (struct menu*,size_t,scalar_t__,int ) ;int data; struct menu* menu; } ;
struct menu {int count; scalar_t__ width; struct menu_item* items; } ;
struct key_event {scalar_t__ key; struct mouse_event m; } ;
struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; int cmdlist; int error; } ;
struct client {int flags; struct menu_data* overlay_data; } ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct TYPE_3__ {struct mouse_event mouse; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (scalar_t__) ;

 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct cmd_parse_result* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct client*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_6 (int ,int *,struct mouse_event*,int ) ;
 struct cmdq_item* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct menu*,size_t,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_10(struct client *VAR_2, struct key_event *VAR_3)
{
 struct menu_data *VAR_4 = VAR_2->overlay_data;
 struct menu *VAR_5 = VAR_4->menu;
 struct mouse_event *VAR_6 = &VAR_3->m;
 u_int VAR_7;
 int VAR_8 = VAR_5->count, VAR_9 = VAR_4->choice;
 const struct menu_item *VAR_10;
 struct cmdq_item *VAR_11;
 struct cmd_parse_result *VAR_12;
 const char *VAR_13;

 if (FUNC_0(VAR_3->key)) {
  if (VAR_4->flags & VAR_1) {
   if (FUNC_1(VAR_6->b) != 0)
    return (1);
   return (0);
  }
  if (VAR_6->x < VAR_4->px ||
      VAR_6->x > VAR_4->px + 4 + VAR_5->width ||
      VAR_6->y < VAR_4->py + 1 ||
      VAR_6->y > VAR_4->py + 1 + VAR_8 - 1) {
   if (FUNC_2(VAR_6->b))
    return (1);
   if (VAR_4->choice != -1) {
    VAR_4->choice = -1;
    VAR_2->flags |= VAR_0;
   }
   return (0);
  }
  if (FUNC_2(VAR_6->b))
   goto chosen;
  VAR_4->choice = VAR_6->y - (VAR_4->py + 1);
  if (VAR_4->choice != VAR_9)
   VAR_2->flags |= VAR_0;
  return (0);
 }
 for (VAR_7 = 0; VAR_7 < (u_int)VAR_8; VAR_7++) {
  VAR_13 = VAR_5->items[VAR_7].name;
  if (VAR_13 == ((void*)0) || *VAR_13 == '-')
   continue;
  if (VAR_3->key == VAR_5->items[VAR_7].key) {
   VAR_4->choice = VAR_7;
   goto chosen;
  }
 }
 switch (VAR_3->key) {
 case 128:
 case 'k':
  if (VAR_9 == -1)
   VAR_9 = 0;
  do {
   if (VAR_4->choice == -1 || VAR_4->choice == 0)
    VAR_4->choice = VAR_8 - 1;
   else
    VAR_4->choice--;
   VAR_13 = VAR_5->items[VAR_4->choice].name;
  } while ((VAR_13 == ((void*)0) || *VAR_13 == '-') && VAR_4->choice != VAR_9);
  VAR_2->flags |= VAR_0;
  return (0);
 case 129:
 case 'j':
  if (VAR_9 == -1)
   VAR_9 = 0;
  do {
   if (VAR_4->choice == -1 || VAR_4->choice == VAR_8 - 1)
    VAR_4->choice = 0;
   else
    VAR_4->choice++;
   VAR_13 = VAR_5->items[VAR_4->choice].name;
  } while ((VAR_13 == ((void*)0) || *VAR_13 == '-') && VAR_4->choice != VAR_9);
  VAR_2->flags |= VAR_0;
  return (0);
 case '\r':
  goto chosen;
 case '\033':
 case '\003':
 case '\007':
 case 'q':
  return (1);
 }
 return (0);

chosen:
 if (VAR_4->choice == -1)
  return (1);
 VAR_10 = &VAR_5->items[VAR_4->choice];
 if (VAR_10->name == ((void*)0) || *VAR_10->name == '-')
  return (1);
 if (VAR_4->cb != ((void*)0)) {
     VAR_4->cb(VAR_4->menu, VAR_4->choice, VAR_10->key, VAR_4->data);
     VAR_4->cb = ((void*)0);
     return (1);
 }

 VAR_12 = FUNC_4(VAR_10->command, ((void*)0));
 switch (VAR_12->status) {
 case 132:
  VAR_11 = ((void*)0);
  break;
 case 131:
  VAR_11 = FUNC_7(VAR_12->error);
  FUNC_8(VAR_12->error);
  FUNC_5(VAR_2, VAR_11);
  break;
 case 130:
  if (VAR_4->item != ((void*)0))
   VAR_6 = &VAR_4->item->shared->mouse;
  else
   VAR_6 = ((void*)0);
  VAR_11 = FUNC_6(VAR_12->cmdlist, &VAR_4->fs, VAR_6, 0);
  FUNC_3(VAR_12->cmdlist);
  FUNC_5(VAR_2, VAR_11);
  break;
 }
 return (1);
}
