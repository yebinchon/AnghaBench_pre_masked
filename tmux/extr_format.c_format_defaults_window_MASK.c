
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int id; int name; int sx; int sy; int flags; int activity_time; } ;
struct format_tree {struct window* w; } ;


 int VAR_0 ;
 int FUNC_0 (struct format_tree*,char*,char*,int) ;
 int FUNC_1 (struct format_tree*,char*,int ) ;
 int FUNC_2 (struct format_tree*,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct window*) ;

void
FUNC_4(struct format_tree *VAR_3, struct window *VAR_4)
{
 VAR_3->w = VAR_4;

 FUNC_2(VAR_3, "window_activity", &VAR_4->activity_time);
 FUNC_0(VAR_3, "window_id", "@%u", VAR_4->id);
 FUNC_0(VAR_3, "window_name", "%s", VAR_4->name);
 FUNC_0(VAR_3, "window_width", "%u", VAR_4->sx);
 FUNC_0(VAR_3, "window_height", "%u", VAR_4->sy);
 FUNC_1(VAR_3, "window_layout", VAR_1);
 FUNC_1(VAR_3, "window_visible_layout",
     VAR_2);
 FUNC_0(VAR_3, "window_panes", "%u", FUNC_3(VAR_4));
 FUNC_0(VAR_3, "window_zoomed_flag", "%d",
     !!(VAR_4->flags & VAR_0));
}
