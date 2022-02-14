
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int argv; int argc; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_entry {int value; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct format_tree *VAR_0, struct format_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;

 if (VAR_2 == ((void*)0))
  return;

 VAR_1->value = FUNC_0(VAR_2->argc, VAR_2->argv);
}
