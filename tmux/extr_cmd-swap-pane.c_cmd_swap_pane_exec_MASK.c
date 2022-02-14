
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct window_pane {void* sx; void* sy; void* yoff; void* xoff; int flags; int options; struct window* window; struct layout_cell* layout_cell; } ;
struct window {struct window_pane* last; struct window_pane* active; int options; int panes; } ;
struct layout_cell {struct window_pane* wp; } ;
struct TYPE_8__ {struct window_pane* wp; TYPE_3__* wl; } ;
struct TYPE_6__ {struct window_pane* wp; TYPE_1__* wl; } ;
struct cmdq_item {TYPE_4__ source; TYPE_2__ target; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_7__ {struct window* window; } ;
struct TYPE_5__ {struct window* window; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct window_pane* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct window_pane*,struct window_pane*,int ) ;
 int FUNC_2 (int *,struct window_pane*,int ) ;
 struct window_pane* FUNC_3 (int *,int ) ;
 struct window_pane* FUNC_4 (struct window_pane*,int ) ;
 struct window_pane* FUNC_5 (struct window_pane*,int ,int ) ;
 int FUNC_6 (int *,struct window_pane*,int ) ;
 int FUNC_7 (int *,struct window_pane*,struct window_pane*,int ) ;
 scalar_t__ FUNC_8 (struct args*,char) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct window*) ;
 int FUNC_11 (struct window_pane*,void*,void*) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (struct window*) ;
 scalar_t__ FUNC_13 (struct window*,scalar_t__) ;
 int FUNC_14 (struct window*,struct window_pane*,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_15(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct window *VAR_7, *VAR_8;
 struct window_pane *VAR_9, *VAR_10, *VAR_11;
 struct layout_cell *VAR_12, *VAR_13;
 u_int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_8 = VAR_5->target.wl->window;
 VAR_11 = VAR_5->target.wp;
 VAR_7 = VAR_5->source.wl->window;
 VAR_10 = VAR_5->source.wp;

 if (FUNC_13(VAR_8, FUNC_8(VAR_6, 'Z')))
  FUNC_10(VAR_8);

 if (FUNC_8(VAR_6, 'D')) {
  VAR_7 = VAR_8;
  VAR_10 = FUNC_4(VAR_11, VAR_2);
  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_0(&VAR_8->panes);
 } else if (FUNC_8(VAR_6, 'U')) {
  VAR_7 = VAR_8;
  VAR_10 = FUNC_5(VAR_11, VAR_3, VAR_2);
  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_3(&VAR_8->panes, VAR_3);
 }

 if (VAR_7 != VAR_8 && FUNC_13(VAR_7, FUNC_8(VAR_6, 'Z')))
  FUNC_10(VAR_7);

 if (VAR_10 == VAR_11)
  goto out;

 VAR_9 = FUNC_5(VAR_11, VAR_3, VAR_2);
 FUNC_6(&VAR_8->panes, VAR_11, VAR_2);
 FUNC_7(&VAR_7->panes, VAR_10, VAR_11, VAR_2);
 if (VAR_9 == VAR_10)
  VAR_9 = VAR_11;
 if (VAR_9 == ((void*)0))
  FUNC_2(&VAR_8->panes, VAR_10, VAR_2);
 else
  FUNC_1(&VAR_8->panes, VAR_9, VAR_10, VAR_2);

 VAR_12 = VAR_10->layout_cell;
 VAR_13 = VAR_11->layout_cell;
 VAR_12->wp = VAR_11;
 VAR_11->layout_cell = VAR_12;
 VAR_13->wp = VAR_10;
 VAR_10->layout_cell = VAR_13;

 VAR_10->window = VAR_8;
 FUNC_9(VAR_10->options, VAR_8->options);
 VAR_10->flags |= VAR_1;
 VAR_11->window = VAR_7;
 FUNC_9(VAR_11->options, VAR_7->options);
 VAR_11->flags |= VAR_1;

 VAR_14 = VAR_10->sx; VAR_15 = VAR_10->sy;
 VAR_16 = VAR_10->xoff; VAR_17 = VAR_10->yoff;
 VAR_10->xoff = VAR_11->xoff; VAR_10->yoff = VAR_11->yoff;
 FUNC_11(VAR_10, VAR_11->sx, VAR_11->sy);
 VAR_11->xoff = VAR_16; VAR_11->yoff = VAR_17;
 FUNC_11(VAR_11, VAR_14, VAR_15);

 if (!FUNC_8(VAR_6, 'd')) {
  if (VAR_7 != VAR_8) {
   FUNC_14(VAR_7, VAR_11, 1);
   FUNC_14(VAR_8, VAR_10, 1);
  } else {
   VAR_9 = VAR_11;
   FUNC_14(VAR_7, VAR_9, 1);
  }
 } else {
  if (VAR_7->active == VAR_10)
   FUNC_14(VAR_7, VAR_11, 1);
  if (VAR_8->active == VAR_11)
   FUNC_14(VAR_8, VAR_10, 1);
 }
 if (VAR_7 != VAR_8) {
  if (VAR_7->last == VAR_10)
   VAR_7->last = ((void*)0);
  if (VAR_8->last == VAR_11)
   VAR_8->last = ((void*)0);
 }
 FUNC_10(VAR_7);
 FUNC_10(VAR_8);

out:
 if (FUNC_12(VAR_7))
  FUNC_10(VAR_7);
 if (VAR_7 != VAR_8 && FUNC_12(VAR_8))
  FUNC_10(VAR_8);
 return (VAR_0);
}
