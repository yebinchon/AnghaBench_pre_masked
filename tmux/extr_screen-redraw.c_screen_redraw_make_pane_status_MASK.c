
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_4__ {int grid; scalar_t__ mode; } ;
struct window_pane {int id; int sx; TYPE_1__ status_screen; void* status_size; } ;
struct window {int options; struct window_pane* active; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {int grid; } ;
struct grid_cell {int attr; } ;
struct format_tree {int dummy; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct format_tree* FUNC_0 (struct client*,int *,int,int ) ;
 int FUNC_1 (struct format_tree*,struct client*,int *,int *,struct window_pane*) ;
 int FUNC_2 (struct screen_write_ctx*,struct grid_cell*,void*,char*,int *) ;
 char* FUNC_3 (struct format_tree*,char const*) ;
 int FUNC_4 (struct format_tree*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct screen*,TYPE_1__*,int) ;
 char* FUNC_8 (int ,char*) ;
 int FUNC_9 (struct screen*) ;
 int FUNC_10 (TYPE_1__*,void*,int,int ) ;
 int FUNC_11 (struct screen_write_ctx*,int ,int ,int ) ;
 int FUNC_12 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_13 (struct screen_write_ctx*,int *,TYPE_1__*) ;
 int FUNC_14 (struct screen_write_ctx*) ;
 int FUNC_15 (struct grid_cell*,int ,char*) ;

__attribute__((used)) static int
FUNC_16(struct client *VAR_3, struct window *VAR_4,
    struct window_pane *VAR_5)
{
 struct grid_cell VAR_6;
 const char *VAR_7;
 struct format_tree *VAR_8;
 char *VAR_9;
 u_int VAR_10, VAR_11;
 struct screen_write_ctx VAR_12;
 struct screen VAR_13;

 if (VAR_5 == VAR_4->active)
  FUNC_15(&VAR_6, VAR_4->options, "pane-active-border-style");
 else
  FUNC_15(&VAR_6, VAR_4->options, "pane-border-style");

 VAR_7 = FUNC_8(VAR_4->options, "pane-border-format");

 VAR_8 = FUNC_0(VAR_3, ((void*)0), VAR_0|VAR_5->id, VAR_1);
 FUNC_1(VAR_8, VAR_3, ((void*)0), ((void*)0), VAR_5);

 VAR_9 = FUNC_3(VAR_8, VAR_7);
 if (VAR_5->sx < 4)
  VAR_5->status_size = VAR_10 = 0;
 else
  VAR_5->status_size = VAR_10 = VAR_5->sx - 4;

 FUNC_7(&VAR_13, &VAR_5->status_screen, sizeof VAR_13);
 FUNC_10(&VAR_5->status_screen, VAR_10, 1, 0);
 VAR_5->status_screen.mode = 0;

 FUNC_13(&VAR_12, ((void*)0), &VAR_5->status_screen);

 VAR_6.attr |= VAR_2;
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_12(&VAR_12, &VAR_6, 'q');
 VAR_6.attr &= ~VAR_2;

 FUNC_11(&VAR_12, 0, 0, 0);
 FUNC_2(&VAR_12, &VAR_6, VAR_10, VAR_9, ((void*)0));
 FUNC_14(&VAR_12);

 FUNC_5(VAR_9);
 FUNC_4(VAR_8);

 if (FUNC_6(VAR_5->status_screen.grid, VAR_13.grid) == 0) {
  FUNC_9(&VAR_13);
  return (0);
 }
 FUNC_9(&VAR_13);
 return (1);
}
