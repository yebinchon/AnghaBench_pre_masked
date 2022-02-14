
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* window; } ;
struct window_mode_entry {struct window_pane* wp; } ;
struct TYPE_2__ {int options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static const char *
FUNC_1(struct window_mode_entry *VAR_1)
{
 struct window_pane *VAR_2 = VAR_1->wp;

 if (FUNC_0(VAR_2->window->options, "mode-keys") == VAR_0)
  return ("copy-mode-vi");
 return ("copy-mode");
}
