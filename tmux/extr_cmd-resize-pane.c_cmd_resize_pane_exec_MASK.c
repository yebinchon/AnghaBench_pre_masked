
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct winlink {struct window* window; } ;
struct window_pane {int dummy; } ;
struct window {int flags; int sx; int sy; } ;
struct session {int dummy; } ;
struct cmdq_shared {int mouse; } ;
struct TYPE_3__ {struct session* s; struct winlink* wl; struct window_pane* wp; } ;
struct cmdq_item {TYPE_1__ target; struct client* client; struct cmdq_shared* shared; } ;
struct cmd {struct args* args; } ;
struct TYPE_4__ {int (* mouse_drag_update ) (struct client*,int *) ;} ;
struct client {TYPE_2__ tty; struct session* session; } ;
struct args {scalar_t__ argc; char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct args*,char,int,int,char**) ;
 int * FUNC_3 (int *,struct session**) ;
 int FUNC_4 (struct client*,int *) ;
 int FUNC_5 (struct cmdq_item*,char*,char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct window_pane*,int ,int,int) ;
 int FUNC_8 (struct window_pane*,int ,int) ;
 int FUNC_9 (struct window*) ;
 int FUNC_10 (struct window*) ;
 int FUNC_11 (struct window*) ;
 size_t FUNC_12 (char const*) ;
 void* FUNC_13 (char*,int,int,char const**) ;
 int FUNC_14 (struct window*) ;
 int FUNC_15 (struct window_pane*) ;
 char* FUNC_16 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_17(struct cmd *VAR_7, struct cmdq_item *VAR_8)
{
 struct args *VAR_9 = VAR_7->args;
 struct cmdq_shared *VAR_10 = VAR_8->shared;
 struct window_pane *VAR_11 = VAR_8->target.wp;
 struct winlink *VAR_12 = VAR_8->target.wl;
 struct window *VAR_13 = VAR_12->window;
 struct client *VAR_14 = VAR_8->client;
 struct session *VAR_15 = VAR_8->target.s;
 const char *VAR_16, *VAR_17;
 char *VAR_18, *VAR_19;
 u_int VAR_20;
 int VAR_21, VAR_22, VAR_23;
 size_t VAR_24;

 if (FUNC_1(VAR_9, 'M')) {
  if (FUNC_3(&VAR_10->mouse, &VAR_15) == ((void*)0))
   return (VAR_1);
  if (VAR_14 == ((void*)0) || VAR_14->session != VAR_15)
   return (VAR_1);
  VAR_14->tty.mouse_drag_update = FUNC_4;
  FUNC_4(VAR_14, &VAR_10->mouse);
  return (VAR_1);
 }

 if (FUNC_1(VAR_9, 'Z')) {
  if (VAR_13->flags & VAR_6)
   FUNC_14(VAR_13);
  else
   FUNC_15(VAR_11);
  FUNC_9(VAR_13);
  FUNC_10(VAR_13);
  return (VAR_1);
 }
 FUNC_11(VAR_13);

 if (VAR_9->argc == 0)
  VAR_20 = 1;
 else {
  VAR_20 = FUNC_13(VAR_9->argv[0], 1, VAR_2, &VAR_16);
  if (VAR_16 != ((void*)0)) {
   FUNC_5(VAR_8, "adjustment %s", VAR_16);
   return (VAR_0);
  }
 }

 if ((VAR_17 = FUNC_0(VAR_9, 'x')) != ((void*)0)) {
  VAR_24 = FUNC_12(VAR_17);
  if (VAR_17[VAR_24 - 1] == '%') {
   VAR_19 = FUNC_16(VAR_17);
   VAR_19[VAR_24 - 1] = '\0';
   VAR_23 = FUNC_13(VAR_19, 0, VAR_2, &VAR_16);
   FUNC_6(VAR_19);
   if (VAR_16 != ((void*)0)) {
    FUNC_5(VAR_8, "width %s", VAR_16);
    return (VAR_0);
   }
   VAR_21 = (VAR_13->sx * VAR_23) / 100;
   if (VAR_21 < VAR_5)
    VAR_21 = VAR_5;
   if (VAR_21 > VAR_2)
    VAR_21 = VAR_2;
  } else {
   VAR_21 = FUNC_2(VAR_9, 'x', VAR_5, VAR_2,
       &VAR_18);
   if (VAR_18 != ((void*)0)) {
    FUNC_5(VAR_8, "width %s", VAR_18);
    FUNC_6(VAR_18);
    return (VAR_0);
   }
  }
  FUNC_8(VAR_11, VAR_3, VAR_21);
 }
 if ((VAR_17 = FUNC_0(VAR_9, 'y')) != ((void*)0)) {
  VAR_24 = FUNC_12(VAR_17);
  if (VAR_17[VAR_24 - 1] == '%') {
   VAR_19 = FUNC_16(VAR_17);
   VAR_19[VAR_24 - 1] = '\0';
   VAR_23 = FUNC_13(VAR_19, 0, VAR_2, &VAR_16);
   FUNC_6(VAR_19);
   if (VAR_16 != ((void*)0)) {
    FUNC_5(VAR_8, "height %s", VAR_16);
    return (VAR_0);
   }
   VAR_22 = (VAR_13->sy * VAR_23) / 100;
   if (VAR_22 < VAR_5)
    VAR_22 = VAR_5;
   if (VAR_22 > VAR_2)
    VAR_22 = VAR_2;
  }
  else {
   VAR_22 = FUNC_2(VAR_9, 'y', VAR_5, VAR_2,
       &VAR_18);
   if (VAR_18 != ((void*)0)) {
    FUNC_5(VAR_8, "height %s", VAR_18);
    FUNC_6(VAR_18);
    return (VAR_0);
   }
  }
  FUNC_8(VAR_11, VAR_4, VAR_22);
 }

 if (FUNC_1(VAR_9, 'L'))
  FUNC_7(VAR_11, VAR_3, -VAR_20, 1);
 else if (FUNC_1(VAR_9, 'R'))
  FUNC_7(VAR_11, VAR_3, VAR_20, 1);
 else if (FUNC_1(VAR_9, 'U'))
  FUNC_7(VAR_11, VAR_4, -VAR_20, 1);
 else if (FUNC_1(VAR_9, 'D'))
  FUNC_7(VAR_11, VAR_4, VAR_20, 1);
 FUNC_9(VAR_12->window);

 return (VAR_1);
}
