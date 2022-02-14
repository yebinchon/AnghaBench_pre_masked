
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_tree_modedata {int dead; int data; } ;
struct window_mode_entry {struct window_tree_modedata* data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct window_tree_modedata*) ;

__attribute__((used)) static void
FUNC_2(struct window_mode_entry *VAR_0)
{
 struct window_tree_modedata *VAR_1 = VAR_0->data;

 if (VAR_1 == ((void*)0))
  return;

 VAR_1->dead = 1;
 FUNC_0(VAR_1->data);
 FUNC_1(VAR_1);
}
