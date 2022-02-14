
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct window_tree_modedata {scalar_t__ references; size_t item_size; struct window_tree_modedata* command; struct window_tree_modedata* format; struct window_tree_modedata* item_list; } ;


 int FUNC_0 (struct window_tree_modedata*) ;
 int FUNC_1 (struct window_tree_modedata) ;

__attribute__((used)) static void
FUNC_2(struct window_tree_modedata *VAR_0)
{
 u_int VAR_1;

 if (--VAR_0->references != 0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->item_size; VAR_1++)
  FUNC_1(VAR_0->item_list[VAR_1]);
 FUNC_0(VAR_0->item_list);

 FUNC_0(VAR_0->format);
 FUNC_0(VAR_0->command);

 FUNC_0(VAR_0);
}
