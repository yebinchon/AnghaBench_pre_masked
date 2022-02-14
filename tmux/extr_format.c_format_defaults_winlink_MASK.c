
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct winlink {int idx; int flags; struct window* window; struct session* session; } ;
struct window {int dummy; } ;
struct session {int lastw; int windows; struct winlink* curw; } ;
struct format_tree {struct winlink* wl; struct window* w; struct client* c; } ;
struct client {int tty; } ;
struct TYPE_2__ {struct winlink* wl; } ;


 struct winlink* FUNC_0 (int ,int *) ;
 struct winlink* FUNC_1 (int ,int *) ;
 struct winlink* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct format_tree*,char*,char*,...) ;
 int FUNC_4 (struct format_tree*,char*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct format_tree*,struct window*) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct session*,struct window*) ;
 int FUNC_8 (int *,int*,int*,int*,int*) ;
 int FUNC_9 (struct winlink*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(struct format_tree *VAR_6, struct winlink *VAR_7)
{
 struct client *VAR_8 = VAR_6->c;
 struct session *VAR_9 = VAR_7->session;
 struct window *VAR_10 = VAR_7->window;
 int VAR_11;
 u_int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_6->w == ((void*)0))
  VAR_6->w = VAR_7->window;
 VAR_6->wl = VAR_7;

 FUNC_5(VAR_6, VAR_10);

 if (VAR_8 != ((void*)0)) {
  VAR_11 = FUNC_8(&VAR_8->tty, &VAR_12, &VAR_13, &VAR_14, &VAR_15);
  FUNC_3(VAR_6, "window_bigger", "%d", VAR_11);
  if (VAR_11) {
   FUNC_3(VAR_6, "window_offset_x", "%u", VAR_12);
   FUNC_3(VAR_6, "window_offset_y", "%u", VAR_13);
  }
 }

 FUNC_3(VAR_6, "window_index", "%d", VAR_7->idx);
 FUNC_4(VAR_6, "window_stack_index", VAR_3);
 FUNC_3(VAR_6, "window_flags", "%s", FUNC_9(VAR_7));
 FUNC_3(VAR_6, "window_active", "%d", VAR_7 == VAR_9->curw);

 FUNC_3(VAR_6, "window_start_flag", "%d",
     !!(VAR_7 == FUNC_1(VAR_5, &VAR_9->windows)));
 FUNC_3(VAR_6, "window_end_flag", "%d",
     !!(VAR_7 == FUNC_0(VAR_5, &VAR_9->windows)));

 if (FUNC_6() && VAR_4.wl == VAR_7)
     FUNC_3(VAR_6, "window_marked_flag", "1");
 else
     FUNC_3(VAR_6, "window_marked_flag", "0");

 FUNC_3(VAR_6, "window_bell_flag", "%d",
     !!(VAR_7->flags & VAR_1));
 FUNC_3(VAR_6, "window_activity_flag", "%d",
     !!(VAR_7->flags & VAR_0));
 FUNC_3(VAR_6, "window_silence_flag", "%d",
     !!(VAR_7->flags & VAR_2));
 FUNC_3(VAR_6, "window_last_flag", "%d",
     !!(VAR_7 == FUNC_2(&VAR_9->lastw)));
 FUNC_3(VAR_6, "window_linked", "%d", FUNC_7(VAR_9, VAR_7->window));
}
