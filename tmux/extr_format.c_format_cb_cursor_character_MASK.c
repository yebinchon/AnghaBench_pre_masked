
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cy; int cx; int grid; } ;
struct window_pane {TYPE_2__ base; } ;
struct TYPE_3__ {int data; scalar_t__ size; } ;
struct grid_cell {int flags; TYPE_1__ data; } ;
struct format_tree {struct window_pane* wp; } ;
struct format_entry {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct grid_cell*) ;
 int FUNC_1 (int *,char*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct format_tree *VAR_1, struct format_entry *VAR_2)
{
 struct window_pane *VAR_3 = VAR_1->wp;
 struct grid_cell VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_3->base.grid, VAR_3->base.cx, VAR_3->base.cy, &VAR_4);
 if (~VAR_4.flags & VAR_0)
  FUNC_1(&VAR_2->value, "%.*s", (int)VAR_4.data.size, VAR_4.data.data);
}
