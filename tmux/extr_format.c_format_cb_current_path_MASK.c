
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int fd; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_entry {int value; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 char *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_0(VAR_2->fd);
 if (VAR_3 != ((void*)0))
  VAR_1->value = FUNC_1(VAR_3);
}
