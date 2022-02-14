
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {struct window* name; int options; int offset_timer; int alerts_timer; int name_event; struct window* old_layout; int * saved_layout_root; int * layout_root; int references; int id; } ;


 int FUNC_0 (int ,int *,struct window*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct window*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct window*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_9(struct window *VAR_1)
{
 FUNC_6("window @%u destroyed (%d references)", VAR_1->id, VAR_1->references);

 FUNC_0(VAR_0, &VAR_0, VAR_1);

 if (VAR_1->layout_root != ((void*)0))
  FUNC_5(VAR_1->layout_root);
 if (VAR_1->saved_layout_root != ((void*)0))
  FUNC_5(VAR_1->saved_layout_root);
 FUNC_4(VAR_1->old_layout);

 FUNC_8(VAR_1);

 if (FUNC_2(&VAR_1->name_event))
  FUNC_3(&VAR_1->name_event);

 if (FUNC_2(&VAR_1->alerts_timer))
  FUNC_3(&VAR_1->alerts_timer);
 if (FUNC_2(&VAR_1->offset_timer))
  FUNC_1(&VAR_1->offset_timer);

 FUNC_7(VAR_1->options);

 FUNC_4(VAR_1->name);
 FUNC_4(VAR_1);
}
