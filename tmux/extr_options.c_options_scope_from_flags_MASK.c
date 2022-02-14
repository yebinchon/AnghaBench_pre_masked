
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {TYPE_1__* window; } ;
struct window_pane {struct options* options; } ;
struct session {struct options* options; } ;
struct options {int dummy; } ;
struct cmd_find_state {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct args {int dummy; } ;
struct TYPE_2__ {struct options* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 struct options* VAR_5 ;
 struct options* VAR_6 ;
 struct options* VAR_7 ;
 int FUNC_2 (char**,char*,...) ;

int
FUNC_3(struct args *VAR_8, int VAR_9,
    struct cmd_find_state *VAR_10, struct options **VAR_11, char **VAR_12)
{
 struct session *VAR_13 = VAR_10->s;
 struct winlink *VAR_14 = VAR_10->wl;
 struct window_pane *VAR_15 = VAR_10->wp;
 const char *VAR_16 = FUNC_0(VAR_8, 't');

 if (FUNC_1(VAR_8, 's')) {
  *VAR_11 = VAR_5;
  return (VAR_2);
 }

 if (FUNC_1(VAR_8, 'p')) {
  if (VAR_15 == ((void*)0)) {
   if (VAR_16 != ((void*)0))
    FUNC_2(VAR_12, "no such pane: %s", VAR_16);
   else
    FUNC_2(VAR_12, "no current pane");
   return (VAR_0);
  }
  *VAR_11 = VAR_15->options;
  return (VAR_1);
 } else if (VAR_9 || FUNC_1(VAR_8, 'w')) {
  if (FUNC_1(VAR_8, 'g')) {
   *VAR_11 = VAR_7;
   return (VAR_4);
  }
  if (VAR_14 == ((void*)0)) {
   if (VAR_16 != ((void*)0))
    FUNC_2(VAR_12, "no such window: %s", VAR_16);
   else
    FUNC_2(VAR_12, "no current window");
   return (VAR_0);
  }
  *VAR_11 = VAR_14->window->options;
  return (VAR_4);
 } else {
  if (FUNC_1(VAR_8, 'g')) {
   *VAR_11 = VAR_6;
   return (VAR_3);
  }
  if (VAR_13 == ((void*)0)) {
   if (VAR_16 != ((void*)0))
    FUNC_2(VAR_12, "no such session: %s", VAR_16);
   else
    FUNC_2(VAR_12, "no current session");
   return (VAR_0);
  }
  *VAR_11 = VAR_13->options;
  return (VAR_3);
 }
}
