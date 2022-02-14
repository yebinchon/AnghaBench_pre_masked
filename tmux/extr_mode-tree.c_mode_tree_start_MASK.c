
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct window_pane {int base; } ;
struct screen {int mode; } ;
struct TYPE_2__ {size_t field; scalar_t__ reversed; } ;
struct mode_tree_data {int references; char const** sort_list; size_t sort_size; int preview; struct screen screen; int children; int menucb; int searchcb; int drawcb; int buildcb; int * filter; TYPE_1__ sort_crit; struct menu_item const* menu; void* modedata; struct window_pane* wp; } ;
struct menu_item {int dummy; } ;
struct args {int dummy; } ;
typedef int mode_tree_search_cb ;
typedef int mode_tree_menu_cb ;
typedef int mode_tree_draw_cb ;
typedef int mode_tree_build_cb ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (struct args*,float) ;
 scalar_t__ FUNC_2 (struct args*,float) ;
 int FUNC_3 (struct screen*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 struct mode_tree_data* FUNC_7 (int,int) ;
 int * FUNC_8 (char*) ;

struct mode_tree_data *
FUNC_9(struct window_pane *VAR_1, struct args *VAR_2,
    mode_tree_build_cb VAR_3, mode_tree_draw_cb VAR_4,
    mode_tree_search_cb VAR_5, mode_tree_menu_cb VAR_6, void *VAR_7,
    const struct menu_item *VAR_8, const char **VAR_9, u_int VAR_10,
    struct screen **VAR_11)
{
 struct mode_tree_data *VAR_12;
 const char *VAR_13;
 u_int VAR_14;

 VAR_12 = FUNC_7(1, sizeof *VAR_12);
 VAR_12->references = 1;

 VAR_12->wp = VAR_1;
 VAR_12->modedata = VAR_7;
 VAR_12->menu = VAR_8;

 VAR_12->sort_list = VAR_9;
 VAR_12->sort_size = VAR_10;

 VAR_12->preview = !FUNC_2(VAR_2, 'N');

 VAR_13 = FUNC_1(VAR_2, 'O');
 if (VAR_13 != ((void*)0)) {
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
   if (FUNC_6(VAR_13, VAR_9[VAR_14]) == 0)
    VAR_12->sort_crit.field = VAR_14;
  }
 }
 VAR_12->sort_crit.reversed = FUNC_2(VAR_2, 'r');

 if (FUNC_2(VAR_2, 'f'))
  VAR_12->filter = FUNC_8(FUNC_1(VAR_2, 'f'));
 else
  VAR_12->filter = ((void*)0);

 VAR_12->buildcb = VAR_3;
 VAR_12->drawcb = VAR_4;
 VAR_12->searchcb = VAR_5;
 VAR_12->menucb = VAR_6;

 FUNC_0(&VAR_12->children);

 *VAR_11 = &VAR_12->screen;
 FUNC_3(*VAR_11, FUNC_4(&VAR_1->base), FUNC_5(&VAR_1->base), 0);
 (*VAR_11)->mode &= ~VAR_0;

 return (VAR_12);
}
