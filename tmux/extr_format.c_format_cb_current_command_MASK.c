
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int * shell; int argv; int argc; int tty; int fd; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_entry {int value; } ;


 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 char *VAR_3;

 if (VAR_2 == ((void*)0) || VAR_2->shell == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_2->fd, VAR_2->tty);
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  FUNC_1(VAR_3);
  VAR_3 = FUNC_0(VAR_2->argc, VAR_2->argv);
  if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
   FUNC_1(VAR_3);
   VAR_3 = FUNC_4(VAR_2->shell);
  }
 }
 VAR_1->value = FUNC_3(VAR_3);
 FUNC_1(VAR_3);
}
