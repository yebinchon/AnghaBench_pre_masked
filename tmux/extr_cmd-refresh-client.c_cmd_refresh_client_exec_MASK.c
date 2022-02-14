
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window {scalar_t__ sx; scalar_t__ sy; } ;
struct tty {scalar_t__ oox; scalar_t__ ooy; scalar_t__ osx; scalar_t__ osy; } ;
struct cmdq_item {int dummy; } ;
struct cmd {struct args* args; } ;
struct client {scalar_t__ pan_ox; scalar_t__ pan_oy; int flags; struct tty tty; TYPE_2__* session; struct window* pan_window; } ;
struct args {scalar_t__ argc; int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {TYPE_1__* curw; } ;
struct TYPE_3__ {struct window* window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_0 (struct args*,float) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 struct client* FUNC_2 (struct cmdq_item*,char*,int ) ;
 int FUNC_3 (struct cmdq_item*,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct client*) ;
 int FUNC_7 (struct client*) ;
 int FUNC_8 (char const*,char*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char**,char*) ;
 scalar_t__ FUNC_11 (int ,int,int ,char const**) ;
 int FUNC_12 (struct tty*,int ,char*,char*) ;
 int FUNC_13 (struct tty*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct client*) ;
 char* FUNC_15 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_16(struct cmd *VAR_10, struct cmdq_item *VAR_11)
{
 struct args *VAR_12 = VAR_10->args;
 struct client *VAR_13;
 struct tty *VAR_14;
 struct window *VAR_15;
 const char *VAR_16, *VAR_17;
 char *VAR_18, *VAR_19, *VAR_20;
 u_int VAR_21, VAR_22, VAR_23;

 if ((VAR_13 = FUNC_2(VAR_11, FUNC_0(VAR_12, 't'), 0)) == ((void*)0))
  return (VAR_4);
 VAR_14 = &VAR_13->tty;

 if (FUNC_1(VAR_12, 'c') ||
     FUNC_1(VAR_12, 'L') ||
     FUNC_1(VAR_12, 'R') ||
     FUNC_1(VAR_12, 'U') ||
     FUNC_1(VAR_12, 'D'))
 {
  if (VAR_12->argc == 0)
   VAR_23 = 1;
  else {
   VAR_23 = FUNC_11(VAR_12->argv[0], 1, VAR_6, &VAR_17);
   if (VAR_17 != ((void*)0)) {
    FUNC_3(VAR_11, "adjustment %s", VAR_17);
    return (VAR_4);
   }
  }

  if (FUNC_1(VAR_12, 'c'))
      VAR_13->pan_window = ((void*)0);
  else {
   VAR_15 = VAR_13->session->curw->window;
   if (VAR_13->pan_window != VAR_15) {
    VAR_13->pan_window = VAR_15;
    VAR_13->pan_ox = VAR_14->oox;
    VAR_13->pan_oy = VAR_14->ooy;
   }
   if (FUNC_1(VAR_12, 'L')) {
    if (VAR_13->pan_ox > VAR_23)
     VAR_13->pan_ox -= VAR_23;
    else
     VAR_13->pan_ox = 0;
   } else if (FUNC_1(VAR_12, 'R')) {
    VAR_13->pan_ox += VAR_23;
    if (VAR_13->pan_ox > VAR_15->sx - VAR_14->osx)
     VAR_13->pan_ox = VAR_15->sx - VAR_14->osx;
   } else if (FUNC_1(VAR_12, 'U')) {
    if (VAR_13->pan_oy > VAR_23)
     VAR_13->pan_oy -= VAR_23;
    else
     VAR_13->pan_oy = 0;
   } else if (FUNC_1(VAR_12, 'D')) {
    VAR_13->pan_oy += VAR_23;
    if (VAR_13->pan_oy > VAR_15->sy - VAR_14->osy)
     VAR_13->pan_oy = VAR_15->sy - VAR_14->osy;
   }
  }
  FUNC_14(VAR_13);
  FUNC_6(VAR_13);
  return (VAR_5);
 }

 if (FUNC_1(VAR_12, 'l')) {
  if (VAR_13->session != ((void*)0))
   FUNC_12(&VAR_13->tty, VAR_7, "", "?");
  return (VAR_5);
 }

 if (FUNC_1(VAR_12, 'C') || FUNC_1(VAR_12, 'F')) {
  if (FUNC_1(VAR_12, 'C')) {
   if (!(VAR_13->flags & VAR_0)) {
    FUNC_3(VAR_11, "not a control client");
    return (VAR_4);
   }
   VAR_16 = FUNC_0(VAR_12, 'C');
   if (FUNC_8(VAR_16, "%u,%u", &VAR_21, &VAR_22) != 2 &&
       FUNC_8(VAR_16, "%ux%u", &VAR_21, &VAR_22) != 2) {
    FUNC_3(VAR_11, "bad size argument");
    return (VAR_4);
   }
   if (VAR_21 < VAR_9 || VAR_21 > VAR_8 ||
       VAR_22 < VAR_9 || VAR_22 > VAR_8) {
    FUNC_3(VAR_11, "size too small or too big");
    return (VAR_4);
   }
   FUNC_13(&VAR_13->tty, VAR_21, VAR_22);
   VAR_13->flags |= VAR_2;
   FUNC_5();
  }
  if (FUNC_1(VAR_12, 'F')) {
   if (!(VAR_13->flags & VAR_0)) {
    FUNC_3(VAR_11, "not a control client");
    return (VAR_4);
   }
   VAR_20 = VAR_18 = FUNC_15(FUNC_0(VAR_12, 'F'));
   while ((VAR_19 = FUNC_10(&VAR_20, ",")) != ((void*)0)) {

    if (FUNC_9(VAR_19, "no-output") == 0)
     VAR_13->flags |= VAR_1;
   }
   FUNC_4(VAR_18);
  }
  return (VAR_5);
 }

 if (FUNC_1(VAR_12, 'S')) {
  VAR_13->flags |= VAR_3;
  FUNC_7(VAR_13);
 } else {
  VAR_13->flags |= VAR_3;
  FUNC_6(VAR_13);
 }
 return (VAR_5);
}
