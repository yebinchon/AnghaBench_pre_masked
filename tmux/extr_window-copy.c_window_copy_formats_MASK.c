
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct TYPE_2__ {int grid; int * sel; } ;
struct window_copy_mode_data {char* oy; char* rectflag; char* cx; char* cy; char* selx; char* sely; char* endselx; char* endsely; TYPE_1__ screen; } ;
struct format_tree {int dummy; } ;


 int FUNC_0 (struct format_tree*,char*,char*,char*) ;
 char* FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_0, struct format_tree *VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_0->data;
 char *VAR_3;

 FUNC_0(VAR_1, "scroll_position", "%d", VAR_2->oy);
 FUNC_0(VAR_1, "rectangle_toggle", "%d", VAR_2->rectflag);

 FUNC_0(VAR_1, "copy_cursor_x", "%d", VAR_2->cx);
 FUNC_0(VAR_1, "copy_cursor_y", "%d", VAR_2->cy);

 FUNC_0(VAR_1, "selection_present", "%d", VAR_2->screen.sel != ((void*)0));
 if (VAR_2->screen.sel != ((void*)0)) {
  FUNC_0(VAR_1, "selection_start_x", "%d", VAR_2->selx);
  FUNC_0(VAR_1, "selection_start_y", "%d", VAR_2->sely);
  FUNC_0(VAR_1, "selection_end_x", "%d", VAR_2->endselx);
  FUNC_0(VAR_1, "selection_end_y", "%d", VAR_2->endsely);
 }

 VAR_3 = FUNC_2(VAR_2->screen.grid, VAR_2->cx, VAR_2->cy);
 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_1, "copy_cursor_word", "%s", VAR_3);
  FUNC_3(VAR_3);
 }

 VAR_3 = FUNC_1(VAR_2->screen.grid, VAR_2->cy);
 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_1, "copy_cursor_line", "%s", VAR_3);
  FUNC_3(VAR_3);
 }
}
