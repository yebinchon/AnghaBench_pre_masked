
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct winlink {struct window* window; } ;
struct window {int sx; int sy; int options; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct session* s; struct winlink* wl; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args {scalar_t__ argc; int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct args*,char,int ,int ,char**) ;
 int FUNC_2 (struct cmdq_item*,char*,char const*) ;
 int FUNC_3 (int *,struct session*,struct window*,int*,int*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct window*,int,int) ;
 int FUNC_7 (int ,int,int ,char const**) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_8, struct cmdq_item *VAR_9)
{
 struct args *VAR_10 = VAR_8->args;
 struct winlink *VAR_11 = VAR_9->target.wl;
 struct window *VAR_12 = VAR_11->window;
 struct session *VAR_13 = VAR_9->target.s;
 const char *VAR_14;
 char *VAR_15;
 u_int VAR_16, VAR_17, VAR_18;

 if (VAR_10->argc == 0)
  VAR_16 = 1;
 else {
  VAR_16 = FUNC_7(VAR_10->argv[0], 1, VAR_2, &VAR_14);
  if (VAR_14 != ((void*)0)) {
   FUNC_2(VAR_9, "adjustment %s", VAR_14);
   return (VAR_0);
  }
 }

 VAR_17 = VAR_12->sx;
 VAR_18 = VAR_12->sy;

 if (FUNC_0(VAR_10, 'x')) {
  VAR_17 = FUNC_1(VAR_10, 'x', VAR_4, VAR_3,
      &VAR_15);
  if (VAR_15 != ((void*)0)) {
   FUNC_2(VAR_9, "width %s", VAR_15);
   FUNC_4(VAR_15);
   return (VAR_0);
  }
 }
 if (FUNC_0(VAR_10, 'y')) {
  VAR_18 = FUNC_1(VAR_10, 'y', VAR_4, VAR_3,
      &VAR_15);
  if (VAR_15 != ((void*)0)) {
   FUNC_2(VAR_9, "height %s", VAR_15);
   FUNC_4(VAR_15);
   return (VAR_0);
  }
 }

 if (FUNC_0(VAR_10, 'L')) {
  if (VAR_17 >= VAR_16)
   VAR_17 -= VAR_16;
 } else if (FUNC_0(VAR_10, 'R'))
  VAR_17 += VAR_16;
 else if (FUNC_0(VAR_10, 'U')) {
  if (VAR_18 >= VAR_16)
   VAR_18 -= VAR_16;
 } else if (FUNC_0(VAR_10, 'D'))
  VAR_18 += VAR_16;

 if (FUNC_0(VAR_10, 'A'))
  FUNC_3(((void*)0), VAR_13, VAR_12, &VAR_17, &VAR_18, VAR_5);
 else if (FUNC_0(VAR_10, 'a'))
  FUNC_3(((void*)0), VAR_13, VAR_12, &VAR_17, &VAR_18, VAR_7);

 FUNC_5(VAR_12->options, "window-size", VAR_6);
 FUNC_6(VAR_12, VAR_17, VAR_18);

 return (VAR_1);
}
