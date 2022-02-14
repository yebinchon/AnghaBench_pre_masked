
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int * layout_root; int * saved_layout_root; } ;
struct format_tree {struct window* w; } ;
struct format_entry {void* value; } ;


 void* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window *VAR_2 = VAR_0->w;

 if (VAR_2 == ((void*)0))
  return;

 if (VAR_2->saved_layout_root != ((void*)0))
  VAR_1->value = FUNC_0(VAR_2->saved_layout_root);
 else
  VAR_1->value = FUNC_0(VAR_2->layout_root);
}
