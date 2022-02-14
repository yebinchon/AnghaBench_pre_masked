
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window_pane {int flags; int event; TYPE_2__* screen; } ;
struct paste_buffer {int dummy; } ;
struct TYPE_3__ {struct window_pane* wp; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct args*,char) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct cmdq_item*,char*,char const*) ;
 char* FUNC_4 (char const*,char,int) ;
 char* FUNC_5 (struct paste_buffer*,size_t*) ;
 int FUNC_6 (struct paste_buffer*) ;
 struct paste_buffer* FUNC_7 (char const*) ;
 struct paste_buffer* FUNC_8 (int *) ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_10(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct window_pane *VAR_7 = VAR_5->target.wp;
 struct paste_buffer *VAR_8;
 const char *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15;
 int VAR_16 = FUNC_1(VAR_6, 'p');

 VAR_10 = ((void*)0);
 if (FUNC_1(VAR_6, 'b'))
  VAR_10 = FUNC_0(VAR_6, 'b');

 if (VAR_10 == ((void*)0))
  VAR_8 = FUNC_8(((void*)0));
 else {
  VAR_8 = FUNC_7(VAR_10);
  if (VAR_8 == ((void*)0)) {
   FUNC_3(VAR_5, "no buffer %s", VAR_10);
   return (VAR_0);
  }
 }

 if (VAR_8 != ((void*)0) && ~VAR_7->flags & VAR_3) {
  VAR_9 = FUNC_0(VAR_6, 's');
  if (VAR_9 == ((void*)0)) {
   if (FUNC_1(VAR_6, 'r'))
    VAR_9 = "\n";
   else
    VAR_9 = "\r";
  }
  VAR_14 = FUNC_9(VAR_9);

  if (VAR_16 && (VAR_7->screen->mode & VAR_2))
   FUNC_2(VAR_7->event, "\033[200~", 6);

  VAR_11 = FUNC_5(VAR_8, &VAR_15);
  VAR_12 = VAR_11 + VAR_15;

  for (;;) {
   VAR_13 = FUNC_4(VAR_11, '\n', VAR_12 - VAR_11);
   if (VAR_13 == ((void*)0))
    break;

   FUNC_2(VAR_7->event, VAR_11, VAR_13 - VAR_11);
   FUNC_2(VAR_7->event, VAR_9, VAR_14);

   VAR_11 = VAR_13 + 1;
  }
  if (VAR_11 != VAR_12)
   FUNC_2(VAR_7->event, VAR_11, VAR_12 - VAR_11);

  if (VAR_16 && (VAR_7->screen->mode & VAR_2))
   FUNC_2(VAR_7->event, "\033[201~", 6);
 }

 if (VAR_8 != ((void*)0) && FUNC_1(VAR_6, 'd'))
  FUNC_6(VAR_8);

 return (VAR_1);
}
