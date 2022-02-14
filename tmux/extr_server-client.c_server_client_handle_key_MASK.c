
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct key_event {int key; } ;
struct cmdq_item {int dummy; } ;
struct client {int flags; int (* overlay_key ) (struct client*,struct key_event*) ;int * prompt_string; struct session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct client*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_1 (int ,struct key_event*) ;
 int FUNC_2 (struct client*) ;
 int VAR_3 ;
 int FUNC_3 (struct client*) ;
 scalar_t__ FUNC_4 (struct client*,int ) ;
 int FUNC_5 (struct client*,struct key_event*) ;

int
FUNC_6(struct client *VAR_4, struct key_event *VAR_5)
{
 struct session *VAR_6 = VAR_4->session;
 struct cmdq_item *VAR_7;


 if (VAR_6 == ((void*)0) || (VAR_4->flags & (VAR_0|VAR_2)) != 0)
  return (0);






 if (~VAR_4->flags & VAR_1) {
  FUNC_3(VAR_4);
  if (VAR_4->prompt_string != ((void*)0)) {
   if (FUNC_4(VAR_4, VAR_5->key) == 0)
    return (0);
  }
  if (VAR_4->overlay_key != ((void*)0)) {
   switch (VAR_4->overlay_key(VAR_4, VAR_5)) {
   case 0:
    return (0);
   case 1:
    FUNC_2(VAR_4);
    return (0);
   }
  }
  FUNC_2(VAR_4);
 }





 VAR_7 = FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_4, VAR_7);
 return (1);
}
