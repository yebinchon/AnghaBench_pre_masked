
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct paste_buffer {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {struct client* client; TYPE_1__ target; } ;
struct cmd {struct args* args; int * entry; } ;
struct client {int flags; int stdout_data; int * session; } ;
struct args {int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 struct client* FUNC_2 (struct cmdq_item*,int *,int) ;
 int VAR_6 ;
 int FUNC_3 (struct cmdq_item*,char*,...) ;
 int FUNC_4 (struct cmdq_item*,char*,char*) ;
 int VAR_7 ;
 int FUNC_5 (int ,char const*,size_t) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char const*) ;
 char* FUNC_8 (struct cmdq_item*,int ,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_9 (char*) ;
 size_t FUNC_10 (char const*,int,size_t,int *) ;
 char* FUNC_11 (char const*,char,size_t) ;
 char* FUNC_12 (struct paste_buffer*,size_t*) ;
 struct paste_buffer* FUNC_13 (char const*) ;
 struct paste_buffer* FUNC_14 (int *) ;
 char* FUNC_15 (struct client*,char*) ;
 int FUNC_16 (struct client*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,char const*,size_t,int) ;
 char* FUNC_20 (char*,size_t) ;
 char* FUNC_21 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_22(struct cmd *VAR_8, struct cmdq_item *VAR_9)
{
 struct args *VAR_10 = VAR_8->args;
 struct client *VAR_11 = FUNC_2(VAR_9, ((void*)0), 1);
 struct session *VAR_12 = VAR_9->target.s;
 struct winlink *VAR_13 = VAR_9->target.wl;
 struct window_pane *VAR_14 = VAR_9->target.wp;
 struct paste_buffer *VAR_15;
 const char *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 char *VAR_21, *VAR_22, *VAR_23;
 size_t VAR_24, VAR_25, VAR_26, VAR_27;
 FILE *VAR_28;

 if (!FUNC_1(VAR_10, 'b')) {
  if ((VAR_15 = FUNC_14(((void*)0))) == ((void*)0)) {
   FUNC_3(VAR_9, "no buffers");
   return (VAR_1);
  }
 } else {
  VAR_16 = FUNC_0(VAR_10, 'b');
  VAR_15 = FUNC_13(VAR_16);
  if (VAR_15 == ((void*)0)) {
   FUNC_3(VAR_9, "no buffer %s", VAR_16);
   return (VAR_1);
  }
 }
 VAR_17 = FUNC_12(VAR_15, &VAR_27);

 if (VAR_8->entry == &VAR_6)
  VAR_22 = FUNC_21("-");
 else
  VAR_22 = FUNC_8(VAR_9, VAR_10->argv[0], VAR_11, VAR_12, VAR_13, VAR_14);
 if (FUNC_17(VAR_22, "-") == 0) {
  FUNC_9(VAR_22);
  VAR_11 = VAR_9->client;
  if (VAR_11 == ((void*)0)) {
   FUNC_3(VAR_9, "can't write to stdout");
   return (VAR_1);
  }
  if (VAR_11->session == ((void*)0) || (VAR_11->flags & VAR_0))
   goto do_stdout;
  goto do_print;
 }

 VAR_20 = "wb";
 if (FUNC_1(VAR_8->args, 'a'))
  VAR_20 = "ab";

 VAR_23 = FUNC_15(VAR_9->client, VAR_22);
 FUNC_9(VAR_22);

 VAR_28 = FUNC_7(VAR_23, VAR_20);
 if (VAR_28 == ((void*)0)) {
  FUNC_3(VAR_9, "%s: %s", VAR_23, FUNC_18(VAR_7));
  FUNC_9(VAR_23);
  return (VAR_1);
 }

 if (FUNC_10(VAR_17, 1, VAR_27, VAR_28) != VAR_27) {
  FUNC_3(VAR_9, "%s: write error", VAR_23);
  FUNC_6(VAR_28);
  FUNC_9(VAR_23);
  return (VAR_1);
 }

 FUNC_6(VAR_28);
 FUNC_9(VAR_23);

 return (VAR_2);

do_stdout:
 FUNC_5(VAR_11->stdout_data, VAR_17, VAR_27);
 FUNC_16(VAR_11);
 return (VAR_2);

do_print:
 if (VAR_27 > (VAR_3 / 4) - 1) {
  FUNC_3(VAR_9, "buffer too big");
  return (VAR_1);
 }
 VAR_21 = ((void*)0);

 VAR_25 = 0;
 while (VAR_25 != VAR_27) {
  VAR_18 = VAR_17 + VAR_25;
  VAR_19 = FUNC_11(VAR_18, '\n', VAR_27 - VAR_25);
  if (VAR_19 != ((void*)0))
   VAR_24 = VAR_19 - VAR_18;
  else
   VAR_24 = VAR_27 - VAR_25;

  VAR_26 = VAR_24 * 4 + 1;
  VAR_21 = FUNC_20(VAR_21, VAR_26);

  FUNC_19(VAR_21, VAR_18, VAR_24, VAR_4|VAR_5);
  FUNC_4(VAR_9, "%s", VAR_21);

  VAR_25 += VAR_24 + (VAR_19 != ((void*)0));
 }

 FUNC_9(VAR_21);
 return (VAR_2);
}
